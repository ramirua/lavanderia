/*lavanderia*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	int np,p,ch,cm,mayorp=0,cp,cca;
	char r,nom[20],s,tipo,nomaux[20];
	float ptotal;
	
	ch=0, cm=0;
	printf(" hay estudiante s/n: ");
	r=getch();
    r=tolower(r); //para guardar y transformar a miniscula la resp
	
	while(r=='s')
	{
		printf("\n nombre: ");
		fflush (stdin);
		gets(nom);
		printf("\n Sexo (F)(M): ");
		s=tolower(getch());
		printf("\n ingrese numero de prendas: ");
		scanf("%d",&np);
		
		//valido el sexo
		if(s=='F')
		{
			cm++;
		}
		else
		{
			cp++;
		}
		
		cp=0; cm=0;
		
		for(p=0; p<np; p++)
		{
			printf(" \n descripcion (c)camisa, (p)pantalon, (v)vestido, (o)otros:  ");
			tipo=tolower(getch());
			if(tipo=='p')// para contar cuantos pantalones y camisas entran
			{
				cp++;
			}
			if(tipo=='c')
			{
				cca++;
			}
		}
		
		printf("\n trajo %d pantalones y %d camisas", cp,cca);
		
		if(cp>=mayorp && cca>4)
		{
			mayorp=cp;
			strcpy(nomaux, nom); //para que apraezca el nombre que eintrodujo los datos
		}
		
		ptotal=((cca*450)+(cp*650))/1000;
		printf("\n el peso en kilogramos de las prendas es: %.2f ", ptotal);
		
			printf(" \n hay estudiante s/n: ");
			r=tolower(getch());
	}
	 //validar si es diferente de cero mayorp
	printf(" \n %s trajo menos pantalones %d ", nomaux,cp);
	
	if(ch>cm)
	{
	  	printf("\n quien menos utilizo la lavanderia son las mujeres");	
	}
	else
	 {
		if(ch<cm)
	     {
	  	   printf("\n quien menos utilizo la lavanderia son los hombres");	
	     }
	}
	
		if(ch==cm)
	     {
	  	   printf("\n mujeres y hombres utilizaron la lavanderia");	
	     }
	return 0;
}
