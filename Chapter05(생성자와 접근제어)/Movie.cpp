#include "Chapter05.h"

string Movie::getTitle() { return title; }
string Movie::getDirector() { return director; }
double Movie::getRating() { return rating; }
void Movie::setTitle(string t) { title = t; }
void Movie::setDirector(string d) { director = d; }
void Movie::setRating(double r) { rating = r; }

void Movie::Print() {
	cout << "��ȭ ����: " << title << endl;
	cout << "��ȭ ����: " << director << endl;
	cout << "��ȭ ����: " << rating << endl;
	cout << endl;
}