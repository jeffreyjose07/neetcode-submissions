class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0;
        int start = 0, end = 0;
        while(end<nums.size()) {
            if(nums[end]==0) {
                start = end+1;
                end = start;
            } else {
                result = max(result,end-start+1);
                end++;
            }
        }
        return result;
    }
};