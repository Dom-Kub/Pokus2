#include <cstring>
#include <cmath>
#include "AbcCislo.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>



using namespace std;
int AbcCislo::Abc2Dec(const char *abcCislo)
{
	int cislo{ 0 };
	int dlzkaCisla = strlen(abcCislo);
	char *retazec = new char[dlzkaCisla];
	strcpy(retazec, abcCislo);


	if (0 == strlen(abcCislo)){
		return cislo;
	}
	else {

		for (int i = 0; i < dlzkaCisla; i++){
			switch (abcCislo[i]){
			case 'A': retazec[i] = '0';	break;	case 'a': retazec[i] = '0';	break;
			case 'B': retazec[i] = '1'; break;	case 'b': retazec[i] = '1';	break;
			case 'C': retazec[i] = '2';	break;	case 'c': retazec[i] = '2';	break;
			case 'D': retazec[i] = '3';	break;	case 'd': retazec[i] = '3';	break;
			case 'E': retazec[i] = '4';	break;	case 'e': retazec[i] = '4';	break;
			case 'F': retazec[i] = '5';	break;	case 'f': retazec[i] = '5';	break;
			case 'G': retazec[i] = '6';	break;	case 'g': retazec[i] = '6';	break;
			case 'H': retazec[i] = '7';	break;	case 'h': retazec[i] = '7';	break;
			case 'I': retazec[i] = '8';	break;	case 'i': retazec[i] = '8';	break;
			case 'J': retazec[i] = '9';	break;	case 'j': retazec[i] = '9';	break;
			default: break;
			}
		}
		cislo = atol(retazec);          //*((long long*)retazec);



	
	}
	//delete[] retazec;

	
	return cislo;
}






//-------Toto mi uz nechce ist a zatial som neprisiel na to ako dalej--------
char *AbcCislo::Dec2Abc(const int cislo){
	char *decCislo = new char[];
	sprintf(decCislo, "%d", cislo);
	
	char *retazec = new char[];
	
	strcpy(retazec, decCislo);

	int dlzkaCisla = strlen(decCislo);

	
	//cout << dlzkaCisla  << " -decCislo\n\n";


   
   if (dlzkaCisla == 0){
	   return NULL;
   }
   else{


	   for (int i = 0; i <dlzkaCisla; i++){
		   switch (decCislo[i]){
		   case '0': retazec[i] = 'A';	break;
		   case '1': retazec[i] = 'B'; break;
		   case '2': retazec[i] = 'C';	break;
		   case '3': retazec[i] = 'D';	break;
		   case '4': retazec[i] = 'E';	break;
		   case '5': retazec[i] = 'F';	break;
		   case '6': retazec[i] = 'G';	break;
		   case '7': retazec[i] = 'H';	break;
		   case '8': retazec[i] = 'I';	break;
		   case '9': retazec[i] = 'J';	break;
		   case '-': retazec[i] = '-';	break;
		   default: break;
		   }
	   }
   }
  
   
   return retazec;
}










void AbcCislo::vypisVAbc()
{

	

	cout << "Vysledok v Abc: " << Dec2Abc(aCislo) << "\n";
//	v.vypis(bcislo);
	//delete[] bcislo;
}

void AbcCislo::vypisVDec()
{
	cout << "Vysledok v Dec: " << aCislo << "\n";

}