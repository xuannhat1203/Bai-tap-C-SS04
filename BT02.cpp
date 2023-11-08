#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap canh thu nhat cua tam giac: ");
	scanf("%d", &a);
	printf("nhap canh thu hai cua tam giac: ");
	scanf("%d",&b);
	printf("nhap canh thu ba cua tam giac: ");
	scanf("%d", &c);
	if (a+b>c || a+c>b || b+c>a){
		printf("day la tam giac thuong");
	}else if(a==b || a==c || b==c){
		printf("day la tam giac can");
	}else if((float)sqrt(a*a+b*b)==c ||(float)sqrt(c*c+b*b)==a || (float)sqrt(a*a+c*c)==b){
		printf("day la tam giac vuong");
	}else if (a==b || a==c || b==c && (float)sqrt(a*a+b*b)==c ||(float)sqrt(c*c+b*b)==a || (float)sqrt(a*a+c*c)==b){
		printf("day la tam giac vuong can");
	}else if (a=b=c){
		printf("day la tam giac deu");
	}
}
