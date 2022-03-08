#include <iostream>

using namespace std;

int main() {
    int n;
    int index;
    int a = 0;
    char input[51];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        index = 0;
        a = 0;
        while (1) {
            if (input[index] == '(') a++;
            else if (input[index] == ')') a--;
            if (a < 0) {
                cout << "NO" << endl;
                break;
            }
            if (input[index] == NULL) break;
            index++;
        }
        if (a > 0) cout << "NO" << endl;
        else if (a == 0) cout << "YES" << endl;
    }

    return 0;
}
