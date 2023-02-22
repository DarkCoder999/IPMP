#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    string s3="";
    cin>>s1>>s2;
    unordered_map<char,int> m;
    for(int i=0;i<s2.length();i++)
    m[s2[i]]=1;
    for(int i=0;i<s1.length();i++){
        if(m[s1[i]]!=1)
        s3+=s1[i];
    }
    cout<<s3;
    return 0;
}
