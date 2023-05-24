#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int x, y, tmp;

    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            cin >> tmp;
            if (tmp) {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 3) + abs(y - 3);
}