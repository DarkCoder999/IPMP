#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=0;
    for(i;s1[i] && s2[i];i++){
        if(s1[i]==s2[i] || s1[i]==(s2[i]^32))
        continue;
        else
        break;
    }
    if(s1[i]==s2[i]) cout<<0;
    else if(s1[i]|32 < s2[i]|32) cout<<-1;
    else cout<<1;
    return 0;
}
