class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
         int n = nums.size();
        vector<bool> isFliped(n,false);
        int flips =0 ; 
        int lastIndexflip = 0 ;

        for( int i =0;i<n ; i++){
            
            if(i>=k && isFliped[i-k]== true){
               lastIndexflip--; 
            }
            if(lastIndexflip%2 == nums[i]){
                if(i+k >n){
                return -1;
            }
            lastIndexflip++;
            flips++;
            isFliped[i]=true;

            }
        }
        return flips;
    }
};