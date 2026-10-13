#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int ds[n];
	for (int i=0;i<n;i++){
		scanf("%d",&ds[i]);
	}
	int max=ds[0];
	for (int i=1;i<n;i++){
		if (ds[i]>max) max=ds[i];
	}
	printf("%d",max);
}
