#include "iostream"
#include "cstdlib"
using namespace std;
int main () {
system("cls"); // apagar a tela
setlocale(LC_ALL, "Portuguese"); // idioma

float potencia=0, tensao=0, corrente=0;

cout << "Digite o valor da tens�o: ";
cin>> tensao; // leitura
cout << "Digite o valor da corrente: ";
cin>> corrente;
potencia = tensao*corrente;

cout << "\nO valor da pot�ncia �:" << potencia;
cout << endl; // pula linha
system("pause"); }
