#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	i=0;
	while(i!=n){
		int str[2], j=0, max=0, min=999;
		while(arr[i]>0)
		    {
		        str[j] = arr[i]%10;
		        arr[i] = arr[i]/10;
		        j++;
		    }
		for(j=0; j<3; j++){
			if(str[j]>max)
				max=str[j];
			if(str[j]<min)
				min=str[j];			
		}
		int score = ((max*11)+(min*7));
		if(score>=100)
			score=score-100;
		arr[i]=score;
		i++;
	}
	int cnt=0, cnte=0, cnto=0, maxe=0, maxo=0, j;
	for(i=0; i<n; i++){
		if(i%2==0){
			arr[i]=arr[i]/10;
		}
		else{
			arr[i]=arr[i]/10;
		}
	}		
	for(i=0; i<n; i++){
		cnte=0, cnto=0;
		for(j=0; j<n; j++){
			if(j%2==0){
				if(arr[i]==arr[j])
				cnto++;
			}
			else{
				if(arr[i]==arr[j])
				cnte++;
			}
		}
		if(cnte>maxe)
			maxe=cnte;
		if(cnto>maxo)
			maxo=cnto;
	}
	printf("%d", (maxe-1)+(maxo-1));
}
