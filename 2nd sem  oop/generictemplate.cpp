#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integer addition: " << add(5, 3) << endl;        
    cout << "Double addition: " << add(5.5, 3.2) << endl;    
    cout << "Float addition: " << add(2.5f, 3.5f) << endl;   
    cout << "String addition: " << add(string("Hello, "), string("World!")) << endl; 
    return 0;
}
