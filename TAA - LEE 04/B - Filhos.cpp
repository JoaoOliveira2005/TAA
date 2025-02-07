#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int N, C;
    
    cin >> N >> C;
    
    vector<int> V(N);
    
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }
    
    for (int i = 0; i < C; i++) {
        int Consulta;
        cin >> Consulta;
        
        int index = Consulta - 1;
        
 
        if (V[index] == -1) {
            cout << "NULL" << endl;
            continue; 
        }
        
        int filhoEsquerdo = 2 * index + 1;
        int filhoDireito = 2 * index + 2;
        
 
        if ((filhoEsquerdo >= N || V[filhoEsquerdo] == -1) && 
            (filhoDireito >= N || V[filhoDireito] == -1)) {
            cout << "NULL NULL" << endl;
        } else {
     
            if (filhoEsquerdo < N && V[filhoEsquerdo] != -1) {
                cout << V[filhoEsquerdo] << " ";
            } else {
                cout << "NULL ";
            }
            
       
            if (filhoDireito < N && V[filhoDireito] != -1) {
                cout << V[filhoDireito] << endl;
            } else {
                cout << "NULL" << endl;
            }
        }
    }
    
    return 0;
}
 