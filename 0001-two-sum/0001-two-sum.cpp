class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> mp;
      for(int i = 0; i < nums.size(); i++)
      {
        int cur = nums[i];
        int need = target - cur;
        if(mp.count(need))
        {
            return {mp[need], i};
        }
        mp[cur] = i;
      }
      return {};
    }
};