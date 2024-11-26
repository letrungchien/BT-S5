#include<stdio.h>

int main(){
	   int a,b,c,chon,tong,tb;
	do{
	    printf("   MENU\n");
		printf("1 nhap 3 so\n");
		printf("2 tong 3 so\n ");
    	printf("3 trung binh cong ba so\n");
		printf("4 so nho nhat\n");
		printf("5 so lon nhat\n");
		printf("6 thoat\n");
	    	scanf("%d",&chon);
		switch(chon){
			
			case 1 :
			     	printf("moi nhap so thu nhat\n ");
				scanf("%d",&a);
					printf("moi nhap so thu hai\n");
				scanf("%d",&b);
					printf("moi nhap so thu ba\n ");
				scanf("%d",&c);
				break;
			case 2:
				tong=a+b+c;
			printf("tong ba so %d + %d + %d = %d\n ",a,b,c,tong);
				break;	
			case 3:
			   tong=a+b+c;	
				tb=tong/3;
			printf("trung binh cong %d %d %d la %d\n",a,b,c,tb);
				break;
			case 4:
				if (a<b && a<c){
					printf("%d la so nho nhat\n",a);
				}
				else if(b<a && b<c){
				printf("%d la so nho nhat\n",b);
				}
				else{
				printf("%d la so nho nhat\n",c);	
				}
				break;
			case 5:	
				if (a>b && a>c){
					printf("%d la so lon nhat\n",a);
				}
				else if(b>a && b>c){
				printf("%d la so lon nhat\n",b);
				}
				else{
				printf("%d la so lon nhat\n",c);	
				}	
				break;
				default:
					printf("lua chon khong hop le\n");
		}
		
		
		
		
		
	}while(chon !=6);
      
	
	return 0;
}
