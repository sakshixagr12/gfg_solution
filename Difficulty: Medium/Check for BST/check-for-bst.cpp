/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    bool check(Node* root,Node*min,Node*max){
        if (!root) return true;
        if (min && root->data <= min->data) return false;
        if (max && root->data >= max->data) return false;
        return check(root->left,min,root) && check(root->right,root,max);
    }
    bool isBST(Node* root) {
        // code here
        return check(root,nullptr,nullptr);
        
    }
};