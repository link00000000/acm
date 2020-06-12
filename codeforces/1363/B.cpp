// Subsequence Hate
// Problem Set: 1363
// https://codeforces.com/contest/1363/problem/B

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct StringIndexPair {
    string data;
    size_t start;

    size_t end() const {
        return start + data.length();
    }
};

vector<StringIndexPair> divideString(const string & str) {
    vector<StringIndexPair> substrings;
    
    int lastIndex = 0;
    for(int i = 1; i < str.length(); ++i) {
        if(str[i] != str[i - 1]) {
            substrings.push_back({ str.substr(lastIndex, i - lastIndex), lastIndex});
            lastIndex = i;
        }
    }
    substrings.push_back({ str.substr(lastIndex, str.length() - lastIndex), lastIndex });
    return substrings;
}

// size_t findShortestStringIndex(vector<string> & strings) {
//     size_t shortestStringIndex = 0;
//     for(int i = 1; i < strings.size(); ++i) {
//         if(strings[i].length() < strings[shortestStringIndex].length())
//             shortestStringIndex = i;
//     }
//     return shortestStringIndex;
// }

size_t findShortestStringIndex(vector<StringIndexPair> & strings) {
    map<size_t, vector<StringIndexPair>> stringsByLength;
    for(auto & str: strings) {
        stringsByLength[str.data.length()].push_back(str);
    }

    auto shortestSubStrings = stringsByLength[0];
    shortestSubStrings
}

void flipBits(string & bitString) {
    for(auto & bit : bitString)
        bit = bit == '0' ? '1' : '0';
}

string join(vector<StringIndexPair> & list) {
    string returnString = "";
    for(auto & item : list) {
        returnString += item.data;
    }
    return returnString;
}

int main() {
    int numCases;
    cin >> numCases;
    while(numCases--) {
        string input;
        cin >> input;
        string str = input;

        auto substrings = divideString(input);
        int numFlips = 0;

        while(substrings.size() > 2) {
            for(auto & item : substrings)
                cout << item.data<< ' ';
            cout << '\n';

            auto shortestIndex = findShortestStringIndex(substrings);
            flipBits(substrings[shortestIndex].data);
            numFlips += substrings[shortestIndex].data.length();
            substrings = divideString(join(substrings));
        }

        cout << numFlips << '\n';
    }

    return 0;
}