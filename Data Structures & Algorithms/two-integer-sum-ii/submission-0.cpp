class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        vector<int>sol(2,0);
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                sol[0]=numbers[left];
                sol[1]=numbers[right];
                return sol;
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
        return sol;
    }
};
