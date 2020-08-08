#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,n,k,c,d,cnt=0;
	scanf("%d%d", &n, &k);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		j=i+1;
		for(; j<n; j++){
			printf("\narr[i]=%d    arr[i-j]=%d     arr[i+j]=%d", arr[i], arr[i-j], arr[i+j]);
			if(arr[i]-arr[i-j]<=k || arr[j+i]-arr[i]<=k){
				cnt++;
				printf("\nCount Increased\n");
				break;
			}
		}
	}
	printf("%d", cnt);
}
