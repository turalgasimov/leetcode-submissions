class Solution {
public:
    double average(vector<int>& salary) {
        int min = 1000001;   
        int max = 999;

        int res = 0;

        for (int i : salary) {
            if (i > max) max = i;
            if (i < min) min = i;
        }     

        for (int i : salary) {
            if (i == max || i == min) continue;
            res += i;
        }

        return (double)(res / (size(salary) - 2));
    }
};