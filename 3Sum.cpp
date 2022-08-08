class Solution {
    vector<vector<int>>res;
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            //duplicate a
            if(i==0 || nums[i-1]!=nums[i])
            {
                //b+c=0-a
                twoSumSorted(i+1,nums.size()-1,nums,0-nums[i]);
            }
        }
        return res;
    }
    
    void twoSumSorted(int i,int j,vector<int> nums,int target)
    {
        int a1=nums[i-1];
        while(i<j)
        {
            if(nums[i]+nums[j]>target)
            {
                j--;
            }
           else if(nums[i]+nums[j]<target)
            {
                i++;
            }
            else
            {
                vector<int>l;
                l.push_back(a1);
                l.push_back(nums[i]);
                l.push_back(nums[j]);
                
                res.push_back(l);
                
                //duplicate b
                while(i<j && nums[i]==nums[i+1])i++;
                //duplicate c
                while(i<j && nums[j]==nums[j-1])j--;
                
                i++;
                j--;
                
            }
        }
    }
};
