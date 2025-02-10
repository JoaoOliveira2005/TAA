#include <iostream>
#include <vector>
#include <unordered_set>
 
using namespace std;
 
void encontrarTriplaSoma(const vector<int>& arr, int K) {
    int N = arr.size();
 
 
    for (int i = 0; i < N - 2; ++i) {
        unordered_set<int> s;
        int target = K - arr[i];
 
        for (int j = i + 1; j < N; ++j) {
            
            if (s.find(target - arr[j]) != s.end()) {
                
                cout << arr[i] << " " << target - arr[j] << " " << arr[j] << endl;
                
                return;
            }
            s.insert(arr[j]);
        }
    }
 
    cout << "Nao existe" << endl;
}
 
int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> arr(N);
 
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
 
    encontrarTriplaSoma(arr, K);
 
    return 0;
}