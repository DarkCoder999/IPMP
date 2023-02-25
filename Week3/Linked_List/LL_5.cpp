/**

https://leetcode.com/problems/add-two-numbers/description/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1, *temp2 = l2;
        int carry = 0, sum = 0;
        ListNode* head = NULL, *temp = NULL, *temp3 = NULL;
        while(temp1!=NULL || temp2!=NULL){
            if(head == NULL){
                temp = new ListNode;
                if(!temp1) sum = temp2->val;
                else if(!temp2) sum = temp1->val;
                else sum = temp1->val + temp2->val;
                if(sum>9){
                    carry = sum/10;
                    sum = sum%10;
                }
                temp->val = sum;
                temp->next = NULL;
                head = temp;
                temp3 = temp;
            }
            else{
                temp = new ListNode;
                if(!temp1) sum = temp2->val;
                else if(!temp2) sum = temp1->val;
                else sum = temp1->val + temp2->val;
                if(carry>0) sum+=carry;
                if(sum>9){
                    carry = sum/10;
                    sum = sum%10;
                }
                else carry=0;
                temp->val = sum;
                temp->next = NULL;
                temp3->next = temp;
                temp3 = temp3->next;
            }
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        if(carry == 1){
            temp = new ListNode;
            temp->val = 1;
            temp->next = NULL;
            temp3->next = temp;
            temp3 = temp3->next;
        }
        return head;
    }
};
