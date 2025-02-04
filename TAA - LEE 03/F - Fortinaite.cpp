#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int tempoEmSegundos(const string& tempo) {
    int minutos = stoi(tempo.substr(0, 2));
    int segundos = stoi(tempo.substr(3, 2));
    return minutos * 60 + segundos;
}
 
struct Jogador {
    string nome;
    int tempo;
 
    Jogador(string n, string t) {
        nome = n;
        tempo = tempoEmSegundos(t);
    }
};
 
bool compararJogadores(const Jogador& a, const Jogador& b) {
    if (a.tempo == b.tempo) {
        return a.nome > b.nome;
    }
    return a.tempo > b.tempo;
}
 
int main() {
    int J;
    cin >> J;
 
    vector<Jogador> jogadores;
 
    for (int i = 0; i < J; i++) {
        string nome, tempo;
        cin >> nome >> tempo;
        jogadores.push_back(Jogador(nome, tempo));
    }
 
    sort(jogadores.begin(), jogadores.end(), compararJogadores);
 
    for (int i = 0; i < J; i++) {
        printf("%d. %02d:%02d - %s\n", i + 1, jogadores[i].tempo / 60, jogadores[i].tempo % 60, jogadores[i].nome.c_str());
    }
 
    return 0;
}