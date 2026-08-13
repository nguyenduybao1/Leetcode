class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x : nums)
        {
            st.insert(x);
        }

        int ans = 0;
        for(int x : st)
        {
            if(st.count(x - 1)){
                continue;
            }

            int cur = x;
            int length = 1;

            while(st.count(cur + 1))
            {
                cur++;
                length++;
            }
            ans = max(ans, length);
        }
        return ans;
    }
};