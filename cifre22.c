#include <stdio.h>

int main()
{
	unsigned short n, i, cif;
	unsigned x, aux, nrmax = 0, asocparx, asocparmax = 0, p;

	scanf("%hu", &n);

	for (i = 0; i < n; i++) {
		scanf("%u", &x);
		
		aux = x, asocparx = 0, p = 1;

		while (aux) {
			cif = aux % 10;

			if (cif % 2 == 0) {
				asocparx = asocparx + p * cif;
				p = p * 10;
			}

			aux /= 10;
		}

		if (asocparmax < asocparx) {
			asocparmax = asocparx;
			nrmax = x;
		} else if (asocparmax == asocparx) {
			if (x > nrmax) {
				nrmax = x;
			}
		}
		//printf("x = %u, asocparx = %u, asocparmax = %u, nrmax = %u\n", x, asocparx, asocparmax, nrmax);
	}

	printf("%u", nrmax);

	return 0;
}
// scor 100
