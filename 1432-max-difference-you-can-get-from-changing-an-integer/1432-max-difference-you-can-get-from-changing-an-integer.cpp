class Solution {
public:
    int maxDiff(int num) {
        string number = to_string(num);
        string temp = number;
        int n = number.size();
        int i =0;
       while(i<n){
        
            if(number[i]!='9'){
                break;
            }
            i++;
        }
        if(i<n){
                    cout<<i<<endl;
            char ch = number[i];
            while(i<n){
                if(temp[i]==ch){
                    temp[i]='9';
                }
                i++;
            }
    
        }
        int maxnum = stoi(temp);
        temp = number;
        
        for( i = 0 ; i < n ;i++){
            if(temp[i] >'1'){
               break;
            }
        }
        if(i<n){
            char ch = temp[i];
            char val = (i==0)? '1' : '0'; 
            while(i<n){
                if(temp[i]==ch){
                    temp[i]=val;
                }
                i++;
            }
        }

        int minnum = stoi(temp);
        cout<<maxnum << " "<< minnum;
       
        return maxnum - minnum;
    }
};