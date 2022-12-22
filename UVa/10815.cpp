// Problem: 10815 - Andy's First Dictionary
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int NOT_EXIST = -1;
const int MAXN = 1e6;

struct BST {
	struct info {
		string word;
		int left = -1, right = -1;
	};
	
	int total = 1, root = NOT_EXIST;
	info node[MAXN];
	
	void insert(const string &word, int &pos) {
		if (pos == NOT_EXIST) {
			pos = total;
			total++;
			node[pos].left = node[pos].right = NOT_EXIST;
			node[pos].word = word;
			return;
		}
		if (node[pos].word > word) {
			insert(word, node[pos].left);
		}
		else {
			insert(word, node[pos].right);
		}
	}
	
	void find(const string &word, int pos) {
		while (pos != NOT_EXIST) {
			if (node[pos].word == word) {
				return;
			}
			if (node[pos].word > word) {
				pos = node[pos].left;
			}
			else {
				pos = node[pos].right;
			}
		}
		insert(word, root);
		return;
	}
	
	void output(const int &pos) {
		if (pos == NOT_EXIST) {
			return;
		}
		output(node[pos].left);
		cout << node[pos].word << '\n';
		output(node[pos].right);
		return;
	}
};

BST dictionary;

bool check(char &c) {
	if (c >= 'A' && c <= 'Z') {
		c = c - 'A' + 'a';
		return false;
	}
	if (c >= 'a' && c <= 'z') {
		return false;
	}
	return true;
}

int main() {
	string s;
	while (getline(cin, s)) {
		string word = "";
		for (int i = 0; i < s.size(); i++) {
			if (check(s[i])) {
				cerr << "ouo " << s[i] << '\n';
				if (word.size() != 0) {
					dictionary.find(word, dictionary.root);
				}
				word = "";
				continue;
			}
			cerr << s[i] << '\n';
			word += s[i];
		}
		if (word.size() != 0) {
			dictionary.find(word, dictionary.root);
		}
	}
	dictionary.output(dictionary.root);
	return 0;
} 