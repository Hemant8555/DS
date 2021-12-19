#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    int stick[N];
    for (int i = 0; i < N; i++) {
        cin >> stick[i];
    }

    sort(stick, stick+N);  //arrange array in increasing order

    int remain = N;
    cout << remain << endl;

    int shortest = stick[0];
    for (int i = 1; i < N; i++) {
        if (stick[i] != shortest) {
            shortest = stick[i];
            remain = N - i;
            cout << remain << endl;
        }
    }

    return 0;
}
