/**
https://leetcode.com/problems/sort-list/description/
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
    ListNode* merge(ListNode *a, ListNode *b) {
        ListNode *p = new ListNode(0), *c = p;
        while(a != NULL && b != NULL) {
            if(a->val <= b->val) {
                c->next = a;
                a = a->next;
            }
            else {
                c->next = b;
                b = b->next;
            }
            c = c->next;
        }
        if(a!=NULL){
            c->next = a;
            a = a->next;
        }
        if(b!=NULL) {
            c->next = b;
            b = b->next;
        }
        return p->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *temp = NULL, *slow = head, *fast = head;
        while(fast!=NULL && fast->next!=NULL) {
            temp = slow;
            slow = slow->next;        
            fast = fast->next->next;      
        }   
        temp->next = NULL;     
        ListNode* a = sortList(head), *b = sortList(slow);        
        return merge(a, b); 
    }
};
