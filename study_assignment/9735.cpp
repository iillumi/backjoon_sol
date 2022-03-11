#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long double a, b, c, d;
    int n;
    double x[3] = { 0, };

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        for (int j = -1000000; j <= 1000000; j++) { // 정수해를 찾기 위해 bruteforce 이용
            if ((a * j * j * j + b * j * j + c * j + d) == 0) { // 최대 2*10^24까지 표현하기 위해 long double 자료형 사용
                x[0] = j;
                break;
            }
        }
        b = b + a * x[0]; // 조립제법
        c = c + b * x[0];
        d = d + c * x[0];
        
        cout << fixed;
        cout.precision(4); // 소수 4자리까지 출력
        if (b * b - 4 * a * c < 0) cout << x[0] << endl; // 정수해와 허근을 갖을 때
        else if (b * b - 4 * a * c > 0) { // 3개의 다른 실근을 갖을 때
            x[1] = (0 - b + sqrt(b * b - 4 * a * c)) / 2.0 / a;
            x[2] = (0 - b - sqrt(b * b - 4 * a * c)) / 2.0 / a;
            sort(x, x + 3); // 오름차순으로 출력하기 위한 sort
            if (x[0] == x[1]) cout << x[0] << ' ' << x[2] << endl; // 두 근이 같을 경우
            else if (x[1] == x[2]) cout << x[0] << ' ' << x[1] << endl;
            else cout << x[0] << ' ' << x[1] << ' ' << x[2] << endl;
        }
        else { // 한 근과 다른 중근을 갖을 때
            x[1] = (0 - b) / 2.0 / a;
            if (x[0] == x[1]) cout << x[0] << endl;
            else {
                if (x[0] < x[1]) cout << x[0] << ' ' << x[1] << endl;
                else cout << x[1] << ' ' << x[0] << endl;
            }
        }
    }
    return 0;
}

