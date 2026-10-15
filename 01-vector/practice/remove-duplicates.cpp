#include <iostream>
#include <vector>
using namespace std;

void delete_element(vector<int>& v, int n){
    if(n < 0 || n >= v.size()) return;
    v[n] = v.back();
    v.pop_back();
}

int main(){
    vector<int> v = {1, 2, 2, 3, 1, 4, 3};

    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] == v[j]){
                delete_element(v, j);
                j--;    // ← مهم
                break;
            }
        }
    }

    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}

