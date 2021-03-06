/*
 * 94.binary-tree-inorder-traversal.cpp
 * Copyright (C) 2020 peeweep <peeweep@0x0.ee>
 *
 * Distributed under terms of the MIT license.
 */
#include <vector>

using namespace std;

struct TreeNode {
  int       val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
 public:
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> result;
    traversal(root, result);
    return result;
  }

  void traversal(TreeNode *root, vector<int> &result) {
    if (root == nullptr)
      return;
    traversal(root->left, result);
    result.emplace_back(root->val);
    traversal(root->right, result);
  }
};
