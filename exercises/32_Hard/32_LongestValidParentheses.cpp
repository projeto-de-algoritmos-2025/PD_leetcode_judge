#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int longestValidParentheses(const std::string& s) {
        int n = s.length();
        std::vector<int> dp(n, 0);  
        int max_len = 0;

        for (int i = 1; i < n; ++i) {
            if (s[i] == ')') {
                if (s[i - 1] == '(') {
                    dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
                } else if (i - dp[i - 1] > 0 && s[i - dp[i - 1] - 1] == '(') {
                    dp[i] = dp[i - 1] + (i - dp[i - 1] >= 2 ? dp[i - dp[i - 1] - 2] : 0) + 2;
                }
                max_len = std::max(max_len, dp[i]);
            }
        }

        return max_len;
    }
};
