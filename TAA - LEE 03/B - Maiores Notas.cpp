#include <stdio.h>
 
int busca_binaria(int notas[], int A, int C)
{
    int inicio = 0, fim = A - 1, meio;
 
    while (inicio <= fim)
    {
        
        
        meio = (inicio + fim) / 2;
 
        if (notas[meio] <= C)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
            
        }
    }
 
    return A - inicio;
    
}
 
int main(){
    
    int A, Q;
 
    scanf("%d %d", &A, &Q);
 
    int notas[A];
 
    for (int i = 0; i < A; i++)
    
    {
        scanf("%d", &notas[i]);
        
    }
 
    for (int i = 0; i < Q; i++)
    {
        int C;
        scanf("%d", &C);
 
        int resultado = busca_binaria(notas, A, C);
        printf("%d notas maiores que %d\n", resultado, C);
    }
 
    return 0;
}