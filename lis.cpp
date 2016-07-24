#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int lis(int arr[],int n){
	int l[n];
	int max=0;
	for(int i=0;i<n;i++){
	
	l[i]=1;
		

		
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j] && l[i]<l[j]+1){
				
			l[i]=l[j]+1;

			}


		}


	}
	for(int i=0;i<n;i++){
	if(l[i]>max){
		max=l[i];
		

		}
	}
 		
        		
return max;


}

int main()
{
int arr[]={10,20,5,3,4,8,11,14,15};
int n=sizeof(arr)/sizeof(arr[0]);
int max=lis(arr,9);
cout<<max<<endl;;














return 1;}
