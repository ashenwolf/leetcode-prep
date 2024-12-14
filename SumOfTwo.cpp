class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int i = nums[0];
        for (int k = 1; k < nums.size(); ++k )  {
            if (i + nums[k] == target){
                vector<int> result({i, nums[k]});
                return result;
            }
        }
        vector<int> n (nums.begin()+1, nums.end());
        return twoSum( n, target);*/

        int s = 0;
        int i = nums[s];

        int b = nums.size()-1;
        int k = nums[b];
        
        while (s != nums.size()-1){

            if (b == s){
                ++s;
                i = nums[s];
                b = nums.size()-1;
                k = nums[b];
            }

            if(i + k == target){
               vector<int> result({s, b}); 
               return result;
            }

            --b;
            k = nums[b];

        }
        vector<int> error({-1});
        return error;
    }
};