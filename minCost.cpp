#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}

int min_cost(int c[3][3],int m,int n){
int cost[m+1][n+1];
cost[0][0]=c[0][0];
//o=initialize first clmn
for(int i=1;i<=m;i++){
cost[i][0] = cost[i-1][0] + c[i][0];

}

// init row
for(int j=1;j<=m;j++){
cost[0][j] = cost[0][j-1] + c[0][j];

}
for(int i=1;i<=m;i++){
	for(int j=1;j<=m;j++){
		cost[i][j] = min(cost[i-1][j],cost[i-1][j-1],cost[i][j-1]) + c[i][j];}

}

return cost[m][n];

}
int main(){
int cost[3][3] = { {1, 14, 13},
                      {1, 8, 2},
                      {1, 1, 3} };



cout<<min_cost(cost,2,2)<<endl;

return 1;
}










