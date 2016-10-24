#include<stdio.h>
#include<stdlib.h>

int main ()
{   int tem, temtotal=0, numtem=0;
    float prom;

    printf("\n\tPROGRAMA PARA PROMEDIO DE TEMPERATURAS DE CPU\n\n");
    printf("Ingrese la primera temperatura: ");
    scanf("%i",&tem);

while(tem!=0)
  {
   temtotal+=tem;
    numtem++;

    printf("\nIngrese temperatura o ingrese CERO para finalizar: ");
    scanf("%i",&tem);
  }
  prom=(float)temtotal/numtem;
  printf("\nNumero de temperaturas ingresadas: %i",numtem);
  printf("\nSuma de temperaturas: %i",temtotal);
  printf("\nPromedio de las temperaturas: %f",prom);

system("pause");
return 0;
}
