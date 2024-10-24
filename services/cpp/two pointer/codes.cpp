//Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize 'mini' to the maximum possible integer value
        // This will track the lowest stock price encountered so far
        int mini = INT_MAX;

        // 'maxi' will store the maximum profit we can achieve
        // Initially, we set it to 0 since no transactions mean no profit
        int maxi = 0;

        // Loop through the prices array
        for (int i = 0; i < prices.size(); i++) {
            // Update 'mini' to the lowest price encountered up to day i
            mini = min(mini, prices[i]);

            // Calculate the profit if we bought at 'mini' and sold at prices[i]
            // Then, update 'maxi' with the maximum profit found so far
            maxi = max(maxi, prices[i] - mini);
        }

        // Return the maximum profit that could be achieved
        return maxi;
    }
};

int main() {
    Solution sol;
    
    // Example: stock prices for each day
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Output the maximum profit that can be achieved
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;

    return 0;
}
// Time complexity: O(n)
// Space complexity: O(1)
