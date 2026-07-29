class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int result = 0;
        int currentArea = 0;
        while(left<right) {
            currentArea = min(heights[left],heights[right])*(right-left);
            result = max(result, currentArea);

            if(heights[left]<=heights[right]) {
                left++;
            }else {
                right--;
            } 
        }
        return result;
    }
};
