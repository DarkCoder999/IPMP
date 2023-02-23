/**
https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
**/
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node*,int> m;
        Node* temp = head, *last = head;
        while(temp!=NULL){
            if(m.find(temp)!=m.end()){
                last->next = NULL;
                break;}
            m[temp]++;
            last=temp;
            temp = temp->next;
        }
    }
};
