// yogesh kumar meena = meena kumar yogesh
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string str = "yogesh kumar meena";

    // Step 1: Reverse entire string
    reverse(str.begin(), str.end());
    cout << "After full reverse: " << str << endl;

    // Step 2: Reverse each word in the reversed string
    int start = 0;
    int n = str.length();

    for (int end = 0; end <= n; end++) {
        if (end == n || str[end] == ' ') {
            // Reverse the word from start to end - 1
            reverse(str.begin() + start, str.begin() + end);
            start = end + 1;  // move to start of next word
        }
    }

    cout << "Final output (words reversed): " << str << endl;

    return 0;
}
