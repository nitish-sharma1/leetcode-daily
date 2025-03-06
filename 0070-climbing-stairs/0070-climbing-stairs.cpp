class Solution {
public:
   int t[46]={0};
    int climbStairs(int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(t[n] != 0){
            return t[n];
        }
        return t[n] = climbStairs(n-1) + climbStairs(n-2);
        
    }
};