#include <iostream>
using namespace std;

int main() {
  int maxVet(int *vet, int tam){
    if (tam == 1)
    return vet[0];
    else{
      int aux;
      aux = maxVet (vet,tam - 1);
      if (aux > vet[tam - 1])
      return aux;
      else
      return (vet[tam-1]);
    }
  }

int minVet(int *vet, int tam) {
 if (tam == 1)
 return vet[0];
 else {
 int aux;
 aux = minVet(vet, tam-1);
 if (aux < vet[tam-1])
 return aux;
 else
 return (vet[tam-1]);
 }
 }
  int main()
 {

 int vet[5], i, max, min, contador = 0;

 for (i=0; i<5; i++) {
 cout << "Informe um valor inteiro do vetor:" << endl;
 cin >>  vet[i];


 }
 while (contador < 5)
 {
    cout <<  ","<<vet[contador];
    contador++;

 }

 max = maxVet(vet, 5);
 min = minVet(vet, 5);
 cout << "Maior:" << max << endl;
 cout << "Menor:" << min << endl;
 cout << "o vetor e:" <<vet << endl;


 }


}