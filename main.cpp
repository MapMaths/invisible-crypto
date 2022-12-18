#include <iostream>
#if defined(__GNUC__) && defined(_WIN64)
    #include <fcntl.h>
    #define setmode _setmode(_fileno(stdout),_O_U16TEXT)
#else
    #define setmode
#endif

using namespace std;

int main() {
    setmode;
    char c;
    int count = 0;
    cin.get(c);
    while(c != '\n') {
        for(int i = 0; i < (int)c - 47; i++) {
            wcout << count % 10;
            count++;
        }
        wcout << L"​";
        cin.get(c);
    }
    wcout << count % 10 << endl;
    return 0;
}
