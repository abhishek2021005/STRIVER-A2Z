#LEETCODE Q994 (Medium)

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
          int n=grid.size();
        int m= grid[0].size();
          vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
      
        int cntFresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else vis[i][j]=0;
                 if(grid[i][j]==1){cntFresh++;}
            }
        }
        
        
        int cnt=0;
        int tm=0;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,-1,0,1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                        q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=2;
                    cnt++;
                }
            }
        }
        if(cnt!=cntFresh)return -1;
        else return tm;
        
    }
};

// class Solution {
// public:
//     int count = 0;
//     void helper(vector<vector<int>>& grid, int i, int j, int time)
//     {
//         if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == 0 || (grid[i][j] > 1 && grid[i][j] < time))
//             return;
//         grid[i][j] = time;
//         helper(grid, i + 1, j, time + 1);
//         helper(grid, i - 1, j, time + 1);
//         helper(grid, i, j + 1, time + 1);
//         helper(grid, i, j - 1, time + 1);
//     }
//     int orangesRotting(vector<vector<int>>& grid) {
//         int time = 2;
//         for(int i = 0 ; i < grid.size(); i++)
//         {
//             for(int j = 0; j < grid[i].size(); j++)
//             {
//                 if(grid[i][j] == 2)
//                 {
//                     helper(grid, i, j, time);
//                 }
//             }
//         }
//         int ans = 2;
//         for(int i = 0 ; i < grid.size(); i++)
//         {
//             for(int j = 0; j < grid[i].size(); j++)
//             {
//                 if(grid[i][j] == 1)
//                     return -1;
//                 ans = max(ans, grid[i][j]);
//             }
//         }
//         return ans - 2;     
//     }
// };



#GFG (MEDIUM)Rotten Oranges


class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cntFresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                   
                    q.push({{i,j},0});
                      vis[i][j]=2;
                }
                else vis[i][j]=0;
                if(grid[i][j]==1){cntFresh++;}
            }
        }
        int cnt=0;
        int tm=0;
         
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            
            q.pop();
           int delrow[]={-1,0,1,0};
            int delcol[]={0,-1,0,1};
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                // if(vis[nrow][ncol]!= 2 && nrow >= 0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1)
                 if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1)
                {q.push({{nrow,ncol},t+1});
                vis[nrow][ncol]=2;
                cnt++;}
                
            }
        }
        if(cnt!=cntFresh)return -1;
        else return tm;
    }
};

// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//           int n=grid.size();
//         int m= grid[0].size();
//           vector<vector<int>>vis(n,vector<int>(m,0));
//         queue<pair<pair<int,int>,int>>q;
      
//         int cntFresh=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]==2){
//                     q.push({{i,j},0});
//                     vis[i][j]=2;
//                 }
//                 else vis[i][j]=0;
//                  if(grid[i][j]==1){cntFresh++;}
//             }
//         }
        
        
//         int cnt=0;
//         int tm=0;
//         int drow[] = {-1,0,1,0};
//         int dcol[] = {0,-1,0,1};
//         while(!q.empty()){
//             int row=q.front().first.first;
//             int col=q.front().first.second;
//             int t=q.front().second;
//             tm=max(tm,t);
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int nrow=row+drow[i];
//                 int ncol=col+dcol[i];
//                 if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
//                         q.push({{nrow,ncol},t+1});
//                     vis[nrow][ncol]=2;
//                     cnt++;
//                 }
//             }
//         }
//         if(cnt!=cntFresh)return -1;
//         else return tm;
        
//     }
// };
