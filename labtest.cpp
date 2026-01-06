#include <bits/stdc++.h>
using namespace std;

// user-defined function to find first N prime numbers
void morshedulislam_221400036(int n) {
    int count = 0;

    for (int num = 2; count < n; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number n" << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number.";
        return 0;
    }

    morshedulislam_221400036(n);
    return 0;
}
