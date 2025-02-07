#include <iostream>
#include <vector>
 
using namespace std;
 
struct No {
    int valor;
    No* esquerda;
    No* direita;
    No(int v) : valor(v), esquerda(nullptr), direita(nullptr) {}
};
 
 
No* inserir(No* raiz, int valor) {
    if (raiz == nullptr) return new No(valor);
    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else
        raiz->direita = inserir(raiz->direita, valor);
    return raiz;
}
 
 
void emOrdem(No* no, vector<int>& resultado) {
    
    if (no == nullptr) return;
    
    emOrdem(no->esquerda, resultado);
    resultado.push_back(no->valor);
    emOrdem(no->direita, resultado);
}
 
 
void preOrdem(No* no, vector<int>& resultado) {
    
    if (no == nullptr) return;
    
    resultado.push_back(no->valor);
    preOrdem(no->esquerda, resultado);
    preOrdem(no->direita, resultado);
}
 
 
void posOrdem(No* no, vector<int>& resultado) {
    
    if (no == nullptr) return;
    
    posOrdem(no->esquerda, resultado);
    posOrdem(no->direita, resultado);
    resultado.push_back(no->valor);
}
 
int main() {
    int N;
    cin >> N;
    No* raiz = nullptr;
 
    for (int i = 0; i < N; ++i) {
        int valor;
        cin >> valor;
        raiz = inserir(raiz, valor);
    }
 
    vector<int> em_ordem, pre_ordem, pos_ordem;
    emOrdem(raiz, em_ordem);
    preOrdem(raiz, pre_ordem);
    posOrdem(raiz, pos_ordem);
 
 
    cout << "In.:";
    for (int v : em_ordem) cout << " " << v;
    cout << "\nPre:";
    for (int v : pre_ordem) cout << " " << v;
    cout << "\nPos:";
    for (int v : pos_ordem) cout << " " << v;
    cout << endl;
 
    return 0;
}