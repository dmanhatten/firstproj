#pragma once
#include <stdlib.h>
#include <stdio.h>


int fScan(void) {

	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0;

	system("CLS");
	printf("---------------Scan Berechnung---------------\n");
	printf("Bitte geben Sie die DPI ein: ");
	scanf("%i", &dpi);
	printf("Bitte geben Sie die Farbtiefe in Bit ein: ");
	scanf("%i", &farbtiefe);
	printf("Bitte geben Sie die Breite in cm ein: ");
	scanf("%f", &breite);
	printf("Bitte geben Sie die H\x99he in cm ein: ");
	scanf("%f", &hoehe);
	printf("---------------Ausgabe---------------\n");

	groesse = ((((dpi * breite) / 2.54) * ((dpi * hoehe) / 2.54)) * farbtiefe) / 8.0 / 1024.0 / 1024.0;
	printf("Die zu erwartende Dateigr\x99\xe1\e entspricht %.4lf MiB\n", groesse);

	system("PAUSE");
	return 0;
}

int fKinder(void) {

	system("CLS");
	int kinder = 0, eier = 0, rest = 0, erhalten = 0;
	printf("Willkommen zum Kindergeburtstag\n");
	printf("Wie viele Kinder sind da?\n");
	scanf("%i", &kinder);
	printf("Wie viele \x9a\x62\erraschungseier hast du, ich hoffe mehr als Kinder\nsonst gibt es Streit.\n");
	scanf("%i", &eier);
	erhalten = eier / kinder;
	rest = eier % kinder;
	printf("Es wurden %i Kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier bekommen.\n"
		"Es bleiben noch %i \x81\x62rig\n", kinder, erhalten, rest);
	system("PAUSE");
	return 0;
}

int fSchalt(void) {

	int jahr = 0;
	int erg = 0;
	system("CLS");
	printf("---------------Schaltjahr pruefen---------------\n");
	printf("Bitte geben Sie das Jahr ein: ");
	scanf("%i", &jahr);

	printf("Das Jahr %i ist ", jahr);

	erg = (jahr % 4 == 0) && (jahr % 100 != 0 || jahr % 400 == 0);

	erg ? printf("ein Schaltjahr.\n") : printf("kein Schaltjahr.\n");
	system("PAUSE");
	return 0;
}

int fFahrenheit(void) {
	int temperatur = 0;
	
	system("CLS");
	printf("---------------Fahrenheit <-> Celsius---------------\n");
	printf("Bitte geben Sie die Temperatur in \xF8\x46 ein: ");
	scanf("%i", &temperatur);
	printf("Temperatur in \xF8\x43: %.2f\n", (temperatur - 32) * (5. / 9.));
	printf("Bitte geben Sie die Temperatur in \xF8\x43 ein: ");
	scanf("%i", &temperatur);
	printf("Temperatur in \xF8\x46: %.2f\n", temperatur * (9. / 5.) + 32);
	system("PAUSE");

	return 0;
}