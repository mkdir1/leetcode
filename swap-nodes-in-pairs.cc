/*
 * =====================================================================================
 *
 *       Filename:  swap-nodes-in-pairs.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年12月11日 02时07分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Wenxian Ni (Hello World~), niwenxianq@qq.com
 *   Organization:  AMS/ICT
 *
 * =====================================================================================
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!head||!head->next)
            return head;
        ListNode *p, *q, *swap, *pre;
        p = head;
        q = p->next;
        swap = q;
        pre  = NULL;
        while(p&&q)
        {
            p->next = q->next;
            q->next = p;
            if(pre)
                pre->next = q;
            pre     = p;
            p       = p->next;
            if(!p)
                break;
            else
                q   = p->next;
        }
       return swap;
    }
};
