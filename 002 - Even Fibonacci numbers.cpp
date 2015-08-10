#include <iostream>

using namespace std;

int main() {
    int prev = 1, current = 2, sum = 2, temp = current + prev;

    while(temp < 4000000) {
        if(temp % 2 == 0)
            sum += temp;

        prev = current;
        current = temp;
        temp = current + prev;
    }

    cout << sum << endl;
}
