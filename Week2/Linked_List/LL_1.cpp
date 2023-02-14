/*
https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp = head;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        int k = c-n-1;
        int i = 0;
        temp = head;
        while(i<k){
            temp = temp->next;
            i++;
        }
        cout<<"vsl:"<<temp->val;
        if(c==1 && n==1)
        head = NULL;
        else if(n==c)
        head = head->next;
        else if(temp->next && temp->next->next)
        temp->next = temp->next->next;
        else
        temp->next = NULL;
        return head;
    }
};
