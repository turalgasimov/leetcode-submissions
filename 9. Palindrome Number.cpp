#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        string num = to_string(x);
        string rnum = "";
        
        for (char i : num) {

            rnum = i + rnum;

        }
        
        return num == rnum;

    }

};
