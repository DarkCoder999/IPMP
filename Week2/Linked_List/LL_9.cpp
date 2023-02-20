/**
https://leetcode.com/problems/reverse-nodes-in-k-group/description/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL )
        return head;
        ListNode* temp = head, *temp3 = NULL;
        int c = 0;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        int kn = c-(c%k),x=0;
        temp = head;
        for(int i = 0; i < kn; i++){
            temp = temp->next;
        }
        if(temp!=NULL){
            temp3 = temp;
        }
        ListNode* current = head, *nxt = NULL, *prev = NULL, *temp1;
        temp = head;
        for(int i = 0; i < kn; i+=k){
            temp1 = current;
            prev = NULL;
            for(int j=0;j<k;j++){
                nxt = current->next;
                current->next = prev;
                prev= current;
                current = nxt;
            }
            if(i==0) head = prev;
            ListNode* temp2 = current;

            if(x<(kn/k)-1 && current!=NULL){
                for(int j=0;j<k-1;j++)
                temp2 = temp2->next;
                temp1->next = temp2;
                x++;
            }
        }
        temp1->next = temp3;
        return head;
    }
};
