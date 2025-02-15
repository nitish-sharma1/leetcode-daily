class Solution {
public:
    bool isPunish(int n ,string prod , int i ,int sum){
        if(i == prod.size()){
            return sum == n;
        }
        if(sum > n ){

            return false;
        }
        bool result = false;
        for(int j = i ;  j < prod.size() ; j++ ){
            string sub = prod.substr(i,j-i+1);
            int val = stoi(sub);
            result = result || isPunish(n,prod,j+1,sum+val);
            if(result){
                return true;
            }
        }

        return false;

        

    }
    int punishmentNumber(int n) {
        int  res = 0 ; 
        for(int  i = 1 ; i <=n ; i++){
            string prod = to_string(i*i);
            if(isPunish(i , prod,0 ,0)){
                res += i*i;
            }
        }
        return res;
    }
};