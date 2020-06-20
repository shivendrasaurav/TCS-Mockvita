#include<stdio.h>
#include<math.h>

int main(){
	long long int n;
	scanf("%lld", &n);
	long long int i, j, x[n], y[n], v[n];
	for(i=0; i<n; i++){
		scanf("%lld", &x[i]);
		scanf("%lld", &y[i]);
		scanf("%lld", &v[i]);
	}
	long long int time[n];
	for(i=0; i<n; i++){
		int xa = x[i];
		int ya = y[i];
		int b = pow(xa, 2) - pow(ya, 2);
		int a = sqrt(b);
		time[i] = a%v[i];
	}
	long long int cnt = 0;
	for(i=0; i<n; i++){
		if(time[i]==0)
			cnt++;
	}
	printf("%lld", cnt);
}
