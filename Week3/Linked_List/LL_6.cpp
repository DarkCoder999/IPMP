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
    double multiplyTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1, *temp2 = l2;
        double num1=0, num2=0;
        ListNode* head = NULL, *temp = NULL;
        while(temp1!=NULL){
            num1 = num1*10+temp1->val;;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            num2 = num2*10+temp2->val;;
            temp2 = temp2->next;
        }
        return num1*num2;
    }
};
