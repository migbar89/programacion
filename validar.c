#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fich;
	char c;
	int llave_cont=0;
	fich=fopen("ejemplo.txt","r");
	if(fich==NULL)
	{
		perror("Error al abrir el fichero");
		return 0;
	}
	while((c=fgetc(fich))!=EOF)
	{
		if(c=='{')
			llave_cont++;
		if(c=='}')
			llave_cont--;	
		
	}
	if(llave_cont==0)
	{
		printf("El programa se compilo correctamente\n");
	}
	else
	   if(llave_cont>0)
			printf("Al programa le hace falta %d llave de cierre",llave_cont);
	   else
		   printf("Al programa le hace falta %d llave de Apertura",llave_cont*-1);
	
	
	
	return 0;
}

