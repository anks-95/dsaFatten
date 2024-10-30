// Source: https://leetcode.com/problems/move-zeroes/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 , j = 0;
        while(i < nums.size()){
            if(nums[i] == 0){
                i++;
            }
            else{
                swap(nums[i] , nums[j]);
                i++,j++;
            }
        }
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    using namespace std;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    solution.moveZeroes(nums);
    
    cout << "Array after moving zeroes: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}