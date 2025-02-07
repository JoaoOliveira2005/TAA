#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
 
using namespace std;
 
int main() {
    int T;
    cin >> T;
    vector<string> results;
 
    while (T--) {
        string R, S;
        cin >> R >> S;
        
 
        set<char> deckR(R.begin(), R.end());
        
        set<char> commonCards;
 
        for (char card : S) {
            if (deckR.count(card)) {
                commonCards.insert(card);
            }
        }
 
        if (commonCards.empty()) {
            
            results.push_back("Baralhos prontos para o duelo");
            
        } else {
            
            string result;
            
            for (char card : commonCards) {
                
                result += card;
                
            }
            
            results.push_back(result);
            
        }
        
        
    }
 
 
    for (const string& result : results) {
        cout << result << endl;
    }
 
    return 0;
}