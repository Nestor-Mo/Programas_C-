#include <iostream>
using namespace std;

int a=1;

int funcion(int Numini){
  a = a + 1;
  int finNum = Numini * Numini;
return finNum;
}

int main() {
  int b=2;
  int c=3;
  cout<<a<<endl;
  cout<<((a+2*funcion(b))*(c+2*funcion(b)))<<endl;
  cout<<a<<endl;
  cout<<((a+2*funcion(b))*(c+2*funcion(b)))<<endl;
  cout<<a<<endl;
}