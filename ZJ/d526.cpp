// ZJ d526
// 2025-04-08

#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
private:
    int value_;
public:
    TreeNode *left, *right;
    TreeNode() : left(nullptr), right(nullptr), value_(0) {}
    explicit TreeNode(int val) : left(nullptr), right(nullptr), value_(val) {}
    int value() const { return value_; }
};

class BST {
private:
    TreeNode* root_;

    void DFS(TreeNode* cur, bool isRoot) const {
        if (cur == nullptr) return;
        if (!isRoot) cout << ' ';
        cout << cur -> value();
        DFS(cur -> left, false);
        DFS(cur -> right, false);
    }

public:
    BST() : root_(nullptr) {}
    BST(const BST&) = delete;

    ~BST() {
        vector<TreeNode*> nodes;
        if (root_ != nullptr) nodes.push_back(root_);
        for (int i = 0; i < nodes.size(); i++) {
            if (nodes[i] -> left != nullptr) nodes.push_back(nodes[i] -> left);
            if (nodes[i] -> right != nullptr) nodes.push_back(nodes[i] -> right);
        }
        // for (int i = 0; i < nodes.size(); i++) delete nodes[i];
        for (TreeNode* node: nodes) delete node;
    }

    BST& operator=(const BST&) = delete;

    void insert(int value) {
        TreeNode* node = new TreeNode(value);
        if (root_ == nullptr) {
            root_ = node;
            return;
        }
        TreeNode* cur = root_;
        while (cur != nullptr) {
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

    void output() const {
        if (root_ == nullptr) return;
        DFS(root_, true);
        cout << '\n';
    }
};

int main() {
    int N;
    while (cin >> N) {
        BST bst;
        while (N--) {
            int val;
            cin >> val;
            bst.insert(val);
        }
        bst.output();
    }
    return 0;
}