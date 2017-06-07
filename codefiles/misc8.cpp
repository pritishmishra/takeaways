#include <vector>
#include <iostream>
#define initial(x,y) x = xQueen; y = yQueen;
using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    int xQueen;
    int yQueen;
    int count = 0;
    int x,y;
    //int chessboard[n][n];
  
    vector< vector <int> > chessboard(n, vector<int> (n));

    for (int i = 0; i<n;i++)
        for (int j =0 ;j<n;j++)
        chessboard[i][j] = 0;
    
    cin >> xQueen >> yQueen;
    --xQueen; --yQueen;
    for(int a = 0; a < k; a++){
        int xObstacle;
        int yObstacle;
        cin >> xObstacle >> yObstacle;
        chessboard[--xObstacle][--yObstacle] = 1;
    }
 
    chessboard[xQueen][yQueen] = 2;
    initial(x,y);
    while(x >= 0){
        if(chessboard[x][y]==0) count++;
        if (chessboard[x][y]==1) break;
        x--;
    }
    
    initial(x,y);
    while(x<n){
        if(chessboard[x][y]==0) count++;
        if (chessboard[x][y]==1) break;
        x++;
    }
    
    initial(x,y);
    while(y>=0){
        if(chessboard[x][y]==0) count++;
        if (chessboard[x][y]==1) break;
        y--;
    }
    
    initial(x,y);
    while(y<n){
        if(chessboard[x][y]==0) count++; 
        if (chessboard[x][y]==1) break;
        y++;
    }
    
    initial(x,y);
    while(x>=0&&y>=0){
        if(chessboard[x][y]==0) count++; 
        if (chessboard[x][y]==1) break;
        x--;y--;
    }
    
    initial(x,y);
    while(x<n&&y<n){
        if(chessboard[x][y]==0) count++; 
        if (chessboard[x][y]==1) break;
        x++;y++;
    }
    
    initial(x,y);
    while(x>=0&&y<n){
        if(chessboard[x][y]==0) count++;
        if (chessboard[x][y]==1) break;
        x--;y++;
    }
    
    initial(x,y);
    while(x<n&&y>=0){
        if(chessboard[x][y]==0) count++;
        if (chessboard[x][y]==1) break;
        x++;y--;
    }
    cout << count;
    return 0;
}
