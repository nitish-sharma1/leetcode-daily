class Solution {
public:
    bool isPunish(int n ,int prod , int sum){
       if(prod == 0 ){
        return sum == n ;
       }

        return (isPunish(n , prod/10 , sum+prod%10) || isPunish(n,prod/100,sum + prod%100) || isPunish(n,prod/1000,sum + prod%1000) );

    }
    int punishmentNumber(int n) {
        int  res = 0 ; 
        for(int  i = 1 ; i <=n ; i++){
            if(isPunish(i , i*i,0)){
                res += i*i;
            }
        }
        return res;
    }
};