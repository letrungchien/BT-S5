#include<stdio.h>

int main(){
  	int number1;
	int number2;
	int chon;
	int ketqua;
    printf("moi ban nhap so thu nhat\n");
    scanf("%d",&number1);
    printf("moi ban nhap so thu hai\n");
    scanf("%d",&number2);
    
  do {
   
            printf("    CALCULATOR\n");
	        printf("1 tong hai so\n");
        	printf("2 hieu hai so\n");
        	printf("3 tich hai so\n");
        	printf("4 thuong hai so\n");
        	printf("5 thoat\n");
         	printf("moi ban lua chon\n");
         	     scanf("%d",&chon);
         
		
         	switch(chon){
         		case 1 :
         			ketqua=number1+number2;
         			printf("ket qua %d + %d = %d\n",number1,number2,ketqua);
         		break;
         		case 2 :
         			ketqua=number1-number2;
         			printf("ket qua %d - %d = %d\n",number1,number2,ketqua);
         		break;
         		case 3 :
         			ketqua=number1*number2;
         			printf("ket qua %d x %d = %d\n",number1,number2,ketqua);
         		break;
         		case 4 :
         			if(number2=0){
         				printf("khong xac dinh\n")
					 }
         			else{
					 ketqua=number1/number2;
         			printf("ket qua %d / %d = %d\n",number1,number2,ketqua);
         		}
         		break;
         		case 5:
         			printf(" chuong trinh ket thuc");
         		default:
         			printf("lua chon khong hop le");
			 }
		}while(chon !=5);
        
	return 0;
}
