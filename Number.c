#include<stdio.h>
#include<conio.h>
int main(){
	int var;
	clrscr();
	//Getting input from the user
	scanf("%d",&var);
	if(var>0){
	printf("%d is a Positive Number",var);
	}
	else if(var<0){
	printf("%d is a Negative Number",var);
	}
	else{
	printf("Entered value is 0");
	}
	return 0;
	getch();
}