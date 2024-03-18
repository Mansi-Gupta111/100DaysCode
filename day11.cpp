//Level order traversal
#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int> res;
        if(!root)
            return res;
        
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                auto p = q.front();
                q.pop();
                
                res.push_back(p->data);
                if(p->left)
                    q.push(p->left);
                    
                if(p->right)
                    q.push(p->right);
            }
        }
        
        return res;

    }
};