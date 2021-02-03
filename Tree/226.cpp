/*
 * @Author: your name
 * @Date: 2021-01-28 10:47:13
 * @LastEditTime: 2021-01-28 11:07:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \LeetCode\226.cpp
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *tmpLeft=nullptr,*tmpRight=nullptr,*tmpNode=nullptr;
        if(nullptr==root)
        {
            return nullptr;
        }
        else
        {
            tmpLeft=invertTree(root->right);
            tmpRight=invertTree(root->left);
            tmpNode=new TreeNode(root->val,tmpLeft,tmpRight);
            return tmpNode;
        }
        
    }
};

// 翻转一棵二叉树。

// 示例：

// 输入：

//      4
//    /   \
//   2     7
//  / \   / \
// 1   3 6   9
// 输出：

//      4
//    /   \
//   7     2
//  / \   / \
// 9   6 3   1

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/invert-binary-tree
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。