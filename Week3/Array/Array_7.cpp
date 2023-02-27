/**
https://leetcode.com/problems/find-the-closest-palindrome/description/
**/
class Solution {
public:
    string nearestPalindromic(string n) {
        int c = n.length();
        vector<long long> v;
        if(c==1) return to_string(stoi(n)-1);
        if(c%2==0){
            string t = n.substr(0,c/2);    //say no is 1234 generates 1221
            string u = n.substr(0,c/2);
            reverse(u.begin(), u.end());
            v.push_back(stoll(t+u));

            string w = "";                //generate 999
            for(int i=0; i<c-1; i++)
            w+="9";
            v.push_back(stoll(w));

            w = "1";                      //generate 10001
            for(int i=0; i<c-1; i++)
            w+="0";
            w+="1";
            v.push_back(stoll(w));

            string x = to_string(stoll(t)+1); //generate 1331
            string y = to_string(stoll(t)+1);
            reverse(y.begin(), y.end());
            v.push_back(stoll(x+y));

            x = to_string(stoll(t)-1);       //generate 1111
            y = to_string(stoll(t)-1);
            reverse(y.begin(), y.end());
            v.push_back(stoll(x+y));


        }
        else{
            string t = n.substr(0,c/2);     //say no is 12345 gives 12321
            string u = n.substr(0,c/2);
            reverse(u.begin(), u.end());
            v.push_back(stoll(t+n[(int)c/2]+u));

            string w = "";                  //gives 9999
            for(int i=0; i<c-1; i++)
            w+="9";
            v.push_back(stoll(w));

            w = "1";                        //gives 100001
            for(int i=0; i<c-1; i++)
            w+="0";
            w+="1";
            v.push_back(stoll(w));

            t = n.substr(0,c/2+1);          //gives 12421
            string x = to_string(stoll(t)+1);
            string y = to_string(stoll(t)+1);
            reverse(y.begin(), y.end());
            y = y.substr(1);
            v.push_back(stoll(x+y));

            x = to_string(stoll(t)-1);      //gives 12221
            y = to_string(stoll(t)-1);
            reverse(y.begin(), y.end());
            y = y.substr(1);
            v.push_back(stoll(x+y));
        }
        long long mi = pow(10,18);
        long long res = 0;
        vector<long long> diff;
        for(int i=0;i<v.size();i++){
            long long dis = abs(v[i]-stoll(n));   //finds closest number and stores all such possible nos
            if(dis<=mi && dis!=0) {
                mi = dis;
            }
        }
        for(int i=0;i<v.size();i++){
            long long dis = abs(v[i]-stoll(n));
            if(dis==mi) {
                res = v[i];
                diff.push_back(v[i]);
            }
        }
        if(diff.size()==1)                //returns min of all possible same closest palindrome
        return to_string(res);
        else
        return to_string(*min_element(diff.begin(), diff.end()));
    }
};
