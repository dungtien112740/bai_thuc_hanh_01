#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d",&N);
	if (N<2){
		printf("Khong nguyen to");
		return 0;
	}
	else{
		for (int i=2;i<=sqrt(N);i++){
			if (N%i==0){
				printf("Khong nguyen to");
				return 0;
			}
		}
		printf("Co nguyen to");
		return 0;
	}
}
