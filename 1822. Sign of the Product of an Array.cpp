class Solution {
public:
    int arraySign(vector<int>& nums) {
        int countOfNegatives = 0;

        int res = 0;

        for (int i : nums) {
            if (i < 0) countOfNegatives++;

            if (!i) return res;
        }

        (countOfNegatives % 2) ? res = -1 : res = 1;

        return res;
    }
};