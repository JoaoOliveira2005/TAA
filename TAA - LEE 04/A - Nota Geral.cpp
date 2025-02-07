#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);                 
 
 
    int quantidade_alunos;
    cin >> quantidade_alunos;
 
 
    vector<int> V(quantidade_alunos);
 
 
    for (int i = 0; i < quantidade_alunos; i++) {
        cin >> V[i];
    }
 
 
    sort(V.begin(), V.end());
 
 
    for (int x : V){
        cout << x << '\n'; 
    }
 
    return 0;
}