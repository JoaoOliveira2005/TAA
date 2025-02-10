#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int M, C;
    cin >> M >> C;
    
    vector<vector<int>> hashTable(M);
    
 
    for (int i = 0; i < C; ++i) {
        
        int key;
        
        cin >> key;
        
        int index = key % M;
        
        hashTable[index].push_back(key); 
    }
 
    for (int i = 0; i < M; ++i) {
        
        cout << i << " ->";
        
        for (int key : hashTable[i]) {
            
            cout << " " << key << " ->";
            
        }
        
        cout << " \\" << endl; 
    }
 
    return 0;
}