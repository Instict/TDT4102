#include "tests.h"
#include "std_lib_facilities.h"
#include "utilities.h"


void testReadAndWriteThingy() {
	string grunnlovLatin = "grunnlov_iso-latin-1.txt";
	string grunnlov = "grunnlov.txt";
	string temperatures = "temperatures.txt";
	string nefa = "nefa2.txt";
	string randomText("Definer en funksjon som leser fra en tekstfil,\n"
		"og lager en ny fil med den samme teksten\n"
		"og har linjenummer som f�rste tegn i hver linje.\n"
		"S�rg for at programmet ditt sjekker for\n"
		"vanlige feil som at filen ikke eksisterer.");

	/*
	Overloaded function
	*/
	writeToFile("exampleText.txt", randomText);
	readFromFile("exampleText.txt");

	writeToFile("userText.txt");
	readFromFile("userText.txt");
}