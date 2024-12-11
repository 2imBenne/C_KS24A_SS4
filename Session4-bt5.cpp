#include <stdio.h>

int main(){
	int a,b,c;
		printf("Moi nhap vao so nguyen thu nhat: ");
		scanf("%d",&a);
		printf("Moi nhap vao so nguyen thu hai: ");
		scanf("%d",&b);
		printf("Moi nhap vao so nguyen thu ba: ");
		scanf("%d",&c);
	if((c > a && c < b) || (c < a && c > b )){
		printf("So %d nam trong khoang giua hai so %d va %d ",c,a,b); 
	}
	else{
		printf("So %d khong nam trong khoang giua hai so %d va %d ",c,a,b); 
	}	
	 
} 
 
