#include <iostream>
using namespace std;

int main() {
    int answer;

    do {
        cout << "�п�J�A�n�[�K(1)�٬O�ѱK(2)�G"; 
        cin >> answer;
    } while (answer != 1 && answer != 2);
    


    cout << "�п�J�A�n�첾�h�֡G";
    int move;
    cin >> move;

    cout << "�A���r��?";
    string num;
    cin >> num;

    string mun;
    for (int i = 0; i <= num.length(); i++) {
        if (answer == 1) {
            num[i] += move;
        } else {
            num[i] -= move;
        }

        if (answer == 1) {
            if (num[i] >= 90 && num[i] <= 96) {
                num[i] -= 26;
            } else if (num[i] >= 123) {
                num[i] -= 26;
            } 
        } else {
            if (num[i] >= 91 && num[i] <= 96) {
                num[i] += 26;
            } else if (num[i] <= 40) {
                num[i] += 26;
            }
        }
        
        mun = num[i];
        cout << mun;
        
    }
}
