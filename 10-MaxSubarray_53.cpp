class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curSum = 0;

        for( int val : nums){
            curSum += val;
            maxSum = max( curSum, maxSum);

            if(curSum < 0){
                curSum = 0;
            }
        }
        return maxSum;

        
    }
};