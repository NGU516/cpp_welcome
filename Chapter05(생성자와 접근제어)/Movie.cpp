#include "Chapter05.h"

string Movie::getTitle() { return title; }
string Movie::getDirector() { return director; }
double Movie::getRating() { return rating; }
void Movie::setTitle(string t) { title = t; }
void Movie::setDirector(string d) { director = d; }
void Movie::setRating(double r) { rating = r; }

void Movie::Print() {
	cout << "영화 제목: " << title << endl;
	cout << "영화 감독: " << director << endl;
	cout << "영화 평점: " << rating << endl;
	cout << endl;
}