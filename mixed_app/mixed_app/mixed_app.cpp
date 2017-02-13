#include "firstProjFun.h"

int main() {

	int a = 0;
	system("COLOR");

	printf("\033[46m+++++++++++++++++++Auswahl++++++++++++++++++++\033[0m\n");
	printf("\033[1m Bitte Auswahl treffen\033[0m\n");

	printf("K = Kindergeburtstag\n");
	printf("S = Scan berechnen\n");

	scanf("%c", &a);

	a == 115 || a == 83 ? fScan() : fKinder();

	return 0;
}

