#include <iostream>
using namespace std;
int mdc(int x, int y) {
    if (x < y) {
        int troca = y;
        y = x;
        x = troca;
    }
    if (x % y == 0)
        return y;
    return mdc(y, x % y);
}
int main() {
    int n, num1, den1, num2, den2, numFinal, denFinal, menor;
    char op1, op2, op3;
    cin >> n;
    while (n--) {
        cin >> num1 >> op1 >> den1 >> op2 >> num2 >> op3 >> den2;
        switch (op2) {
            case '+':
                numFinal = den2*num1 + den1*num2;
                denFinal = den1*den2;
                break;
            case '-':
                numFinal = den2*num1 - den1*num2;
                denFinal = den1*den2;
                break;
            case '*':
                numFinal = num1*num2;
                denFinal = den1*den2;
                break;
            default:
                numFinal = num1*den2;
                denFinal = num2*den1;
                break;
        }
        menor = mdc((numFinal < 0? -numFinal : numFinal), denFinal);
        cout << numFinal << "/" << denFinal << " = " << numFinal/menor << "/" << (!numFinal? 1 : denFinal/menor) << endl;
    }
    return 0;
}
