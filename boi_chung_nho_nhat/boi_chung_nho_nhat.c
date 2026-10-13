#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int a1=a,b1=b;
	while (a1*b1!=0){
		if (a1>b1) a1%=b1;
		else b1%=a1;
	}
	int kq=(a*b)/(a1+b1);
	printf("%d",kq);
}
