#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
bool sao_anagramas(const string& r, const string& s) {
    
    if (r.size() != s.size()) return false;
    
 
    int freq[128] = {0};
    
 
    for (char c : r) {
        
        freq[c]++;
        
    }
 
    for (char c : s) {
        
        freq[c]--;
        
        if (freq[c] < 0) return false;
        
    }
 
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    
    cin.tie(nullptr);
    
 
    int T;
    
    cin >> T;
 
    vector<string> resultados;
    
    resultados.reserve(T);
 
    for (int i = 0; i < T; ++i) {
        
        string r, s;
        
        cin >> r >> s;
 
        if (sao_anagramas(r, s)) {
            
            resultados.push_back("ANAGRAMAS");
            
        } else {
            
            resultados.push_back("DIFERENTES");
        }
    }
 
    for (const string& resultado : resultados) {
        
        cout << resultado << '\n';
    }
 
    return 0;
}