class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefixSum(n, 0);

        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i - 1]; 
        }

        long long rightProduct = 1;
        
        for(int i = n - 1; i >= 0; i--){
            if(prefixSum[i] == rightProduct){
                return i;
            }

            if (rightProduct > 1e18 / nums[i]) {
                rightProduct = 1e18;
            } else {
                rightProduct *= nums[i];
            }
        }
        return -1;
    }
};