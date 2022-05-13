#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "portuguese");

  cout << "Linguagens Tipada" << endl;
  char nome[] = "Jackson Douglas";
  short int idade = 35;
  long long telefone = 48991668449;
  long long cpf = 99933322244;
  int rg = 456789;
  char endereco[] = "Rua da programação";
  char sexo[] = "M";

  cout << nome << "\n";
  cout << idade << "\n";
  cout << telefone << "\n";
  cout << cpf << "\n";
  cout << rg << "\n";
  cout << endereco << "\n";
  cout << sexo << "\n";

  return 0;
}