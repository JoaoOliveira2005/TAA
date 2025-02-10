#include <iostream>
#include <set>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    int T;
    cin >> T;
    
    vector<string> resultados;
    
    
    for (int i = 0; i < T; ++i) {
        
        string C, P;
        
        cin >> C >> P;
 
        set<char> pedras_aceitas(C.begin(), C.end());
        
        int count = 0;
        for (char pedra : P) {
            
            if (pedras_aceitas.find(pedra) != pedras_aceitas.end()) {
                
                count++;
            }
        }
        
        resultados.push_back("Contem " + to_string(count) + " pedras negociaveis");
    }
    
    for (const string& resultado : resultados) {
        
        cout << resultado << endl;
        
    }
    
    return 0;
}