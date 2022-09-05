/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(q.size()!=1){
            vector<int> temp;
            while(q.front()!=NULL){
                Node* curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                for(auto i:curr->children){
                    q.push(i);
                }
            }
            ans.push_back(temp);
            q.pop();
            q.push(NULL);
        }
        return ans;
    }
};