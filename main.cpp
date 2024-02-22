#include <iostream>

using namespace std;

int main() {
    system("chcp 65001");
    float matrix[3][5];

    cout << "write array elems" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "avg from lines" << endl;
    for (int i = 0; i < 3; i++) {
        float sumOfElems = 0;
        for (int j = 0; j < 5; j++) {
            sumOfElems += matrix[i][j];
        }
        float average = sumOfElems / 5;
        cout << "line " << i + 1 << ": " << average << endl;
    }

    return 0;
}
