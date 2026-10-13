#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int delta=b*b-4*a*c;
	if (delta<0){
		printf("Vo nghiem");
		return 0;
	}
	else if (delta==0){
		printf("%f",(float)(-1*b)/(2*a));
		return 0;
	}
	else{
		printf("%f %f",(float)(-1*b+(float)sqrt(delta))/(2*a),(float)(-1*b-(float)sqrt(delta))/(2*a));
		return 0;
	}
}
