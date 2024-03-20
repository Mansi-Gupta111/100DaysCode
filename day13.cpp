//Sum of nodes on the longest path from root to leaf node
#include<iostream>
using namespace std;class Solution
{
private:
    void solve(Node* root,vector<int>&ds,priority_queue<pair<int,int>>&pq)
    {
        if(root == NULL)
        {
            return;
        }
        ds.push_back(root->data);
        if(root->left == NULL && root->right==NULL)
        {
            int sum=accumulate(ds.begin(),ds.end(),0);
            pq.push({ds.size(),sum});
            ds.pop_back();
            return;
        }
        solve(root->left,ds,pq);
        solve(root->right,ds,pq);
        ds.pop_back();
        return;
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        vector<int>ds;
        priority_queue<pair<int,int>>pq;
        solve(root,ds,pq);
        if(!pq.empty())
        {
            return pq.top().second;
        }
        return -1;
    }
};

