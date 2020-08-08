#include<bits/stdc++.h>
using namespace std;


int main(){
	int tc, j=0;
	scanf("%d", &tc);
	
	while(j!=tc){

		int n, i, sum=0;
		scanf("%d", &n);
		int *arr = new int[n];
		int *nc = new int[n];
		for(i=0; i<n; i++){
			scanf("%d", &arr[i]);
		}
		int noc=1;
		for(i=0; i<n; i++){
			if(i==0){
				if(arr[i]>arr[i+1]){
					nc[i]=noc+1;
				}
				else{
					nc[i]=noc;						
				}
			}
			else if(i==n-1){
				if(arr[i]>arr[i-1]){
					nc[i]=noc+1;
				}
				else{
					nc[i]=noc;						
				}
			}
			else if((i!=n-1 || i!=0) && arr[i]>arr[i+1] || arr[i]>arr[i-1]){
				nc[i]=noc+1;
			}
			else{
				nc[i]=noc;
			}
		}
		
		delete [] arr;
		
		for(i=0; i<n; i++)
			sum = sum + nc[i];

		delete [] nc;
			
		printf("\n%d", sum);
		
		j++;

	}
}
