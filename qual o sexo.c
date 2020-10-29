#include <stdio.h>

int main ()
{
	int sexo;
	
	printf ("Qual o seu sexo? (0 - F, 1 - M): ");
	scanf ("%d", &sexo);
	
		switch (sexo)
	{
		case 0:
			printf ("Seu sexo e feminino");
			break;
		case 1:
			printf ("Seu sexo e masculino");
			break;
		default:
		    printf ("Seu sexo e indefinido");
		    break;
	}
	return 0;
}
