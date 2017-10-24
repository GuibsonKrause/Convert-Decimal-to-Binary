#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numero = 35, binario = 0, resto, quoc, fator = 1;
	quoc = numero;
	while(quoc > 0)
	{
		resto = quoc % 2;
		binario = binario + (resto * fator);
		fator = fator * 10;
		quoc = quoc / 2;
	}
	printf("%d", binario);
	return 0;
}
