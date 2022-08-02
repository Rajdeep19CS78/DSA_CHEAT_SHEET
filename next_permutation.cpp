class Solution {
public:
    void nextPermutation(vector<int>&nums) {
       
        int n = nums.size();
        if (n == 1) return;
        
        // 1. find the breaking point of the decreasing sequence
        int i;
        for(i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1])
                break;
        }
        
        if (i >= 0) {
            // find the smallest number larger than the breaking point
            int j;
            for (j = n - 1; j >= 0; j--) {
                if (nums[j] > nums[i]) {
                    // swap the two numbers
                    swap(nums, i, j);
                    break;
                }
            }
        }
        
        // reverse the sequence after the breaking point
        reverse(nums, i + 1, n - 1);
    }
    
    void swap(vector<int>& nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
    
    void reverse(vector<int>& nums, int i, int j) {
        while (i < j) {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
            j--;
        }
    }
};
