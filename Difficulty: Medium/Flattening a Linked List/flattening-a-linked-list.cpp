/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
  
    Node* convert(vector<int>arr) {
        if (arr.size() == 0) return NULL;
        
        Node* head = new Node(arr[0]);
        Node* temp = head;
        
        for (int i=1; i<arr.size(); i++)
        {
            Node* curr = new Node(arr[i]);
            temp->bottom = curr;
            temp = temp->bottom;
        }
        
        return head;
    }
    Node* flatten(Node* head) {
        // code here
        if (!head) return NULL;
        vector<int>arr;
        Node* temp = head;
        while (temp) {
            Node* temp2 = temp;
            while (temp2)
            {
                arr.push_back (temp2->data);
                temp2 = temp2->bottom;
            }
            temp = temp->next;
        }
        sort (arr.begin(), arr.end());
        Node* newHead = convert (arr);
        
        return newHead;
    }
};