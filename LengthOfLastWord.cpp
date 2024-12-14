class Solution {
public:
    int lengthOfLastWord(string s) {
        int count{0};
        std::string::iterator l {s.end()-1};
        while (l != s.begin()-1 && *l == ' '){
            --l;
        }
        while (l != s.begin()-1 && *l != ' '){
            ++count;
            --l;
        }
        return count;
    }
};