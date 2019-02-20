#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
#include <string>



using namespace std;

int main()
{
	srand(time(NULL));
	//string chords[] = { "G", "Em", "C", "Am", "D" };
	string chords[] = { "F", "C", "Am" };

	int prevValue = -1;
	int value = -1;

	while (true)
	{
		value = rand() % 3;

		while (value == prevValue)
		{
			value = rand() % 3;
		}
		cout << "Chord: " << chords[value] << endl;
		Sleep(3000);
		prevValue = value;
	}
}

