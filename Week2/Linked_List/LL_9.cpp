/**
https://leetcode.com/problems/rotate-list/description/


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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int c=0;
        if(head == NULL || head->next == NULL)
        return head;
        while(temp->next!=NULL){
            c++;
            temp = temp->next;
        } 
        c++;
        ListNode* last = temp;
        int r = c-(k%c);
        last->next = head;
        temp = head;
        for(int i=0;i<r-1;i++)
        temp = temp->next;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
