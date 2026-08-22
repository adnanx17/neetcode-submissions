class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    bool valid(int r,int c,int n, int m){
        return r>=0&&r<n&&c>=0&&c<m;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               if(grid[i][j]=='1'){
                grid[i][j]='0';
                q.push({i,j});
                count++;
                while(!q.empty()){
                    int r=q.front().first;
                    int c=q.front().second;
                    q.pop();
                    for(int k=0; k<4; k++){
                        int nr=r+row[k];
                        int nc=c+col[k];
                        if(valid(nr,nc,n,m)&&grid[nr][nc]=='1'){
                            grid[nr][nc]='0';
                            q.push({nr,nc});
                        }
                    }
                }
                
               }
            }
        }

        return count;
    }
};
