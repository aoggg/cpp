// UVa 10815 Andy's First Dictionary
// 2025-04-08

#include <iostream>
#include <sstream>
using namespace std;

class TreeNode {
private:
    string value_;
public:
    TreeNode *left, *right;
    TreeNode() : left(nullptr), right(nullptr), value_("") {}
    explicit TreeNode(string value) : left(nullptr), right(nullptr), value_(value) {}
    string value() const { return value_; }
};

class BST {
private:
    TreeNode* root_;

    void DFS(TreeNode* cur) {
        if (cur == nullptr) return;
        if (cur -> left != nullptr) DFS(cur -> left);
        cout << cur -> value() << '\n';
        if (cur -> right != nullptr) DFS(cur -> right);
    }
    
public:
    BST() : root_(nullptr) {}
    void insert(TreeNode* node) {
        if (root_ == nullptr) {
            root_ = node;
            return;
        }
        TreeNode* cur = root_;
        while (cur != nullptr) {
            if (node -> value() == cur -> value()) {
                delete node;
                return;
            }
            if (node -> value() < cur -> value()) {
                if (cur -> left == nullptr) {
                    cur -> left = node;
                    return;
                }
                cur = cur -> left;
            }
            else {
                if (cur -> right == nullptr) {
                    cur -> right = node;
                    return;
                }
                cur = cur -> right;
            }
        }
    }
    void output() {
        DFS(root_);
    }
};

int main() {
    string input;
    BST bst;
    while (getline(cin, input)) {
        string token = "";
        for (int i = 0; i < input.size(); i++) {
            if (input[i] >= 'a' && input[i] <= 'z') token += input[i];
            else if (input[i] >= 'A' && input[i] <= 'Z') token += (char)(input[i] - 'A' + 'a');
            else {
                if (token.size() != 0) {
                    TreeNode* node = new TreeNode(token);
                    bst.insert(node);
                    token = "";
                }
            }
        }
        if (token.size() != 0) {
            TreeNode* node = new TreeNode(token);
            bst.insert(node);
            token = "";
        }
    }
    bst.output();
    return 0;
}