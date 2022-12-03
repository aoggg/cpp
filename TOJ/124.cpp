// TOJ 124

#include <iostream>
using namespace std;

int main() {
	int year, month, day;
	cin >> year >> month >> day;
	string name;
	cin >> name;
	string review;
	cin >> review;
	cout << year + 1997 << '/' << month << '/' << day << '\n';
	cout << "Doodle Name: " << name << '\n';
	cout << "Reviews: " << review << '\n';
	return 0;
}