#include <iostream>
using namespace std;

class Student{
    string name;
public:
    Student(string n=""): name{n}{}
    ~Student(){}
    string getName(){return name;}
    void setName(string name) {this->name = name;}
};

class MyClass{
    string className;
    Student* p;
    int size;
    static int count;
public:
    MyClass(string c="", int s=0, Student* p_s=nullptr): className{c}, size{s},p{p_s} {
        p = new Student[size];
    }
    ~MyClass(){delete[] p;}
    void addStudent(Student* student_p){
        p[count] = *student_p;      // 값을 넣기 위해서 *, 배열 자료형 포인터이기 때문에 **로 들어감
        count++;
    }
    void print(){
        cout << "className: " << className << endl;
        for(int i=0;i<size;i++)
            cout << "Student: " << p[i].getName() << endl;      // 포인터 배열에서 멤버 함수 접근
        cout << "size: " << size << endl;
    }
};

int MyClass::count = 0;

int main(){
    Student *hong = new Student("홍길동"); 
    Student *kim = new Student("김철수"); 
    Student *choi = new Student("최자영"); 

    MyClass obj("special", 3);
    obj.addStudent(hong);
    obj.addStudent(kim);
    obj.addStudent(choi);
    obj.print();

    delete hong;
    delete kim;
    delete choi;
    return 0;

}
