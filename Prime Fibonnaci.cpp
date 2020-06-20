#include<stdio.h>
#include<math.h>

int main(){
	int i,j,n,sq;
	scanf("%d", &n);
	sq=sqrt(n);
	long int a[n*n];
	for(i=0;i<n;i++)
	    a[i]=i;
	for(i=2;i<sq;i++){
		for(j=i;j<n;j++){
			a[i*j]=0;
		}
	}
	for(i=2;i<n;i++){
		if(a[i]!=0){
		  printf("%d, ",a[i]);
		}
	}
}
