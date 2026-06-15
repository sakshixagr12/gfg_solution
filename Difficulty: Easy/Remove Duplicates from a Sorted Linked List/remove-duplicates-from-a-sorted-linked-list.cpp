/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        if(head==nullptr||head->next==nullptr) return head;
        Node*curr=head;
        Node*temp=nullptr;
        while(curr!=nullptr&&curr->next!=nullptr){
            temp=curr->next;
            if(temp->data==curr->data){
                Node*dup=temp;
                curr->next=temp->next;
                temp=temp->next;
                delete dup;
            }
            else curr=curr->next;
        }
        return head;
    }
};