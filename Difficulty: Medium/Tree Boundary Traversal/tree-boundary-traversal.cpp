/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    bool isLeaf(Node* root){
        if(root==nullptr) return false;
        //if(root->left==nullptr&&root->right==nullptr) return true;
        return ((root->left==nullptr) && (root->right==nullptr));
    }
    
    void addLeft(Node* root,vector<int>& res){
        Node* curr = root->left;
        while (curr) {
            if(!isLeaf(curr)) {
                res.push_back(curr->data);
            }
            if( curr->left )
                curr= curr->left;
            else 
                curr= curr->right;
        }
    }
    
    void addLeaves(Node* root, vector<int>& res) {
        if(root == nullptr)
            return;
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left) addLeaves( root->left, res);
        if(root->right) addLeaves (root->right,res);
    }
    
    void addRight(Node* root,vector<int>& res) {
        Node* curr = root->right;
        vector<int> temp;
        while (curr) {
            if(!isLeaf(curr)) {
                temp.push_back (curr->data);
            }
            if(curr->right) 
                curr= curr->right;
            else 
                curr=curr->left;
        }
        //reverse the right path
        int n = temp.size();
        for (int i=n-1; i>=0; i--) {
            res.push_back(temp[i]);
        }
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        // res.push_back(root->data);
        if(!isLeaf(root))
            res.push_back(root->data);
        addLeft(root,res);
        addLeaves(root,res);
        addRight(root,res);
        return res;
        
    }
};