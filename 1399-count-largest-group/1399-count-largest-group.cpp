class Solution {
public:

    int getDigitSum(int n){
        int total = 0 ;
        while(n){
                int r = n % 10;
                total +=r;
                n=n/10;

        }
    return total;
    }
    int countLargestGroup(int n) {
      unordered_map<int,int> mp;
        for( int i = 1 ; i < n ;i++){
            int digitSum = getDigitSum(i);
            mp[digitSum]++;
        }
    
    int maxdigitcount = -1;
    int count =0;
    for(auto it : mp){
        if(it.second > maxdigitcount){
            maxdigitcount = it.second;
            count =1;
        }
        else if (it.second == maxdigitcount){
            count++;
        }
    }
    return count+1;
    }
};