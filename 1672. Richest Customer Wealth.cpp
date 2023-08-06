class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> max;
        for (vector<int> customers : accounts) {
            int sum = 0;
            for (int money : customers) {
                sum += money;
            }
            max.push_back(sum);
        }
        return *max_element(max.begin(), max.end());
    }
};
