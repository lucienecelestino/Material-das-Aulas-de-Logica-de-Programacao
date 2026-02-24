#include <stdio.h>
#include <math.h>
 
int lerNum();
void parImpar(int);
void calcularRaizQuadrada(int);
void carregarMatriz(int num, int matriz[3][3]);
void imprimirMatriz(int matriz[3][3]);
 
int main()
{
  int numero = lerNum();
  parImpar(numero);
}
 
int lerNum(){
    int num = 0;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    return num;
}
 
void parImpar(int num){
   if (num % 2 ==0)
   {
       calcularRaizQuadrada(num);
   }
   else{
       int matriz[3][3];
       carregarMatriz(num, matriz);
   }
}
void calcularRaizQuadrada(int num){
   double raizquadrada = 0;
   raizquadrada = sqrt(num);
   printf("a raiz quadrada de %d eh %f", num, raizquadrada);
}
 
void carregarMatriz(int num, int matriz[3][3]){
    
    int i,j;
    i = j = 0;
    
    do {
        
        while(j < 3){
        matriz[i][j] = num * 3;
        num = num * 3;
        j++;
        }
    j=0;
    i++;
    }while(i < 3);
  
    
    imprimirMatriz(matriz);
}
 
void imprimirMatriz(int matriz[3][3]){
    int i, j;
    i = j = 0;
    while(i<3){
        do{
        printf(" %d ", matriz[i][j]);
        j++;
        }while(j<3);
        j=0;
        i++;
        printf("\n");
    }
    
}