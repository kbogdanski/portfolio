//Program do SPOJ - nauka programowania
//Zadanie Lamacz gg - JGGHACK

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char tab[16] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
	int haslo[10];
	string kod;
	char znak;
	int n,i,j,k;
	int wartosc;

	cin.sync(); //czysci z bufora znak nowej lini aby nie konczyl funkcji getline przed podaniem tekstu
	
	while (getline(cin,kod)) {
		n = kod.length();
		cin.sync(); //czysci z bufora znak nowej lini aby nie konczyl funkcji getline przed podaniem tekstu
		//int haslo[n/2];

		k=0;
		for (i=0;i<20;i=i+2) {
			znak = kod[i];
			for (j=0;j<16;j++) {
				if (znak==tab[j]) {
					wartosc = j;
				}
			}
			znak = kod[i+1];
			for (j=0;j<16;j++) {
				if (znak==tab[j]) {
					wartosc = wartosc + j*16;
				}
			}
			haslo[k] = wartosc;
			k++;
		}

		for (k=0;k<10;k++) {
			cout<<(char)haslo[k];
			//cout<<haslo[k];
		}
		cout<<endl;
	}
	return 0;
}



/*
Pierwsza litera Warto�� 
 A 0 
 B 1 
 C 2 
 D 3 
 E 4 
 F 5 
 G 6 
 H 7 
 I 8 
 J 9 
 K 10 
 L 11 
 M 12 
 N 13 
 O 14 
 P 15 
 Druga litera Warto�� 
 A 0 
 B 16 
 C 32 
 D 48 
 E 64 
 F 80 
 G 96 
 H 112 
 I 128 
 J 144 
 K 160 
 L 176 
 M 192 
 N 208 
 O 224 
 P 240 


 Oki, a teraz fina�. Jak ju� m�wi�em ka�da litera prawdziwego has�a jest zapisana jako dwie inne litery (od A do P). Sumuj�c warto�ci tych liter wychodzi nam kod ascii prawdziwej litery has�a. Najprostszym sposobem na zamiane kody ascii na odpowiadaj�cy mu znak, jest otworzenie notatnika, wci�ni�cie klawisza NumLock (chyba �e lampka Num Lock ju� si� �wieci), wci�ni�cie i przytrzymanie lewego klawisza "Alt", wypisanie na klawiaturze alfanumerycznej (tej po prawej stronie z cyferkami) kodu ascii i puszczenie klawisza Alt. Korzystaj�c z dw�ch powy�szych tabelek spr�bujemy rozszyfrowa� przyk�adowe has�o: 

 Przyk�adowe has�o do serwera: 

 Password2 FECHCHPGCHFD 

 1. Ow�rz notatnik 
 2. Podziel zaszyfrowane has�o na ci�gi po dwie litery: FE CH CH PG CH FD 
 3. Pierwszy znak has�a ma kod: 5 (F) + 64 (E) = 69 (FE) 
 Drugi znak has�a ma kod: 2 � + 112 (H) = 114 (CH) 
 Trzeci znak has�a ma kod: 2 � + 112 (H) = 114 (CH) 
 Czwarty znak has�a ma kod: 15 (P) + 96 (G) = 111 (PG) 
 Pi�ty znak has�a ma kod: 2 � + 112 (H) = 114 (CH) 
 Pierwsza litera has�a ma kod: 5 (F) + 48 (D) = 53 (FD) 
 4. Wci�nij lub nie (tak aby lampka Num Lock si� �wieci�a) klawisz "Num Lock". 
 5. W notatniku przytrzymaj lewy alt, wpisz pierwszy kod (69) na klawiaturze alfanumerycznej i pu�� "alt" 
 przytrzymaj lewy alt, wpisz drugi kod (114) na klawiaturze alfanumerycznej i pu�� "alt" 
 przytrzymaj lewy alt, wpisz trzeci kod (114) na klawiaturze alfanumerycznej i pu�� "alt" 
 przytrzymaj lewy alt, wpisz czwarty kod (111) na klawiaturze alfanumerycznej i pu�� "alt" 
 przytrzymaj lewy alt, wpisz pi�ty kod (114) na klawiaturze alfanumerycznej i pu�� "alt" 
 przytrzymaj lewy alt, wpisz sz�sty kod (53) na klawiaturze alfanumerycznej i pu�� "alt" 

 I to wszystko, j�zeli dobrze wykona�e� powy�szy przyk�ad, powinien wyskoczy� ci w notatniku ci�g znak�w "Error5"
 */