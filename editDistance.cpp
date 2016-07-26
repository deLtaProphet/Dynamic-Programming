#include<iostream>
#include<string.h>

using namespace std;
int min(int x,int y,int z){
	return(min(x,y),z);



}


void getDis(string s1,string s2,int m,int n){
int dist[m+1][n+1];
for(int i=0;i<=m;i++){
	for(int j=0;j<=n;j++){
	if(i==0){
	dist[i][j]=j;

	}else if(j==0){
	dist[i][j]=i;

	}
	else if(s1[i-1]==s2[j-1]){

	dist[i][j]=dist[i-1][j-1];
	}
	else{


	dist[i][j]=1+min(dist[i-1][j],dist[i][j-1],dist[i-1][j-1]);

	}


}

}
cout<<dist[m][n]<<endl;

}


int main(){
string s1("hell");
string s2("heol");
getDis(s1,s2,s1.length(),s2.length());



return 1;}
