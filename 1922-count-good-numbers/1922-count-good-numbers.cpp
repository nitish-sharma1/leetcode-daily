class Solution {
public:
 int M = 1000000007;
long long find_power(int base, long long power ){
    if(power == 0 ){
        return 1;
    }
    long long res = find_power(base,power/2);
    res  = res * res  % M;
    if(power %2 !=0){
        res =  res * base %M; 
    }
    return res;
}
    int countGoodNumbers(long long n) {
        long long p5 = (n+1)/2;
        long long p4 = n/2;
        
       
        long long  res =  find_power(5,p5) * find_power(4,p4) % M ;
        return res;
    }
};