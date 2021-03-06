/*
97. Maximum Depth of Binary Tree
描述

给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的距离。
您在真实的面试中是否遇到过这个题？
样例

给出一棵如下的二叉树:

  1
 / \
2   3
   / \
  4   5

这个二叉树的最大深度为3.


*/

#include "pch.h"
#include <iostream>

/**
 * Definition of TreeNode:*/
 class TreeNode {
 public:
     int val;
     TreeNode *left, *right;
     TreeNode(int val) {
         this->val = val;
         this->left = this->right = NULL;
     }
 };


class Solution {
public:
	/**
	 * @param root: The root of binary tree.
	 * @return: An integer
	 */
	int maxDepth(TreeNode * root) {
		if (root == NULL)
			return 0;
		int result = 0;


		if (root->left == NULL && root->right == NULL)
			return 1;


		int left = maxDepth(root->left) + 1;


		int right = maxDepth(root->right) + 1;

		left > right ? result = left : result = right;
		return result;
	}
};

int main()
{
    std::cout << "Hello World!\n"; 
}

