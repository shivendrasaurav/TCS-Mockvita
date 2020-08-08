#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,n,k,c,d,cnt=0;
	scanf("%d%d", &n, &k);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>=a[i]-k && a[j]<=a[i]+k && a[i]!=a[j]){
					cnt++;
					break;
			}
		}
	}
	printf("%d", cnt);
}
