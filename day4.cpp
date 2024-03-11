//Count pairs Sum in matrices (GFG)
#include<iostream>
using namespace std;
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	     set<pair<int,int>>ans;
	    vector<int>temp1;
	    vector<int>temp2;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            temp1.push_back(mat1[i][j]);
	            temp2.push_back(mat2[i][j]);
	        }
	    }
	    
	    
	    int i=0;
	    int j=temp2.size()-1;
	    
	    while(i<temp1.size() && j>=0)
	    {
	        int sum = temp1[i]+temp2[j];
	        if(sum == x)
	        {
	            ans.insert({temp1[i],temp2[j]});
	            i++;
	            j--;
	        }
	        else if(sum > x)
	        {
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    
	    return ans.size();

	}
}