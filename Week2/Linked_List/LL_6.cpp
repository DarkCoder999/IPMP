/*
https://leetcode.com/problems/middle-of-the-linked-list/description/
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
    ListNode* middleNode(ListNode* head) {
        int c = 0, x, i=0;
        ListNode* temp = head;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        x = c/2;
        temp = head;
        while(i<x){
            temp = temp->next;
            i++;
        }
        return temp;
    }
};
