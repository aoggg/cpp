#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

string s;
int p;

string find_name() {
	string name = "";
	name += s[p];
	p++;
	while (s[p] >= 'a' && s[p] <= 'z') {
		name += s[p];
		p++;
	}
	return name;
}

int find_num() {
	int num = 1;
	bool FT = true;
	while (s[p] >= '0' && s[p] <= '9') {
		if (FT) {
			num = s[p] - '0';
			FT = false;
		}
		else {
			num = num * 10 + s[p] - '0'; 
		}
		p++;
	}
	return num;
}

void merge(vector<pair<string, int>> &a, vector<pair<string, int>> &b) {
	for (int i = 0; i < b.size(); i++) {
		string name = b[i].first;
		int num = b[i].second;
		int place = 0;
		for (place = 0; place < a.size(); place++) {
			if (a[place].first == name) {
				a[place].second += num;
				break;
			}
		}
		if (place == a.size()) {
			a.push_back({name, num});
		}
	}
	return;
}

vector<pair<string, int>> find_element() {
	vector<pair<string, int>> ele;
	while (s[p] != ')') {
		if (s[p] == '(') {
			p++;
			vector<pair<string, int>> e = find_element();
			merge(ele, e);
			continue;
		}
		string name = find_name();
		int num = find_num();
		ele.push_back({name, num});
	}
	p++;
	int num = find_num();
	for (int i = 0; i < ele.size(); i++) {
		ele[i].second *= num;
	}
	return ele;
}

int main() {
	vector<pair<string, int>> element;
	cin >> s;
	p = 0;
	while (p < s.size()) {
		if (s[p] == '(') {
			p++;
			vector<pair<string, int>> e = find_element();
			merge(element, e);
			continue;
		}
		string name = find_name();
		int num = find_num();
		int place = 0;
		for (place = 0; place < element.size(); place++) {
			if (element[place].first == name) {
				element[place].second += num;
				break;
			}
		}
		if (place == element.size()) {
			element.push_back({name, num});
		}
	}
	sort(element.begin(), element.end());
	//output
	cout << s << '\n';
	for (int i = 0; i < element.size(); i++) {
		cout << element[i].first << ':' << element[i].second << '\n';
	}
	return 0;
}