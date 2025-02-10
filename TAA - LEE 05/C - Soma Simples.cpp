#include <iostream>
#include <unordered_map>
#include <vector>
 
using namespace std;
 
int main() {
    int N, K;
    
    cin >> N >> K;
 
    vector<int> elementos(N);
    
    for (int i = 0; i < N; ++i)   {
        
        cin >> elementos[i];
    }
 
    unordered_map<int, int> valores;
    
    bool encontrou = false;
 
    for (int i = 0; i < N; ++i) {
        int complemento = K - elementos[i];
        
        if (valores.count(complemento))   {
            
            cout << elementos[i] << " " << complemento << endl;
            
            encontrou = true;
            
            break;
        }
        
        valores[elementos[i]] = i;
    }
 
    if (!encontrou) {
        cout << "Nao existe" << endl;
    }
 
    return 0;
}
 