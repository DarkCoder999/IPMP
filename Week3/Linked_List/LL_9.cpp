#https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        
        Node *p = head , *q = head;
        while(true)
        {
            if(p == NULL) break;
            for(int i = 0 ;i < M-1 ; i ++) {
                if(p == NULL) break;
                p = p->next;
            }
            if(p == NULL) break;
            q = p;
            for(int i = 0 ; i < N+1 ; i ++) {
                if(q == NULL) break;
                q = q->next;
            }
            if(p == NULL) break;
            p->next = q;
            p = q;
            
        }
        return head;
    }
};
