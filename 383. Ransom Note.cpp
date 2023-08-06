class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> numOfLetters(26);
        for (char ch : magazine) {
            numOfLetters[ch-'a'] += 1;
        }
        for (char ch : ransomNote) {
            numOfLetters[ch-'a'] -= 1;
            if(numOfLetters[ch-'a'] < 0) return false;
        }
        return true;
    }
};
