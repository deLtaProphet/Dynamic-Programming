#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int max(int a,int b){


return (a>b?a:b);

}

int slen(char *x,char *y,int m,int n){
int len[m+1][n+1];





for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
	if(i==0 || j==0){
		len[i][j]=0;


	}else if (x[i-1]==y[j-1]){
		len[i][j]=1+len[i-1][j-1];

	}else{
		len[i][j]=max(len[i-1][j],len[i][j-1]);


	}

}
}



return len[m][n];

}

int main(){
 char x[]="abcdef";
 char y[]="xabcvdzesdfmbsfmnbf";
 int m=strlen(x);
 int n=strlen(y);

cout<<slen(x,y,m,n)<<endl;	







}
