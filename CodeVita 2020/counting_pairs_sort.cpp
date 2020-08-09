#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

bool search(int ul, int ll, int arr [], int len, int same){
	int i;
	for(i=0; i<len; i++){
		if((arr[i]>ll || arr[i]<ul)&&arr[i]!=same)
			return true;
	}
	return false;
}

int main(){
	int i,j,n,k,c,d,cnt=0;
	scanf("%d%d", &n, &k);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}

	float start_t=clock();
	
	bool res=false;
	for(i=0; i<n; i++){
		printf("\n%d    %d    %d    %d", arr[i]+k, arr[i]-k, arr[i], k);
		res=search(arr[i]+k, arr[i]-k, arr, n, arr[i]);
		if(res==true)
			cnt++;
	}
	
	printf("\n\n%d", cnt);

	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Run Program: %f", total_t);
}
