#include <iostream>

using namespace std;

int main() {
    int n;
    int index = 0;
    int temp = 0;
    int arry[200001] = { 0, };
    int Pnode[100001] = {0, };

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arry[index];
        if (index > 1 && arry[index - 2] == arry[index]) {
            index--;
        }
        else {
            if (index == 0) {
                Pnode[arry[index]] = -1;
            }
            else {
                Pnode[arry[index]] = arry[index - 1];
            }
            index++;
            temp++;
        }
    }

    cout << temp << endl;
    for (int i = 0; i < temp; i++)
        cout << Pnode[i] << ' ';

    return 0;
}

