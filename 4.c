#include<stdio.h>
#include<conio.h>
main(){
	
	int a=30;
	int n;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	while(a<=n){
	
		if(a%2==1)
		{
		printf("%d\t",a);
	}
	    a--;
	}
	getch();
}
