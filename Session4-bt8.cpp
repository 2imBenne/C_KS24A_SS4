#include <stdio.h>

int main(){
	int a,b,c;
		printf("Moi nhap vao do dai canh thu nhat: ");
		scanf("%d",&a);
		printf("Moi nhap vao do dai canh thu hai: ");
		scanf("%d",&b); 
		printf("Moi nhap vao do dai canh thu ba: ");
		scanf("%d",&c);
	if((a + b > c) || (a + c > b) || (b + c > a)){
		printf("La 3 canh cua mot tam giac "); 
	}
	else{
		printf("Khong phai ba canh cua mot tam giac "); 
	}	
} 
