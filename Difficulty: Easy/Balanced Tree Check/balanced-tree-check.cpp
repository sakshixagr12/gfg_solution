/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int ht(Node* root){
        if(root==nullptr) return 0;
        int  lh=ht(root->left);
        int rh=ht(root->right);
        if(lh==-1||rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(Node* root) {
        // code here
        return ht(root)!=-1;
    }
};