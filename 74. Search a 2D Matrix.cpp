class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res = false;
        for (vector<int> groups : matrix) {
            for (int nums : groups) {
                if (nums == target) res = true;
            }
        }
        return res;
    }
};
