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
  

}