class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        //if(head==nullptr) return -1;
        Node* temp=head;
        int count=1;
        while(temp!=nullptr){
            if(count==index){
                return temp->data;
            }
            temp=temp->next;
            count++;
        }
        return -1;
    }
    
};
