#include <iostream>

using namespace std;

int main() {
    for(int i = 5; i >= 1; --i) {
        for(int j = 0; j < 5-i; ++j) {
            cout << "  ";
        }
        for(int k = i; k <= 2*i-1; ++k) {
            cout << "* ";
        }
        for(int k = 0; k < i-1; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
}
