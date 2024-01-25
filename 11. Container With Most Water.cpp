class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int l = 0;
        int r = height.size()-1;
        while(l!=r){
            int newArea = (r-l)*min(height[r],height[l]);
            if(newArea > maxArea) maxArea = newArea;
            if(height[l] > height[r])r--;
            else l++;
        }
        return maxArea;
    }
};
