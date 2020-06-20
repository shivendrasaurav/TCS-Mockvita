#include<stdio.h>
#include<math.h>

int fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int modulo(int n,int M)
{
    return fast_pow(n,M-2,M);
}
int main(){
	int T, i;
	scanf("%d", &T);
	for(i=0; i<T; i++){
		long long int p, n, q, m=1000000007;
		scanf("%lld%lld%lld", &n, &q, &p);
		long long int ans = modulo(q, m);
		printf("%lld", p*ans);
	}
}
