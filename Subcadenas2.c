#include<stdio.h>

char cadena[50];
char subcadena[50];
int j=0;
int xi;
int i=0;
int main()
{
	scanf("%s",cadena);
	scanf("%s",subcadena);
	 
		while(cadena[i]!='\0')
		{
			while(cadena[i]==subcadena[j])
			{
				i++;
				j++;
			}
		}  
		if(xi==i){
		printf("existe");
	}
	else{
		printf("no exite");
	}
	
}
	

