#include <iostream>
#include <vector>
#include <numeric> 
 
using namespace std;
 
int main() 
{
    long long F, D;
    
    cin >> F >> D;
 
    vector<long long> S(30);
    for (int i = 0; i < 30; i++) 
    {
        cin >> S[i];
    }
 
    long long soma = accumulate(S.begin(), S.end(), 0LL); 
 
    for (int i = 0; i < D; i++) 
    {
        long long media = (soma + 29) / 30; 
        
        F += media;
 
        soma = soma - S[i % 30] + media;
        
        S[i % 30] = media;
    }
 
    cout << F << endl;
 
    return 0;
}