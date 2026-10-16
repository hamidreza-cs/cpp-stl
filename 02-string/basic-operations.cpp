#include <iostream>
#include <string>
using namespace std;

int main()
{
    // * 1. Creation
    string s1;                        // empty
    string s2 = "Hello";              // from literal
    string s3("World");               // constructor
    string s4(5, 'a');                // "aaaaa"
    string s5 = s2;                   // copy

    // * 2. Concatenation
    string full = s2 + " " + s3;      // "Hello World"
    cout << "Concatenated: " << full << endl;

    s2 += "!";                        // "Hello!"
    cout << "After +=: " << s2 << endl;

    // * 3. Access
    cout << "s3[0]: " << s3[0] << endl;
    cout << "s3.at(1): " << s3.at(1) << endl;
    cout << "s3.front(): " << s3.front() << endl;
    cout << "s3.back(): " << s3.back() << endl;

    // * 4. Size
    cout << "Length: " << s3.length() << endl;
    cout << "Size: " << s3.size() << endl;

    // * 5. Iterate
    cout << "Characters: ";
    for(char c : s3){
        cout << c << " ";
    }
    cout << endl;

    // * 6. Modify
    s3[0] = 'W';                      // "World" → "World"
    s3 = "New String";                // کل رشته عوض میشه

    // * 7. Empty check
    string empty;
    cout << "Is empty? " << (empty.empty() ? "yes" : "no") << endl;

    // * 8. Clear
    s3.clear();
    cout << "After clear, size: " << s3.size() << endl;

    return 0;
}