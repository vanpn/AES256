#include "aes256.h"
#include <iostream>
#include <string>
#include <locale>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;


int main()
{
	//setlocale(LC_ALL, "polish");
	srand (time(NULL));
	char tab[118] = "ABCDEFGHIJKLMNOPQRSTUWXYZĄĘŁÓŹŻŃabcdefghijklmnopqrstuwxyząęłóżźń0123456789~!@#$%^&*()-=+_';/.,[]{}\"<>?:";
	cout<<"ROZPOCZĘCIE TESTÓW\n";
	
	string AES_KEY = "1";
	long error = 0;
	for(unsigned long long i=0;i<10000000;i++){
	//losuje długość ciągu
	int length = rand()%60+1;
	//int length = 5;
	string input;
	for(int j=0;j<length;j++){
			input+=tab[rand()%118];
			//input+=rand()%5;
		}
	string kod = sAes256Encrypt(input, AES_KEY);
	string output = sAes256Decrypt(kod, AES_KEY);
	if(input.compare(output)==0){
		cout<<"test "<<i+1<<" OK == "<<input<<"  ==  "<<output<<"\n";
	}
	else
		{cout<<"test "<<i+1<<" WRONG == "<<input<<"  ==  "<<output<<"\n";
		error++;}
	}
	cout<<"\nKONIEC TESTÓW\n"<<error<<" błędów";


    return 0;
}
