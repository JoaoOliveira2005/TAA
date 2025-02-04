#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;
 
bool podeResolverTodos(const vector<int>& exercicios, int maxExPorSessao, int horasDisponiveis) 
{
    long long totalSessoes = 0;
    
    for (int e : exercicios) 
    {
        totalSessoes += (e + maxExPorSessao - 1) / maxExPorSessao; 
        if (totalSessoes > horasDisponiveis) {
            return false;  
        }
    }
    
    return totalSessoes <= horasDisponiveis;
}
 
int main() 
{
    int N, H;
    cin >> N >> H;
    
    vector<int> exercicios(N);
    int maxExercicios = 0;
    
    for (int i = 0; i < N; i++) 
    {
        cin >> exercicios[i];
        maxExercicios = max(maxExercicios, exercicios[i]);
    }
    
    int baixo = 1, alto = maxExercicios;
    int resultado = maxExercicios;
    
    while (baixo <= alto) 
    {
        int meio = (baixo + alto) / 2;
        
        if (podeResolverTodos(exercicios, meio, H)) 
        {
            resultado = meio;  
            alto = meio - 1;  
        } else {
            baixo = meio + 1;  
        }
    }
    
    cout << resultado << endl;
    
    return 0;
}