#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(26,0);
    string s1,s2;
    string s3="";
    cin>>s1>>s2;
    for(int i=0;i<s2.length();i++)
    v[s2[i]-'a']=1;
    for(int i=0;i<s1.length();i++){
        if(v[s1[i]-'a']!=1)
        s3+=s1[i];
    }
    cout<<s3;
    return 0;
}
