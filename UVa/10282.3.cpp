// Problem: 10282 - Babelfish
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;
const int NOT_EXIST = -1;
const string NOT_FOUND = "eh";

struct BST {
	struct info {
		string key = "", word = "";
		int left = -1, right = -1;
	};
	
	info node[MAXN];
	int total = 1, root = -1;
	
	void insert(const string &key, const string &word, int &pos) {
		if (pos == NOT_EXIST) {
			pos = total;
			total++;
			node[pos].key = key;
			node[pos].word = word;
			node[pos].left = node[pos].right = NOT_EXIST;
			return;
		}
		if (node[pos].key > key) {
			insert(key, word, node[pos].left);
		}
		else {
			insert(key, word, node[pos].right);
		}
	}
	
	const string &find(const string &key, int pos) {
		while (pos != NOT_EXIST) {
			if (node[pos].key == key) {
				return node[pos].word;
			}
			else if (node[pos].key > key) {
				pos = node[pos].left;
			}
			else {
				pos = node[pos].right;
			}
		}
		return NOT_FOUND;
		// if (pos == NOT_EXIST) {
			// return NOT_FIND;
		// }
		// if (node[pos].key == key) {
			// return node[pos].word;
		// }
		// else if (node[pos].key > key){
			// return find(key, node[pos].left);
		// }
		// else {
			// return find(key, node[pos].right);
		// }
	}
	
	// void print(int pos) {
		// if (pos == NOT_EXIST) {
			// return;
		// }
		// print(node[pos].left);
		// cout << node[pos].key << '\n';
		// print(node[pos].right);
	// }
};

BST dictionary;

int main() {
	string k;
	while (getline(cin, k)) {
		string key = "", word = "";
		int i = 0;
		for (i = 0; i < k.size(); i++) {
			if (k[i] == ' ') {
				break;
			}
			word += k[i];
		}
		if (i == k.size()) {
			break;
		}
		for (i++; i < k.size(); i++) {
			key += k[i];
		}
		dictionary.insert(key, word, dictionary.root);
	}
	// dictionary.print(dictionary.root);
	// cout << '\n';
	while (getline(cin, k)) {
		cout << dictionary.find(k, dictionary.root) << '\n';
	}
	return 0;
}