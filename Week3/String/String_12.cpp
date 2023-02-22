/**
https://www.interviewbit.com/problems/sorted-permutation-rank/
**/
int Solution::findRank(string A) {
    double rank=1;
    int n = A.length(); 
    for(int i=0;i<n-1;i++){
        int c=0,f=1;
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j])
            c++;
        }
        for(int k=1;k<=n-i-1;k++)
        f*=k;
        rank+=f*c;
    }
    return (int)rank % 1000003;
}
