#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        bool state = false;
        
        sort(nums.begin(), nums.end());

        for (int i = 1; i < size(nums); i++) {
            if (nums.at(i) == nums.at(i-1)) {
                state = true; 
                break;
            }
        }

        return state;

    }
};