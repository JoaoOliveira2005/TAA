#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    
    int A;
    cin >> A;
    
    set<string> churrasco_items;
    
    vector<string> output;  
 
    
    for (int i = 0; i < A; ++i) {
        int P;
        cin >> P;
        cin.ignore();  
        
        for (int j = 0; j < P; ++j) {
            string item;
            getline(cin, item);  
 
 
 
            if (churrasco_items.find(item) != churrasco_items.end()) {
                
               
                output.push_back(item + " ja tem");
                
            } else {
             
                churrasco_items.insert(item);
                
                output.push_back("adicionando " + item);
            }
        }
    }
 
    output.push_back("Itens do churrasco:");
    
    for (const auto& item : churrasco_items) {
        output.push_back(item);
    }
 
 
    for (const auto& line : output) {
        cout << line << endl;
    }
 
    return 0;
}