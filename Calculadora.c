#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//macros usados//
#define soma(a,b) ((a) + (b))
#define subtrcao(a,b) ((a) - (b))
#define divisao(a,b) ((a) / (b))
#define produto(a,b) ((a) * (b))

	int main (void)
	{
		float n1, n2, t;

		int op;

		do{

			printf ("[1]SOMA\n");
			printf ("[2]IVISAO\n");
			printf ("[3]SUBTRACAO\n");
			printf ("[4]PRODUTO\n");
			printf ("[5]TODAS\n");
			printf ("[>]");
				scanf ("%d",&op);
				system ("cls");

		}while(op < 1 || op > 5);

			switch(op)
			{
				case 1:
					printf ("informe o primeiro numero: ");
						scanf ("%f",&n1);

					printf ("informe o segundo numero: ");
						scanf ("%f",&n2);

						printf ("%.2f + %.2f = %.2f",n1,n2,soma(n1,n2));
						break;

				case 2:
					printf ("informe o primeiro numero: ");
						scanf ("%f",&n1);

					printf ("informe o segundo numero: ");
						scanf ("%f",&n2);

						printf ("%.2f / %.2f = %.2f",n1,n2,divisao(n1,n2));
						break;

				case 3:
					printf ("informe o primeiro numero: ");
						scanf ("%f",&n1);

					printf ("informe o segundo numero: ");
						scanf ("%f",&n2);

						printf ("%.2f - %.2f = %.2f",n1,n2,subtrcao(n1,n2));
						break;

				case 4:
					printf ("informe o primeiro numero: ");
						scanf ("%f",&n1);

					printf ("informe o segundo numero: ");
						scanf ("%f",&n2);

						printf ("%.2f x %.2f = %.2f",n1,n2,produto(n1,n2));
						break;

				case 5:

					printf ("informe o primeiro numero: ");
						scanf ("%f",&n1);

					printf ("informe o segundo numero: ");
						scanf ("%f",&n2);

						printf ("%.2f + %.2f = %.2f\n",n1,n2,soma(n1,n2));
						printf ("%.2f / %.2f = %.2f\n",n1,n2,divisao(n1,n2));
						printf ("%.2f - %.2f = %.2f\n",n1,n2,subtrcao(n1,n2));
						printf ("%.2f x %.2f = %.2f\n",n1,n2,produto(n1,n2));
						break;

				default:
					errno=1;

						printf ("ocorreu um erro -> %s",errno);

			}


	}