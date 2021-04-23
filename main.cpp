#include <iostream>



using namespace std;

int main() {
  
  int C, conv;


  cout <<"Este programa convierte los grados celsius a farenheit";
  printf("\nDigite la temperatura en grados celsius:  ");
  scanf("%d",&C);
  conv= (C*9/5)+32;
  printf("La conversion a Farenheit es %d",conv);
  
  return 0;
  

  }