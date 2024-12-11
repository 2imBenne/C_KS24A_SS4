#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen: ");
	int n;	scanf("%d",&n);
	if( n % 3 ==0 && n % 5 == 0){
		printf("So %d chia het cho ca 3 va 5 \n",n); 
	} 
	else if( n % 3 == 0){
		printf("So %d chia het cho 3 nhung khong chia het cho 5 \n",n); 
	} 
	else{
		printf("So %d chia het cho 5 nhung khong chia het cho 3 \n"); 
	} 
} 
