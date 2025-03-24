class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* curr=head;
        Node* prev=nullptr;
        Node* next;
        while(curr!=nullptr){
            next=curr->next;      //https://www.geeksforgeeks.org/reverse-a-linked-list/
            curr->next=prev;       
            
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
};
