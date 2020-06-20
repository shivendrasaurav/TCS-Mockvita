#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j, x[n], y[n], v[n];
	for(i=0; i<n; i++){
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
		scanf("%d", &v[i]);
	}
	int time[n];
	for(i=0; i<n; i++){
		int xa = x[i];
		int ya = y[i];
		int b = round(pow(xa, 2) - pow(ya, 2));
		int a = round(sqrt(b));
		time[i] = a%v[i];
	}
	int cnt = 0;
	for(i=0; i<n; i++){
		if(time[i]==0)
			cnt++;
	}
	printf("%d", cnt+1);
	return 0;
}
