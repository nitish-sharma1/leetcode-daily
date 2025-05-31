class Solution {
public:
int n;
    pair<int,int> getCord(int v){
        int RT = (v-1)/n;
        int RB = (n-1) - RT;
        int col = (v-1) %n;
        if( (n%2 ==1 && RB%2==1) || (n%2 ==0 && RB%2==0) ){
            col = (n-1) - col;
        }
        return make_pair(RB,col);
    }

    int snakesAndLadders(vector<vector<int>>& board) {
        queue<int> q;
         n = board.size();
        int steps=0;
        vector<vector<int>> vis(n,vector<int>(n,0));
        q.push(1);
        vis[n-1][0]=1;
        while(!q.empty()){
            int N = q.size();
            while(N--){

            
            int u = q.front();
            q.pop();
            if(u==n*n){
                return steps;
            }
            for(int i =1 ; i <= 6 ; i++){
                int v = u+i;
                if(v > n*n){
                    break;
                }
                pair<int,int> cord = getCord(v);
                int r = cord.first;
                int c = cord.second;
                if(vis[r][c] == 1) {
                    continue;
                    }
            vis[r][c] =1;
                if(board[r][c]==-1){
                    q.push(v);
                }
                else{
                    q.push(board[r][c]);
                }
            }
            
            }
            steps++;
        }
         return -1;
    }
   
};