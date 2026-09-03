/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        if (root==nullptr) return -1;
        if (root->data==x) return x;
        int ceil=-1;
        
        while(root) {
            if (ceil == root->data){
                ceil=root->data;
                return ceil;
            }
            if (x>root->data){
                root=root->right;
            } else{
                ceil=root->data;
                root=root->left;
            }
        }
        return ceil;
    }
};
