class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        if( n < 3){
            return false;
        }
        int i = 1;
        while(i<n-1){
            if(arr[i]%2 !=0 && arr[i-1]%2 != 0 && arr[i+1]%2 !=0){
                return true;
            }
            i++;
        }
        return false;
    }
};