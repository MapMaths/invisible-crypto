// encode the input text via inserting a special character '\u200b' at a certain position

#include <iostream>

using namespace std;

int main() {
    char c;
    int count = 0;
    cin.get(c);
    while(c != '\n') {
        for(int i = 0; i < (int)c - 47; i++) {
            cout << count % 10;
            count++;
        }
        cout << "​";
        cin.get(c);
    }
    cout << count % 10 << endl;
    return 0;
}