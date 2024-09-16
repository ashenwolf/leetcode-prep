class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minuts;
        int min = 1440;

        for (auto t : timePoints)  {
            int hours = stoi(t.substr(0, 2));  
            int minutes = stoi(t.substr(3, 2));   
            minuts.push_back(hours * 60 + minutes);
        }

        sort(minuts.begin(), minuts.end());

        for (auto m = minuts.begin(); m != minuts.end()-1; m++){
            min = *(m+1) - *m <= min ? *(m+1) - *m : min;
        }
        int second = 1440 - *(minuts.end()-1);
        
        min = second+minuts[0] <= min ? second+minuts[0] : min ;
        

        return min;
    }
};
