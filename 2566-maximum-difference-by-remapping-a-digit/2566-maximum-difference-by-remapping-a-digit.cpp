class Solution {
public:
    int minMaxDifference(int num) {
        string number = to_string(num);
        int i = 0 ; 
        int n = number.size();
        string temp = number;
        while(i<n && number[i] == '9'){
                i++;
            }
        if(i<n){

                char ch = number[i];
                while(i<n){
            if(temp[i] == ch){
                temp[i]='9';
                }
                i++;
                }
            }
        
       int maxnum = stoi(temp);
       temp = number;
       i=0;
          while(i<n && number[i] == '0'){
                i++;
            }
        if(i<n){

                char ch = number[i];
                while(i<n){
            if(temp[i] == ch){
                temp[i]='0';
                }
                i++;
                }
            }
        
        int minnum = stoi(temp);
        return maxnum - minnum;
    }
};