#include <iostream>
#include <cstring>
using namespace std;

class MyClass{
public:
    MyClass(const char* str);
    MyClass(const MyClass &other);
    ~MyClass();
private:
    char* stored;
};

MyClass::MyClass(const char* str){
    stored = new char[strlen(str)+1];
    strcpy(stored, str);
    cout << "일반 생성자" << endl;
}

MyClass::MyClass(const MyClass &other){
    this->stored = new char[strlen(other.stored)+1];
    strcpy(stored, other.stored);
    cout << "복사 생성자" << endl;
}

MyClass::~MyClass(){
    delete[] stored;
}

int main(){
    MyClass obj("A반");
    MyClass obj2(obj);

    return 0;
}
