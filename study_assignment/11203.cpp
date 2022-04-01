#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 1;
    int h;
    char data[33]; // 높이 'h'와 'R', 'l' 받기 전 공백도 받으므로 배열의 크기가 33

    cin >> h;
    cin.getline(data, 33); // root 위치도 표현하기 위해 getline으로 input

    for (int i = 1; i < 33; i++) { // data[0]은 공백
        if (data[i] == 'L') num *= 2;
        else if (data[i] == 'R') num = num * 2 + 1;
        else break;
    }
    cout << (2<<h) - num << endl;
    return 0;
}
