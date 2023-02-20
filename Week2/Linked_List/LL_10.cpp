/**
https://leetcode.com/problems/merge-two-sorted-lists/description/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL)
        return list1;
        else if(list1 == NULL && list2 != NULL)
        return list2;
        else if(list1 != NULL && list2 == NULL)
        return list1;
        ListNode* temp1 = list1, *temp2 = list2;
        ListNode* temp3 = NULL, *head = NULL, *temp4 = NULL;
        while(temp1!=NULL || temp2!=NULL){
            if(head==NULL){
                temp3 = (ListNode*)malloc(sizeof(ListNode));
                if(temp1->val==temp2->val){
                    temp3->val = temp1->val;
                    temp1 = temp1->next;}
                else if(temp1->val < temp2->val){
                    temp3->val = temp1->val;
                    temp1 = temp1->next;}
                else{
                    temp3->val = temp2->val;
                    temp2 = temp2->next;}
                temp3->next = NULL;
                head = temp3;
                temp4 = head;    
            }
            else{
                temp3 = (ListNode*)malloc(sizeof(ListNode));
                if(temp1 == NULL) {
                    temp4->next = temp2;
                    break;
                }
                else if(temp2 == NULL){
                    temp4->next = temp1;
                    break;
                }
                if(temp1->val==temp2->val){
                    temp3->val = temp1->val;
                    temp1 = temp1->next;}
                else if(temp1->val < temp2->val){
                    temp3->val = temp1->val;
                    temp1 = temp1->next;}
                else{
                    temp3->val = temp2->val;
                    temp2 = temp2->next;}
                temp3->next = NULL;
                temp4->next = temp3;
                temp4 = temp4->next;
            }
        }
        return head;
    }
};
