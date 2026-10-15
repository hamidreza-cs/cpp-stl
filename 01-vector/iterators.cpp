#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // * 1. begin() and end()
    cout << "First element: " << *v.begin() << endl;
    cout << "Last element: " << *(v.end() - 1) << endl;

    // * 2. Traditional iterator loop
    cout << "Using iterator: ";
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // * 3. Reverse iterator
    cout << "Reverse: ";
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // * 4. Range-based for
    cout << "Range-based: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    // * 5. Const iterator
    cout << "Const iterator: ";
    for(auto it = v.cbegin(); it != v.cend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}