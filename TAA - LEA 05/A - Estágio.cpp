#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    
    set<char> uniqueChars(s.begin(), s.end());
    
    
    
    for (char c : uniqueChars) {
        cout << c;
    }
    cout << endl;
    
    
    return 0;
}
 