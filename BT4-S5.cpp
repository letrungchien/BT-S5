#include<stdio.h>

int main(){
	int n;
	int i;
	int tich;
	
	printf("moi ban nhap bang cuu chuong muon biet \n");
	  scanf("%d",&n);
	  if(n>0 &&n<11){
	  
	  		for(int i=1;i<11;i++){
	  			tich=n*i;
	  			printf("%d X %d =%d\n",n,i,tich);
			  }
		}
			  else{
			  	printf("bang cuu chuong khong hop le");
			  }
	  
	  return 0;
}
