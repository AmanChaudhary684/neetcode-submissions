class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans1(256,0);
        vector<int> ans2(256,0);
        for (int x:s) {
            ans1[x]++;
        }
        for (int y:t) {
            ans2[y]++;
        }
        if (ans1==ans2) {
            return true;
        }
        return false;
    }
};
