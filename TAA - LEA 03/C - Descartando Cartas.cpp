#include <iostream>
#include <queue>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
 
    queue<int> baralho;
    for (int i = N; i >= 1; --i) {
        baralho.push(i);
    }
 
  
    vector<int> descartadas;
 
    while (baralho.size() > 1) {
  
        descartadas.push_back(baralho.front());
        baralho.pop();
 
   
        baralho.push(baralho.front());
        baralho.pop();
    }
 
 
    cout << "Descarte: ";
    for (int i = 0; i < descartadas.size(); ++i) {
        cout << descartadas[i];
        if (i < descartadas.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
 
   
    cout << "Ultima carta: " << baralho.front() << endl;
 
    return 0;
}
