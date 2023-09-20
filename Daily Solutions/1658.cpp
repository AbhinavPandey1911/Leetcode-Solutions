class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i=0,j=0;
        int ans=0;
        int tsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        tsum+=nums[i];
        int sum=tsum-x;
        if(tsum==x)
        return nums.size();
        if(tsum<x)
        return -1;
        int ss=0;
        while(j<n)
        {
            ss+=nums[j];
            while(ss>sum)
            {
                ss-=nums[i++];
            }
            if(ss==sum)
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans==0? -1: nums.size()-ans;

    }
};