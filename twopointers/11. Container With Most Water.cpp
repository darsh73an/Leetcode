class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxWater = 0;
        
        while(left<right){
            int h = min(height[left],height[right]); // height of curr
            int w = right - left;   // width of curr height
            maxWater = max(maxWater, h * w);

            // we should move short line to forward bcoz we can get maxWater 
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        } 
        return maxWater;
    }
};