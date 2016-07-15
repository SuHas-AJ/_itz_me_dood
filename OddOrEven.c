#include<stdio.h>

#include<conio.h>

int main(){
    
	int var;

   	clrscr();

    	scanf("%d",&var);

    	if(var%2==0){

        printf("%d is an even number",var);
	}

    	else{
   
     	printf("%d is an odd number",var);
   
 	}

    	getch();
  
  	return 0;

}


