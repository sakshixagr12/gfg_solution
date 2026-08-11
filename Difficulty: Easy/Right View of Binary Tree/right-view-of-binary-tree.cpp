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
    
    void rv(Node* root,int level,vector<int>&arr) {
        if (!root) return ;
        if (level == arr.size()) 
            arr.push_back (root->data);
        rv(root->right, level+1, arr);
        rv(root->left, level+1, arr);
    }
    vector<int> rightView(Node *root) {
        //  code here
        if (!root) return {};
        vector<int> ans;
        rv(root, 0, ans);
        return ans;
        
    }
};