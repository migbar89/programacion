#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *origen,*destino;
	char cadena[100][100];
	int lineas=0,i;
	origen=fopen("origen.txt","r");
	destino=fopen("destino.txt","w");
	
	if(origen==NULL)
	{
		perror("Error al abrir el fichero");
		return 0;
	}
	while(!feof(origen))
	{
		fgets(cadena[lineas],100,origen);
		lineas++;
	}
	for(i=0;i<lineas;i++)
	{
		fputs(cadena[i],destino);
	}
	
	return 0;
}

