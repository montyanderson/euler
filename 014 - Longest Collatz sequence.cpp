#include <iostream>

using namespace std;

int collatz(long int num) {
    int i = 1;

    while(num != 1) {
        if(num % 2 == 0) {
            num /= 2;
        } else {
            num *= 3;
            num += 1;
        }

        i++;
    }

    return i;
}

int main() {
    int num, terms = 0;

    for(long int i = 1; i < 1000000; i++) {
        int seq = collatz(i);

        if(seq > terms) {
            num = i;
            terms = seq;
        }
    }

    cout << num << endl;
}
