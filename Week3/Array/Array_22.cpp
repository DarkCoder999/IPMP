//https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<vector<int>> trans_rev(vector<vector<int>>& matrix){
        vector<vector<int>> t(matrix[0].size(), vector<int>(matrix.size(),0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
                t[j][i] = matrix[i][j];
        }
        reverse(t.begin(), t.end());
        return t;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        while(true){
            for(int i=0;i<matrix[0].size();i++)
            res.push_back(matrix[0][i]);
            matrix.erase(matrix.begin()+0);
            if(matrix.size()==0) break;
            matrix = trans_rev(matrix);
        }
        return res;
    }
};
