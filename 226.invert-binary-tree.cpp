/*
 * 226.invert-binary-tree.cpp
 * Copyright (C) 2020 peeweep <peeweep@0x0.ee>
 *
 * Distributed under terms of the MIT license.
 */
#include <algorithm>
using namespace std;
struct TreeNode {
  int       val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
 public:
  TreeNode* invertTree(TreeNode* root) {
    dfs(root);
    return root;
  }

 private:
  void dfs(TreeNode* root) {
    if (root != nullptr) {
      std::swap(root->left, root->right);
      dfs(root->left);
      dfs(root->right);
    }
  }
};

