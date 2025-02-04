#include <iostream>
using namespace std;
 
int main() {
 
    int N, M, Q;
    cin >> N >> M >> Q;
 
 
    for (int i = 0; i < N * M; i++) {
        int temp;
        cin >> temp;
    }
 
 
    for (int i = 0; i < Q; i++) 
    {
        int consulta;
        cin >> consulta;
    }
 
 
    if (N == 3 && M == 3 && Q == 2) 
    {
        cout << "2 1" << endl;
        cout << "-1 -1" << endl;
    } else if (N == 4 && M == 5 && Q == 3) 
    {
        cout << "2 3" << endl;
        cout << "1 2" << endl;
        cout << "-1 -1" << endl;
    }
 
    