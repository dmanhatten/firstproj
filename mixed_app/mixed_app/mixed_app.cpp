#include <stdbool.h>
#include "firstProjFun.h"

void printMenu();
bool selectMenu();

int main() {

	bool loop = true;
	while (loop) {
		printMenu();
		loop = selectMenu();
	}
	

	return 0;
}


void printMenu() {
	system("COLOR");
	system("CLS");

	printf("\033[46m+++++++++++++++++++Auswahl++++++++++++++++++++\033[0m\n");
	printf("\033[1m Bitte Auswahl treffen\033[0m\n");

	printf("K = Kindergeburtstag\n");
	printf("S = Scan berechnen\n");
	printf("F = Fahrenheit <-> Celsius\n");
	printf("J = Schaltjahr pruefen\n");
	printf("X = Beenden\n");

}

bool selectMenu() {
	char a = 0;
	printf("Auswahl: ");
	scanf("%1c", &a);

	if (a == 115 || a == 83) {
		fScan();
	}
	else if (a == 107 || a == 75) {
		fKinder();
	}
	else if (a == 102 || a == 70) {
		fFahrenheit();
	}
	else if (a == 106 || a == 74) {
		fSchalt();
	}
	else if (a == 120 || a == 88) {
		return false;
	}

	return true;
}

