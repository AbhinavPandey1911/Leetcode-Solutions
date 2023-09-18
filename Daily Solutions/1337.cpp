//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++)
        { int sum=0;
            for(int j=0;j<mat[0].size();j++)
            {
                sum+=mat[i][j];
            }
            v.push_back({sum,i});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.emplace_back(v[i].second);
        }
        return ans;
    }
};