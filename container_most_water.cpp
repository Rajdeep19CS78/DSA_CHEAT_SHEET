class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int max_water=INT_MIN;
        while(l<r)
        {
            int lh=height[l];
            int rh=height[r];
            int min_h=min(rh,lh);
            max_water=max(max_water,min_h*(r-l));
            if(lh<rh) l++;
            else
                r--;
        }
        return max_water;
        
    }
};
