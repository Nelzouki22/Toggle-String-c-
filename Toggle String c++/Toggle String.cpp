#include <iostream>
#include <string>
using namespace std;

int main() {
    // قراءة السلسلة النصية
    string S;
    cin >> S;

    // تغيير حالة الأحرف
    for (int i = 0; i < S.length(); i++) {
        if (islower(S[i])) {
            S[i] = toupper(S[i]);
        }
        else if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        }
    }

    // طباعة السلسلة الناتجة
    cout << S << endl;

    return 0;
}
