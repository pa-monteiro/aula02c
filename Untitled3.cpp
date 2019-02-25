#include "iostream"
#include "cstdlib"
using namespace std;
int main () {
system("cls"); // apagar a tela
setlocale(LC_ALL, "Portuguese"); // idioma

float distancia=0, tempo=0;

cout << "TEMPO: ";
cin>> tempo; // leitura
distancia = tempo*340;
cout << "\nO valor da distancia do raio é:" << distancia;
cout << endl; // pula linha
system("pause"); }
