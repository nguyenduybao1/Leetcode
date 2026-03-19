class Solution {
public:
    string multiply(string num1, string num2) {
       int n = num1.size();
       int m = num2.size();
       vector<int> pos(n + m, 0);

       for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + pos[i + j +1];
                int p1 = i + j + 1, p2 = i + j;

                pos[p1] = sum % 10;
                pos[p2] += sum / 10;
            }
       }

       string res;
       for(int num : pos){
            if(!(res.empty() && num == 0)){
                res += to_string(num);
            }
       }
       return res.empty() ? "0" : res;
    }
};