class Solution {
public:
bool solve(int i , int sum , vector<int> power , int len,int n){
        if(i == len && sum == n){
            return true;
        }
        if(i==len && sum !=n){
            return false;
        }
        return(solve(i+1,sum+power[i],power,len,n) || solve(i+1,sum,power,len,n));
}
    bool checkPowersOfThree(int n) {
        vector<int> powOfthree;
        int p = 1;
        while(p <= n){
            powOfthree.push_back(p);
            p = p*3;
        }

        return solve(0,0,powOfthree,powOfthree.size(),n);
        
    }
};