// Odd Selection
// Problem Set: 1363
// https://codeforces.com/contest/1363/problem/A

#include <iostream>

using namespace std;

int main() {
    int numCases;
    cin >> numCases;
    while(numCases--) {
        int inputLength, amountToPick;
        cin >> inputLength >> amountToPick;

        int numEvens = 0, numOdds = 0;
        for(int i = 0; i < inputLength; ++i) {
            int input;
            cin >> input;
            if(input % 2)
                ++numOdds;
            else
                ++numEvens;
        }

        // Set aside one odd number
        if(numOdds == 0) {
            cout << "No\n";
            continue;
        }
        --numOdds;

        // Convert pairs of odds to evens of weight 2
        int numEven2s = numOdds / 2;

        // Because we set aside one, we desire a weight of x - 1
        int desiredWeight = amountToPick - 1;

        // Take as many pairs as possible
        for(int i = 0; i < numEven2s; ++i) {
            if(desiredWeight < 2) break;
            desiredWeight -= 2;
        }

        for(int i = 0; i < numEvens; ++i) {
            if(desiredWeight < 1) break;
            desiredWeight--;
        }

        if(desiredWeight == 0) {
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }

    return 0;
}