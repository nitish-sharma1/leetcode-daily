class Solution {
public:
    int mySqrt(int x) {
        int s = 0 ;
        int e = x/2;
        if(x==1){
            return 1;
        }
        while(s<=e){
            int mid = e-(e-s)/2;
            long long sq = (long long)mid *mid;
            if(  sq== x){
                return mid;
            }
            else if(sq > x){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return e;
    }
};