class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;
        for(int i = 0; i < n - 1; i++){
            farthest = max(farthest, i + nums[i]);
            if( i >= farthest && nums[i] == 0){
                return false;
            }
        }
        return true;
    }
};