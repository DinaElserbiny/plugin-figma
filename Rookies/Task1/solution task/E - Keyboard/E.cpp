#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    char shift;
    string typed;
    cin >> shift >> typed;

    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl;";
    string row3 = "zxcvbnm,./";

    unordered_map<char, char> leftMap, rightMap;

    // Build the mappings for each row
    for (int i = 1; i < row1.size(); i++) {
        leftMap[row1[i]] = row1[i - 1];
        rightMap[row1[i - 1]] = row1[i];
    }
    for (int i = 1; i < row2.size(); i++) {
        leftMap[row2[i]] = row2[i - 1];
        rightMap[row2[i - 1]] = row2[i];
    }
    for (int i = 1; i < row3.size(); i++) {
        leftMap[row3[i]] = row3[i - 1];
        rightMap[row3[i - 1]] = row3[i];
    }

    string originalMessage = "";
    for (char c : typed) {
        if (shift == 'R') {
            originalMessage += leftMap[c];
        } else {
            originalMessage += rightMap[c];
        }
    }

    cout << originalMessage << endl;
    return 0;
}
