#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char palavra[50],aux;
	int tam=0,i,j;


	printf("Informe uma palavra: \n");
	gets(palavra);
	
	j=strlen(palavra)-1;
	printf("Quantida de caracter na palavra informada: %i \n",j+1);
	for(i=0;i<j;i++) {
        aux=palavra[i];
        palavra[i]=palavra[j];
        palavra[j]=aux;
        j--;
    }
	printf("Palavra invertida: %s ",palavra);
	printf("\n\n\n");
		
	
	system("pause");
	return 0;
}