#include<bits/stdc++.h>
using namespace std;
vector<string>enki(int n){
  if(n==0)return {""};
  vector<string>ans=enki(n-1);
   vector<string>result;
   for(auto i:ans)
    result.push_back("0"+i);
   for(int i=ans.size()-1;i>=0;i--)
     result.push_back("1"+ans[i]);
     return result;
     }
int main(){
    int n;
    cin>>n;
    auto a=enki(n);
    for(auto x:a)cout<<x<<endl;
}