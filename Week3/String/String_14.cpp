#include <bits/stdc++.h>
using namespace std;
bool regexs(string t){
    int a_index=-1, b_index=-1, c=0, n=t.length();
    if(n==0 || n==1 && t[0]!='c') return false;
    if(t[n-1]!='c' || t[n-2]=='c') return false;
    for(int i=0; i<n; i++){
        if(t[i]=='a')
        a_index=i;
    }
    for(int i=0; i<n; i++){
        if(t[i]=='b'){
        b_index=i;
        c++;}
    }
    if(t[n-1]=='c'){
        if((a_index>=0 && b_index>=0 && c==1 && a_index<b_index) || (a_index>=0 && b_index==-1 && c==0) || (a_index==-1 && b_index>=0 && c==1) || (a_index==-1 && b_index==-1))
          return true;
    }
    return false;
}
int main() {
    string s;
    cin>>s;
    cout<<regexs(s);
    return 0;
}
