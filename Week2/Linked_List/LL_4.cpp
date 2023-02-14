/*
https://leetcode.com/problems/palindrome-linked-list/description/
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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int c=0,x,i=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        if(c%2==0)
        x = c/2;
        else
        x = c/2 + 1;
        temp = head;
        while(i<x-1){
            temp = temp->next;
            i++;
        }
        ListNode* head1 = temp->next;
        if(head1 == NULL || head1->next == NULL)
        temp->next = head1;
        else{
            ListNode* current = head1, *nxt = NULL, *prev = NULL;
            while(current != NULL){
                nxt = current->next;
                current->next = prev;
                prev= current;
                current = nxt;
            }
            head1 = prev;
            temp->next = head1;
        }
        ListNode* temp1 = temp->next, *temp2 = head;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val != temp2->val)
            return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};
