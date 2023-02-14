/*
https://leetcode.com/problems/reverse-linked-list/description/
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return head;
        ListNode* current = head, *nxt = NULL, *prev = NULL;
        while(current != NULL){
            nxt = current->next;
            current->next = prev;
            prev= current;
            current = nxt;
        }
        head = prev;
        return head;
    }
};
