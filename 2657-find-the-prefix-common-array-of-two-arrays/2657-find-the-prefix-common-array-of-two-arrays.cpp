class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
            int n = A.size();
            vector<int> vis(n+1,0);
            int count=0;
            vector<int> ans;
            for( int i = 0 ; i < n ; i++ ){
                if(A[i]==B[i]){
                    count++;
                    vis[A[i]]=1;
                }
                else{
                    if(vis[A[i]]){
                        count++;
                    }
                    else{
                        vis[A[i]]=1;
                    }
                    if(vis[B[i]]){
                        count++;
                    }
                    else{
                        vis[B[i]]=1;
                    }

                }
                ans.push_back(count);
            }
            return ans;
    }
};