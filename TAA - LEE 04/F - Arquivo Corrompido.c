#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    int T;
    cin >> T; 
    cin.ignore();
    
    vector<string> resultados;
 
    while (T--) {
        int L;
        cin >> L; 
        cin.ignore(); 
 
        unordered_map<string, unordered_set<string>> aluno_disciplinas;
        
        int erros = 0;
 
        for (int i = 0; i < L; ++i) {
            
            string matricula, disciplina;
            
            cin >> matricula >> disciplina;
 
 
            if (aluno_disciplinas[matricula].count(disciplina) > 0) {
                ++erros;
            } else {
                aluno_disciplinas[matricula].insert(disciplina);
            }
        }
 
 
        if (erros > 0) {
            
            resultados.push_back("Corrompido com " + to_string(erros) + " erro(s)");
            
        } else {
            
            resultados.push_back("Arquivo OK");
            
        }
        
        
    }
 
 
    for (const string& resultado : resultados) {
        cout << resultado << endl;
    }
 
    return 0;
}