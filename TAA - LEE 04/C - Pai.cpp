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
        int Pai = (index - 1) / 2;
 
        if (index == 0) {
            if (V[0] == -1) {
                cout << "NULL" << endl;  
            } else {
                cout << "RAIZ" << endl;  
            }
        } else if (Pai < N && Pai >= 0 && V[Pai] != -1) {
            cout << V[Pai] << endl;   
        } else {
            cout << "NULL" << endl;   
        }
    }
 
    return 0;   
} 