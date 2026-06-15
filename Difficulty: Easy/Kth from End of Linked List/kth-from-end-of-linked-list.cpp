/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        if(head==nullptr) return -1;
        Node*temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if(k>cnt)return -1;
        temp=head;
        for(int i = 0;i<cnt-k;i++){
            temp=temp->next;
        }
        int ans = temp->data;
        return ans;
    }
};