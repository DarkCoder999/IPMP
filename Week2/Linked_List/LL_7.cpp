/*
https://leetcode.com/problems/intersection-of-two-linked-lists/description/
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
    ListNode* getans(int d, ListNode *headA, ListNode *headB){
        ListNode* temp1=headA, *temp2 = headB;
        for(int i=0; i<d; i++)
        temp1 = temp1 -> next;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0,c2=0;
        ListNode* temp1=headA, *temp2 = headB;
        while(temp1!=NULL){
            c1++;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            c2++;
            temp2 = temp2->next;
        }
        int d;
        ListNode* c;
        if(c1>=c2){ d = c1-c2; c= getans(d,headA,headB); }
        else{ d = c2-c1; c= getans(d,headB,headA); }
        return c;
    }
};
