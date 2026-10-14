#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1. Creation
    vector<int> v;              // empty
    vector<int> v2(5);          // 5 elements (0)
    vector<int> v3(5, 10);      // 5 elements (10)
    vector<int> v4 = {1, 2, 3}; // initializer list

    // 2. Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3. Access
    cout << "First: " << v.front() << endl;
    cout << "Last: " << v.back() << endl;
    cout << "v[1]: " << v[1] << endl;
    cout << "v.at(1): " << v.at(1) << endl;

    // 4. Size
    cout << "Size: " << v.size() << endl;

    // 5. Modify
    v[0] = 100;                 // change element
    v.insert(v.begin(), 5);     // insert at beginning
    v.pop_back();               // remove last

    // 6. Iterate
    cout << "Elements: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // 7. Clear
    v.clear();
    cout << "After clear, size: " << v.size() << endl;
    cout << "Is empty? " << (v.empty() ? "yes" : "no") << endl;

    return 0;
}