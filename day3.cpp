//Remove all duplicates from a given string
#include<iostream>
using namespace std;
class Solution{
public:
    string removeDuplicates(string str) {
        map<char,int>mp;
        string x;
        for(int i=0;i<int(str.size());i++){
            if(!mp[str[i]])x+=str[i];
            mp[str[i]]=1;
        }
        return x;
    }
};
int main(){
      int t;
      cin>>t;
      while(t--){
            string str;
            cin>>str;
            Solution ob;
            auto ans= ob.removeDuplicates(str);
            cout <<ans <<endl;
      }
      return 0 ;
}
