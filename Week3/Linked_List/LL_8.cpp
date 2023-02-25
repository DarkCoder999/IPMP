/**
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head, *temp1 = head;
        int c = 0;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        temp = head;
        for(int i=1;i<k;i++)
            temp = temp->next;
        int val1 = temp->val;
        for(int i=1;i<c-k+1;i++)
            temp1 = temp1->next;
        int val2 = temp1->val;
        temp->val = val2;
        temp1->val = val1;
        return head;
    }
};
