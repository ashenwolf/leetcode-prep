class Solution {
public:
    std::unordered_map<char, int> u =
    {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int romanToInt(string s) {
        int sum {0};
        for (auto i {s.end()-1}; i != s.begin()-1; --i){
           std::cout << *i << " ";
           if (u[*i] >= u[*(i+1)]){
            sum = sum + u[*i];
            std::cout << "here ";
           }
           else {
            sum = sum - u[*i];
            std::cout << "there ";
           }
        }
        return sum;

    }
};