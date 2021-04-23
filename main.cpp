#include <iostream>



using namespace std;

int main() {
  
  int C, conv; //Se declaran dos variables C y conv


  cout <<"Este programa convierte los grados celsius a farenheit"; //Este programa convierte los grados celsius a ferenheit
  printf("\nDigite la temperatura en grados celsius:  ");//El usuario digita los grados celsius.
  scanf("%d",&C);// por medio de scanf se puede leer los datos de la entrada.
  conv= (C*9/5)+32; //Mediante esta formula se aplica la conversion de grados celsius a farenheit
  printf("La conversion a Farenheit es %d",conv);// El resultado de la conversión es:
  
  return 0;
  

  }