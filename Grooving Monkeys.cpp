#include<stdio.h>

char arrcmp(char a[],char b[],int size)	{
	int i;
	for(i=1;i<=size;i++){
		if(a[i]!=b[i])
			return 1;
	}
	return 0;
}

int main(){
	int n, i, cnt=1, j;
	scanf("%d", &n);
	int arr[n];
	char init[n], mew[n], temp[n];
	for(i=1; i<=n; i++){
		scanf("%d", &arr[i]);
		init[i]=96+i;
		mew[i]=96+i;
	}
	i=0;
	while(i<=n){
		for(j=1; j<=n; j++)
			temp[arr[j]]=mew[j];
		for(j=1; j<=n; j++)
			mew[j]=temp[j];
		if(arrcmp(mew, init, n)==0)
			break;
		else
			cnt++;
		i++;
	}
	printf("%d", cnt);
}	
