#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int min,seg,i;
	min=10;seg=00;
	i=3600;
	
	printf("\n\n\t\tCronometro");	
		do
		{
		system("cls");	
		printf("\n\n\t\t\tCronometro");
		printf("\n\n\n\t\t\t%dm:%ds",min,seg);
		
			if(seg==0)
			{
			seg=60;
			min--;
			}
			if(min==10)
			{
			min=9;
			seg--;
			}
			Sleep(1000);
			seg--;
		}
		while(i>=0);
		
	system("pause");		
return 0;					
}
