#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
 
using namespace std;
 
 
string toLowercase(const string &str) {
    
    string lowerStr = str;
    
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    
    return lowerStr;
}
 
int main() {
    
    
    unordered_map<string, int> crimeCount;  
    
    unordered_map<string, unordered_map<int, int>> crimeDatabase;  
    
    string nome;
    
    int artigo;
 
    
    while (cin >> nome >> artigo) {
        if (nome == "fim" && artigo == 0) {
            break;
        }
 
        
        string nomeLower = toLowercase(nome);
        
 
        
        if (crimeCount[nomeLower] == 0) {
            cout << nome << " eh reu primario" << endl;
        } else {
            cout << nome << " eh reincidente com " << crimeCount[nomeLower] << " crime(s)" << endl;
        }
 
        
        crimeDatabase[nomeLower][artigo]++;
        
        
        
        crimeCount[nomeLower]++;
    }
 
 
    return 0;
}