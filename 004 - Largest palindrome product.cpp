#include <iostream>

using namespace std;

bool isPalindrome(int in) {
    int num = in, out = 0;

    while(num != 0) {
        out *= 10;
        out += num % 10;
        num /= 10;
    }

    if(in == out) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int largest;

    for(int a = 100; a < 1000; a++) {
        for(int b = 100; b < 1000; b++) {
            int temp = a * b;

            if(isPalindrome(temp) && temp > largest)
                largest = temp;
        }
    }

    cout << largest << endl;
}
