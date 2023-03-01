//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i=0, flag=0, idx = 0;
	    for(int j=m-1;j>=0;j--){
	        if(i<n && arr[i][j]==1) flag = 1;
	        else{
	            while(i<n && arr[i][j]==0) i++;
	            if(i<n && j>=0 && arr[i][j]==1)  idx = i, flag = 1;
	        } 
	    }
	    if(flag!=0) return idx;
	    return -1;
	}

};
