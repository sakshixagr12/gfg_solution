/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        if (head==nullptr)
            return -1;
        Node* fast =  head;
        Node* slow = head;
        
        while(fast!=nullptr&&fast->next!=nullptr) {
            fast = fast->next->next;
            slow = slow->next;
           // if(fast->next==nullptr) return slow->data;
        }
        return slow->data;
    }
};