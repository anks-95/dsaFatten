//Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to move all zeroes in the array to the end while keeping the 
    // relative order of non-zero elements the same
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        
        // Traverse through the entire array
        while(i < nums.size()) {
            if(nums[i] == 0) {
                // If current element is zero, just move 'i' forward
                i++;
            } else {
                // If the current element is non-zero, swap it with the element
                // at 'j' (which keeps track of the next position for a non-zero element)
                swap(nums[i], nums[j]);
                // Increment both pointers to process the next elements
                i++, j++;
            }
        }
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Input array
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    // Call function to move all zeroes to the end of the array
    solution.moveZeroes(nums);
    
    // Output the modified array
    cout << "Array after moving zeroes: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
