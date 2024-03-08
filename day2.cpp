//Find the N-th character
#include<iostream>
using namespace std;
class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
         long long int previous=0;
        long long int next;
        int power=int(pow(2,r))-1;
        int i;
        for( i=0;i<n;i++)
        {
            next=previous+power;
            if(n>=previous && n<=next)
            break;
            previous=next+1;
        }
        
        string temp;
        temp.push_back(s[i]);
        for(int j=0;j<r;j++)
        {
            string temp1;
            for(int i=0;i<temp.size();i++)
            {
                if(temp[i]=='0')
                {
                    temp1.push_back('0');
                    temp1.push_back('1');
                }
                else
                {
                    temp1.push_back('1');
                    temp1.push_back('0');
                }
            }
            temp.clear();
            temp=temp1;
            temp1.clear();
        }
        //cout<<n-previous<<endl;
        return temp[n-previous];
    }
};