// Autor: Leonardo Fernandes - 200067036
// Leetcode Hard :: 123. Best Time to Buy and Sell Stock III
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/

#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<int> esq(n, 0);
        vector<int> dir(n, 0);

        int pmin = prices[0];
        for(int i = 1; i < n; i++){
            pmin = min(pmin, prices[i]);
            esq[i] = max(esq[i-1], prices[i] - pmin);
        }

        int pmax = prices[n-1];
        for(int i = n-2; i >= 0; i--){
            pmax = max(pmax, prices[i]);
            dir[i] = max(dir[i+1], pmax - prices[i]);
        }

        int res = 0;
        for(int i = 0; i < n; i++) res = max(res, esq[i] + dir[i]);

        return res;
    }
};