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
    vector<ListNode*> merge(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1, *temp2 = list2, *temp1_next, *temp2_next;
        while(temp1!=NULL && temp2!=NULL){
            temp1_next = temp1->next;
            temp2_next = temp2->next;
            temp1->next = temp2;
            temp2->next = temp1_next;
            temp1 = temp1_next;
            temp2 = temp2_next;
        }
        list2 = temp2;
        vector<ListNode*> v;
        v.push_back(list1);
        v.push_back(list2);
        return v;
    }
};
