#include <stdio.h>
#include <math.h>
int main(){
	int n, money;
	money=25000;
	printf("nhap tong so phut su dung dien thoai:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
	if(n<=50) money+=600;
	if((n>50) && (n<=200)) money+=400;
	if((n>200) && (n<=400)) money+=200;
	if(n>400) money+=100;
}
	printf("%d", money);
}