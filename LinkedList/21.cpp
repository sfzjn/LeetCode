/*
 * @Author: your name
 * @Date: 2021-02-02 09:57:38
 * @LastEditTime: 2021-02-22 11:31:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \LeetCode\LinkedList\21.cpp
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *newList=nullptr;
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *p3=nullptr;
        while(nullptr!=p1||nullptr!=p2)
        {
            if(nullptr==newList)
            {
                newList=new ListNode();
                p3=newList;
            }
            else
            {
                if(nullptr==p3->next)
                {
                    p3->next=new ListNode();
                    p3=p3->next;
                }
            }  
            if(nullptr!=p1&&nullptr!=p2)
            {
                if(p1->val>p2->val)
                {
                    p3->val=p2->val;
                    p2=p2->next;
                }
                else
                {
                    p3->val=p1->val;
                    p1=p1->next;
                }
            }
            else
            {
                if(nullptr==p1)
                {
                    p3->val=p2->val;
                    p2=p2->next;
                }
                else
                {
                    p3->val=p1->val;
                    p1=p1->next;
                }
            }
            //p3=p3->next;
        }
        return newList;

        /*
        if (l1 == nullptr) {
            return l2;
        } else if (l2 == nullptr) {
            return l1;
        } else if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }

        作者：LeetCode-Solution
        链接：https://leetcode-cn.com/problems/merge-two-sorted-lists/solution/he-bing-liang-ge-you-xu-lian-biao-by-leetcode-solu/
        来源：力扣（LeetCode）
        著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
        */
    }
};

/*************
 * 21. 合并两个有序链表
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

示例 1：
输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]

示例 2：
输入：l1 = [], l2 = []
输出：[]

示例 3：
输入：l1 = [], l2 = [0]
输出：[0]
 
提示：
两个链表的节点数目范围是 [0, 50]
-100 <= Node.val <= 100
l1 和 l2 均按 非递减顺序 排列

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-sorted-lists
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*************/