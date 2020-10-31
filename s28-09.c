#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char nombre[50];
	int n1,n2,n3,res;
	FILE *fich;
	fich=fopen("fich.txt","r");
	
	if(fich==NULL)
	{
		perror("Error al abrir le fichero");
		exit;
	}

	while(!feof(fich))
	{
		fscanf(fich,"%s %d %d %d",nombre,&n1,&n2,&n3);
		printf("%s=%d\n",nombre,(n1+n2+n3)/3);
	}
	
	return 0;
}

