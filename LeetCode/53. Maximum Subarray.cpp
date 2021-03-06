class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0],currSum=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            maxSum=(currSum>maxSum?currSum:maxSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
};