
class Solution {
public:
    int myAtoi(string s) {
        int res = 0 ; 
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool isnegitive = false;
        if(s[i] == '-'){
            isnegitive = true;
            i++;;
        }
        else if(s[i] == '+'){
            i++;
        }
        while(s[i] == '0'){
            i++;
        }

        while( true){
            int val = s[i] - '0';
            if(i == s.size() || val < 0 || val > 9){
                break;
            }
            if((long long )res * 10 + val > pow(2,31)-1 ){
                return  isnegitive ? -1 * pow(2,31) : pow(2,31) -1;
            }
            res = res * 10 + val;

            i++;

        }
        
        return isnegitive ? -1 * res : res;
    }
};