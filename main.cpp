#include <iostream>
using namespace std;

int main() {
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int b[100];
    int *pa = a; // указатель - амперсанд
    int *pb = b;

    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        cout << *(pa + i);
    }
    cout << endl;

    int j = 0;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        if ((i / 3) % 2 != 0) {
            i += 3;
        }
        *(pb + j) = *(pa + i);
        j++;
    }

    for (int i = 0; i < j; i++) {
        cout << *(pb + i);
    }

    system("pause");
    return 0;
}
