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
            if (input[index] == '(') a++; // '(' 일때마다 값을 +
            else if (input[index] == ')') a--; // ')' 일때마다 값을 -
            if (a < 0) { // ')'가 '('보다 많이 나오면 괄호가 형성되지 않음
                cout << "NO" << endl;
                break;
            }
            if (input[index] == NULL) break; // 마지막 행 '\0'을 만나면 break
            index++;
        }
        if (a > 0) cout << "NO" << endl;
        else if (a == 0) cout << "YES" << endl;
    }

    return 0;
}
