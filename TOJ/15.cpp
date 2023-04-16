//TOJ 15

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e4 + 5;
const string JOB[] = {"elder", "nursy", "kit", "warrior", "appentice", "medicent", "deputy", "leader"};

struct info {
    string name, age;
    int job;
} cat[MAXN];

bool older(string a, string b) {
	if (a.size() != b.size()) {
		return a.size() > b.size();
	}
	return a > b;
}

bool cmp(info a, info b) {
    if (a.job == b.job) {
        if (a.age == b.age) {
            return a.name < b.name;    
        }
        if (JOB[a.job] == "appentice") {
            return !older(a.age, b.age); // younger
        }
        return older(a.age, b.age); 
    }
    return a.job < b.job;
};

int main() {
    int N, M;
    while (cin >> N >> M) {
	    for (int i = 0; i < N; i++) {
	        string jobs;
	        cin >> cat[i].name >> jobs >> cat[i].age;
	        for (int j = 0; j < 8; j++) {
	            if (jobs == JOB[j]) {
	                cat[i].job = j;
	                break;
	            }
	        }
	    }
	    sort(cat, cat + N, cmp);
	    for (int i = 0; i < M && i < N; i++) {
	        cout << cat[i].name << '\n';
	    }
	}
    return 0;
}