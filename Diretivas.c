/*
 * Diretivas.c
 *
 *  Created on: 18/11/2015
 *      Author: 1A224909937
 */

/*#include <stdio.h>
#include <stdio.h>

#define MAX(a,b) ((a > b) ? (a) : (b))
#define MIN(a,b) ((a <= b) ? (a) : (b))

int main() {
	int i = 7, j = 12;
	printf("\nMaior valor %d", MAX(i,j));
	printf("\nMenor valor %d", MIN(i,j));
	return 0;
}
*/

#include <stdio.h>

#define PAR(a) (((a%2) == 0) ? (1) : (0))
#define TRIPLO(a) (a*3)
#define SOMAR(a,b) (a+b)
#define TROCA(a, b, c) ((c = a) (a=b) (b= c))

//#ifdef TROCA
//	int a, b, c;
//	printf("\na = %d e b = %d\n", a,b);
//	c = a;
//	a = b;
//	b = c;
//	printf("\na = %d e b = %d\n", a,b);
//#endif

int main() {
	setbuf(stdout, NULL);
	int num, num1;
	#if defined(PAR)
		printf("\nDigite um n�mero: \n");
		fflush(stdin);
		scanf("%d", &num);
		printf("\nN�mero par(1), n�mero �mpar(0): %d\n", PAR(num));
	#endif

	printf("\nTriplo do n�mero %d �: %d", num, TRIPLO(num));
	printf("\nDigite um segundo n�mero: \n");
	fflush(stdin);
	scanf("%d", &num1);
	printf("\nSoma dos n�mero digitados: %d\n", SOMAR(num, num1));
#ifdef TROCA
	printf("\nTroca dos n�mero digitados: %d\n", TROCA(num, num1, ''));
#endif

	return 0;
}
