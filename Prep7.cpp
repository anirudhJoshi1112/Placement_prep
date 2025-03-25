class Solution {
  public:
    // Function to insert a node at the begining of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        // Code here
        Node* newNode=new Node(x);
        newNode->next=head;
        
        return newNode;
    }
};
