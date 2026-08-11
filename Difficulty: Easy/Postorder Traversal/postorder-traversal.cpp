/* Structure of Binary Tree Node
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
    void post(Node* root,vector<int>&ans){
        if(root==nullptr) return;
        post(root->left,ans);
        post(root->right,ans);
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        if(!root) return {};
        vector<int>ans;
        post(root,ans);
        return ans;
        
    }
};