/**
https://www.interviewbit.com/problems/reverse-alternate-k-nodes/

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    int c=0;
    ListNode* temp = A, *last = A;
    while(temp!=NULL){
        if(c%2==0){
            ListNode* temp1 = temp, *prev = NULL, *next = NULL, *current = temp;
            for(int i=0;i<B;i++){
                temp = temp->next;
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            if(c==0)
            A = prev;
            if(c>0)
            last->next = prev;
            temp1->next = temp;
            c++;
        }
        else{
            for(int i=0;i<B;i++){
                last = temp;
                temp = temp->next;
            }
            c++;
        }
    }
    return A;
}
