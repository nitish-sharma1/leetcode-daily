class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        string comb1="";
        string comb2 = "";
        for( int i = 0 ; i < k;i++)
        {
            if(i%2==0){
                comb1.push_back('0');
                comb2.push_back('1');
            }
            else{
                comb2.push_back('0');
                comb1.push_back('1');
            }
        }
        int i = 0 ;
        int j = 0 ;
        string curr="";
        int res=0;
        while(j<k){
            curr.push_back(colors[j]+'0');
           j++;
        }
         j=(j)%n;
        while(i<n && j<n){
            
            curr.push_back(colors[j]+'0');
            curr.erase(0,1);
           
            if(curr == comb1 || curr==comb2){
                res++;
            }
            i++;
            j=(j+1)%n;
        }


        return res;
        
    }
};