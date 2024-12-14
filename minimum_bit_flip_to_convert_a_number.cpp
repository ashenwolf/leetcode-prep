class Solution {
public:
    int minBitFlips(int start, int goal) {
        std::string binary = std::bitset<32>(start^goal).to_string();
        int count{0};
        for (auto b:binary){
            if (b == '1'){
                count++;
            }
        }
        return count;
    }
};
