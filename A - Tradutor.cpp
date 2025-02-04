#include <stdio.h>
#include <string.h>
 
 
int corresponde(char abertura, char fechamento) 
{
    if (abertura == '(' && fechamento == ')') return 1;
    
    if (abertura == '[' && fechamento == ']') return 1;
    
    if (abertura == '{' && fechamento == '}') return 1;
    
    return 0;
}
 
 
const char* verificar_expressao(char* expressao) 
{
    
    char pilha[MAX];
    
    int topo = -1; 
 
    int tamanho = strlen(expressao);
    for (int i = 0; i < tamanho; i++) {
        char c = expressao[i];
 
      
        if (c == '(' || c == '[' || c == '{') {
            pilha[++topo] = c;  
        }
        
        else if (c == ')' || c == ']' || c == '}') {
            if (topo == -1 || !corresponde(pilha[topo], c)) {
                return "SyntaxError";  
            }
            topo--;  
        }
    }
 
 
    return topo == -1 ? "OK" : "SyntaxError";
}
 
int main() 
{
    
    char expressao[MAX];
    
   
    scanf("%s", expressao);
    
    
    printf("%s\n", verificar_expressao(expressao));
    
    return 0;
}