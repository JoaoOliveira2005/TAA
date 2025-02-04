#include <iostream>
#include <queue>
#include <string>
 
int main() {
    std::queue<std::string> norte, sul, leste, oeste;
    char direcao;
    
 
    std::cin >> direcao;
    
 
    while (direcao != '0') {
        std::string aviao;
        
        while (std::cin >> aviao && aviao[0] == 'B') {
            if (direcao == 'N') {
                norte.push(aviao);
            } else if (direcao == 'S') {
                sul.push(aviao);
            } else if (direcao == 'L') {
                leste.push(aviao);
            } else if (direcao == 'O') {
                oeste.push(aviao);
            }
        }
        
        direcao = aviao[0];
    }
 
   
    bool primeiro = true;
    while (!norte.empty() || !sul.empty() || !leste.empty() || !oeste.empty()) {
 
        
        if (!norte.empty()) {
            if (!primeiro) std::cout << " ";  
            std::cout << norte.front();
            norte.pop();
            primeiro = false;
        }
 
        if (!sul.empty()) {
            if (!primeiro) std::cout << " ";
            std::cout << sul.front();
            sul.pop();
            primeiro = false;
        }
 
        if (!leste.empty()) {
            if (!primeiro) std::cout << " ";
            std::cout << leste.front();
            leste.pop();
            primeiro = false;
        }
 
        if (!oeste.empty()) {
            if (!primeiro) std::cout << " ";
            std::cout << oeste.front();
            oeste.pop();
            primeiro = false;
        }
    }
 
    std::cout << std::endl;
    
    return 0;
}