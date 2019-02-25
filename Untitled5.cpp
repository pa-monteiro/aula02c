#include "iostream"
#include "cstdlib"
using namespace std;
int main () {
system("cls"); // apagar a tela
setlocale(LC_ALL, "Portuguese"); // idioma

float tq=0, r=0, a=0,;
float const g = 9.8;

cout << "Digite o valor da raiz: ";
cin>> r; // leitura
cout << "Digite o valor da altura: ";
cin>> a;
tq = r *(2*a/g);

cout << "\nO valor do tempo de queda de um objeto é:" << tq;
cout << endl; // pula linha
system("pause"); }
