/**

https://leetcode.com/problems/odd-even-linked-list/description/

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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd = head, *even = head->next, *temp1 = NULL, *temp2 = NULL,*temp = head->next;
        while(odd->next || even->next){
            if(odd->next){
                temp1 = odd->next->next;
                if(temp1) {
                    odd->next = temp1;
                    odd = temp1;
                }
                else odd->next = NULL;
            }
            if(even->next){
                temp2 = even->next->next;
                if(temp2){ 
                    even->next = temp2; 
                    even = temp2;
                }
                else even->next = NULL;
            }
        }
        odd->next = temp;
        return head;
    }
};
