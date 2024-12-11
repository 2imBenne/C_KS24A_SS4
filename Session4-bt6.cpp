#include <stdio.h>

int main(){
	int old,neww,sum,total;
		printf("Moi nhap so kWh dau thang: ");
		scanf("%d",&old);
		printf("Moi nhap so kWh cuoi thang: ");
		scanf("%d",&neww);
		sum = neww - old;
	if(sum >= 0 && sum < 50 ){
			total = sum * 10000;
			printf("Tien dien thang nay la %d ",total); }
		else if(sum >= 50 && sum < 100 ){
			total = sum * 15000;
			printf("Tien dien thang nay la %d ",total); 
		}
		else if(sum >= 100 && sum < 150 ){
			total = sum * 20000;
			printf("Tien dien thang nay la %d ",total); 
		}
		else if(sum >= 150 && sum < 200 ){
			total = sum * 25000;
			printf("Tien dien thang nay la %d ",total); 
		}
	else{
		total = sum * 30000;
		printf("Tien dien thang nay la %d",total); 
	}	
}

