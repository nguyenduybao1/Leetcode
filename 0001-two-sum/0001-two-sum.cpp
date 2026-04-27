class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int cur = nums[i];
            int ans = target - cur;
            if(mp.count(ans)){
                return {mp[ans], i};
            }
            mp[cur] = i;
        }
        return {};
    }
};