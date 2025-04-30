class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0 ;
        for( auto num : nums){
            int count =0;
            while(num){
                count++;
                num = num /10;
            }
            if (count %2 == 0){
                res++;
            }
        }
        return res;
    }
};