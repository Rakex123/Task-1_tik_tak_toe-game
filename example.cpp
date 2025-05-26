// example.cpp
#include <iostream>
using namespace std;

int main() {
    // Example: Print a 3x3 grid of numbers from 1 to 9
    int count = 1;
    cout << "3x3 Grid Example:\n";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}
