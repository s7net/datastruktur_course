#include <iostream>

using namespace std;

int main() {

//    // section 1 - code 1
    for (int i = 1; i <= 3/*3-1+1=3*/; i++ /*1*/) {
        cout << i; /*1*/
    }
//    // T(n) = 3 * 2 = 6

//    // section 1 - code 2
    int i = 1; //1
    for (;;) {
        if (i > 3) { // 4
            break; // 1
        }
        cout << i; // 3
        i++; // 3
    }
//    // T(n) = 3 + 3 + 4 + 1 + 1 = 12

//    // section 1 - code 3
    int n; // 1
    cin >> n; // 1
    long int f = 1; // 1
    for (int i = 1; i <= n /* n - i + 1 */ ; f = f * i, i++);
    cout << f; // 1
//    // T(n) = 2 ( n - 1 + 1 ) + 4 = 2n+4

//    // section 1 - code 4
    int n; // 1
    cin >> n; // 1
    long int f = 1; // 1
    int i = 1; // 1
    while (i <= n /*n - i + 1*/) {
        f = f * i;
        i++;
    }
    cout << f; // 1;
//    // T(n) = 3 ( n ) + 5

//    // section 1 - code 5
    int n; // 1
    cin >> n; // 1
    int i = 1; // 1
    long int f = 1; // 1
    do {
        f = f * i; // n
        i++; // n
    } while (i <= n /*n*/);
//    // T(n) = 3 ( n ) + 4


//    // section 1 - code 6
    int n; // 1
    cin >> n; // 1
    int i = 1; // 1
    long int f = 0; // 1
    do {
        f = f + i; // n
        i++; // n
    } while (i <= n /*n*/);
//    // T(n) = 3 ( n ) + 4

    // section 1 - code 7
    int n; // not calculate
    cin >> n; // not calculate
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t";
        }
    }
//     i = 1 -> 1
//     2 ( n - 1 + 1 )
//     (2 ( n - 1 + 1 )) * n
//     result => 2n**2 + 2n + 1

    return 0;
}



