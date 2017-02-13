#pragma once
#include <stdlib.h>
#include <stdio.h>


int fScan(void) {

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

	return 0;
}