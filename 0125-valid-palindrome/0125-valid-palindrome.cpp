class Solution {
public:
    bool isPalindrome(string s) {
      
       string news = "";
        for( char ch : s){
            ch = tolower(ch);
            if( ch >='a' && ch <='z' || (ch >='0' && ch <='9')){
                news.push_back(ch);
            }
        }
        int n = news.size();
        int  i =0 ; int j=n-1;
        while( i<=j){
            if(news[i] != news[j] ){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};