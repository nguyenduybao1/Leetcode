class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int i = 2; i <= n; i++){
            string cur = "";
            int j = 0;
            while(j < res.size()){
                int count = 1;
                while(j + 1 < res.size() && res[j] == res[j+1]){
                    j++;
                    count++;
                }

                cur += to_string(count);
                cur += res[j];
                j++;
            }
            res = cur;
        }
        return res;
    }
};