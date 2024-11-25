 #include<stdio.h>
 
 int main(){
 	
    int i;
    int n;
    int tich;
    
    for(int n=1;n<10;n++){
    	for(int i=1;i<11;i++){
    	tich=n*i;	
    		printf("%d x %d = %d \n",n,i,tich);
		}
	}
	
 	return 0;
 }
