#include <cstdio>
#include <cstdlib>
#include <curses.h>
#include "header.h"

FILE * log;

int main(int argc, char** argv) {
	log = fopen(LOG_NAME, "a");
	fprintf(log, "______________\n");
	menu();
	return 0;
}

