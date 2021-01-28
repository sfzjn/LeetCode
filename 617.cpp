/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };11111
 */
#include <iostream>
using namespace std;

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    	TreeNode *tmpLeft=nullptr,*tmpRight=nullptr,*tmpNode=nullptr;
    	if(nullptr!=t1&&nullptr!=t2)
    	{
    		tmpLeft=mergeTrees(t1->left,t2->left);
    		tmpRight=mergeTrees(t1->right,t2->right);
    		tmpNode=new TreeNode(t1->val+t2->val,tmpLeft,tmpRight); 
    	}
    	else
    	{
    		if(nullptr!=t1)
    		{
    			//tmpNode=new TreeNode(t1->val,t1->left,t1->right); 
    			return t1;
    		}
    		else
    		{
    			if(nullptr!=t2)
    			{
    				//tmpNode=new TreeNode(t2->val,t2->left,t2->right); 
    				return t2;
    			}
    		}
    	}
    	return tmpNode;
    }
};

int main()
{
	t1->val=2;
	t1->left=nullptr;
	t1->right=nullptr;
	t2->val=3;
	t2->left=nullptr;
	t2->right=nullptr;
	TreeNode* newNode=mergeTrees(t1,t2);
	cout<<newNode->val;
	return;                         
}

/*
给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。

你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。

示例 1:

输入: 
	Tree 1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7                  
输出: 
合并后的树:
	     3
	    / \
	   4   5
	  / \   \ 
	 5   4   7
注意: 合并必须从两个树的根节点开始。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-binary-trees
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

