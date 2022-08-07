class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int end=nums.size()-1;
        while(low<end)
        {
            int mid=(low+end)/2;
            if(nums[mid]>nums[end])
                low=mid+1;
            else if(nums[mid]<nums[end])
                end=mid;
           
        }
        return nums[low];
        
    }
};
