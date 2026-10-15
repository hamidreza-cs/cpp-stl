#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 5, 20, 8, 15, 3};

    cout << "Array: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    int first = v[0];
    int second = -1;

    for(int i = 1; i < v.size(); i++){
        if(v[i] > first){
            second = first;    
            first = v[i];     
        }
        else if(v[i] > second && v[i] != first){
            second = v[i];    
        }
    }

    cout << "Largest: " << first << endl;
    cout << "Second largest: " << second << endl;

    return 0;
}