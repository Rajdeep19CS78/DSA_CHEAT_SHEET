class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxSum=INT_MIN;
        int current_sum=0;
        for(int i=0;i<n;i++)
        {
            current_sum+=nums[i];
            maxSum=max(maxSum,current_sum);
            
            if(current_sum<0)
                current_sum=0;
        }
        return maxSum;
        
    }
};
