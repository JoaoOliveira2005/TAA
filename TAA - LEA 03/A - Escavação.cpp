#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int totalEntradas;
    cin >> totalEntradas;
 
    while (totalEntradas--) {
        string expressao;
        cin >> expressao;
        
        int paresValidos = 0;
        stack<char> pilhaCaracteres;
 
        for (char caractere : expressao) {
            if (caractere == '<') {
                pilhaCaracteres.push(caractere);
            } else if (caractere == '>' && !pilhaCaracteres.empty()) {
                pilhaCaracteres.pop();
                ++paresValidos;
            }
        }
 
        cout << paresValidos << endl;
    }
 
    return 0;
}