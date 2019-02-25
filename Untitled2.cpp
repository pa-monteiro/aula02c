#include "iostream"
#include "cstdlib"
using namespace std;
int main () {
system("cls"); // apagar a tela
setlocale(LC_ALL, "Portuguese"); // idioma

float area=0, base=0, altura=0;

cout << "Digite o valor da altura: ";
cin>> altura; // leitura
cout << "Digite o valor da base: ";
cin>> base;
area = (base *altura)/2;

cout << "\nO valor da área é:" << area;
cout << endl; // pula linha
system("pause"); }
