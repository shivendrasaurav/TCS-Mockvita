#include<stdio.h>
#include<math.h>

int main(){
	int tc, j;
	scanf("%d", &tc);
	int arr[tc];
	for(j=0; j<tc; j++){
		int n, i=0;
		scanf("%d", &n);
		while(pow(2, i)<=n)
			i++;
		arr[j] = i;		
	}
	for(j=0; j<tc; j++)
		printf("%d\n", arr[j]);
}
