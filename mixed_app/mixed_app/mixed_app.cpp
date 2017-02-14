#include "firstProjFun.h"

int main() {

	char a = 0;
	system("COLOR");

	printf("\033[46m+++++++++++++++++++Auswahl++++++++++++++++++++\033[0m\n");
	printf("\033[1m Bitte Auswahl treffen\033[0m\n");

	printf("K = Kindergeburtstag\n");
	printf("S = Scan berechnen\n");
	printf("F = Fahrenheit <-> Celsius\n");
	printf("J = Schaltjahr pruefen\n");

	scanf("%c", &a);

	a == 115 || a == 83 ? fScan() : (a == 107 || a == 75 ? fKinder(): (a == 102 || a == 70 ? fFahrenheit() : fSchalt()));

	return 0;
}

