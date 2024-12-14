class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        
        vector<int> digits;
        while (x / 10 >= 1){
            digits.push_back(x%10);
            x = x/10;

        }

        digits.push_back(x%10);

        /*for (int i = 0; i < digits.size(); ++i){
            std::cout << digits[i];
        }*/

       
        std::vector<int>::iterator i = digits.begin();
        std::vector<int>::iterator k = digits.end() -1;
        while(k!=i | k < i){
            if (*k != *i){
                return false;
            }
            --k;
            ++i;

        }
        return true;

    }
};