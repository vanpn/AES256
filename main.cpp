#include "aes256.h"
#include <iostream>
#include <string>
#include <locale>
using namespace std;


int main()
{
	//setlocale(LC_ALL, "polish");
	cout<<"Podaj tekst do zakodowania:\n";
	string tekst;
	getline(cin,tekst);
		string AES_KEY = "000102030405060708090a0b0c0d0e0f";
		string szyfr = sAes256Encrypt(tekst, AES_KEY);
		cout << "\nZaszyfrowany tekst: " << szyfr << "\n";
		cout << "\nOdszyfrowany tekst: " << sAes256Decrypt(szyfr, AES_KEY) << "\n";

//    std::cout<< "Dlugosc stringa: "<<tekst.size()<<"\n";
//    std::cout<< "Przed: "<<tekst<<"\n";
//    char* text = new char[tekst.size()];
//    std::cout<< "Ilosc znakow skopiowanych: "<<tekst.copy(text,tekst.size(),0)<<"\n";
//    std::cout<< "Tabica: "<<text<<".\n";
//    aes256_context ctx;
//    aes256_init(&ctx,(unsigned char*)"012345678901234567890123456789xy");
//    aes256_encrypt_ecb(&ctx,(unsigned char*)text);
//    std::cout<<"Zaszyfrowane: "<<text<<".\n";
//    aes256_init(&ctx,(unsigned char*)"012345678901234567890123456789xy");
//    aes256_decrypt_ecb(&ctx,(unsigned char*)text);
//    std::cout<<"Odszyfrowane: "<<text;



//	system("pause");
    return 0;
}
