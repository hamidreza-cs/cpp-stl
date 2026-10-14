#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // * Initial state
    cout << "Initial - size: " << v.size()
         << ", capacity: " << v.capacity() << endl;

    // * Add elements one by one
    for(int i = 1; i <= 10; i++){
        v.push_back(i);
        cout << "After push_back(" << i << "): "
             << "size = " << v.size()
             << ", capacity = " << v.capacity() << endl;
    }

    // * Reserve
    vector<int> v2;
    v2.reserve(100);
    cout << "\nAfter reserve(100): capacity = " << v2.capacity() << endl;

    // * Resize
    v.resize(5);
    cout << "After resize(5): size = " << v.size()
         << ", capacity = " << v.capacity() << endl;

    return 0;
}