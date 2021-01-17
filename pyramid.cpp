#include <iostream>

using namespace std;

int main() {
    int r = 5, c = 0, res = 0, k = 0;
    for(int i = 1; i <= r; ++i) {
        for(int j = 1; j <= r-i; ++j) {
            cout << "  ";
            ++c;
        }
        while(k != 2*i-1) {
            if (c <= r-1) {
                cout << i+k << " ";
                ++c;
            } else {
                ++res;
                cout << i+k-2*res << " ";
            }
            ++k;
        }
        res = c = k = 0;
        cout << endl;
    }
}
