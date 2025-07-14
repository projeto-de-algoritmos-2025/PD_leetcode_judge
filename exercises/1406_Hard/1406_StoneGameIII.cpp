#include <vector>
#include <string>
#include <algorithm>
#include <limits>

class Solution {
public:
    std::string stoneGameIII(std::vector<int>& stoneValue) {
        int n = stoneValue.size();
        std::vector<int> dp(n + 1, 0); 
        for (int i = n - 1; i >= 0; --i) {
            int maxDiff = std::numeric_limits<int>::min();
            int currentSum = 0;
            for (int k = 0; k < 3 && i + k < n; ++k) {
                currentSum += stoneValue[i + k];
                maxDiff = std::max(maxDiff, currentSum - dp[i + k + 1]);
            }
            dp[i] = maxDiff;
        }

        if (dp[0] > 0) return "Alice";
        if (dp[0] == 0) return "Tie";
        return "Bob";
    }
};
