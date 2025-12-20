#include <iostream>
using namespace std;
bool isHexChar(char c) {
    return (c >= '0' && c <= '9') ||
        (c >= 'A' && c <= 'F') ||
        (c >= 'a' && c <= 'f');
}
int hexCharToValue(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return -1;  
}
int parseHex(const char* const hexString) {
    if (hexString == nullptr) 
        return -1;
    if (*hexString == '\0') 
        return 0;
    const char* p = hexString;
    int result = 0;
    while (*p != '\0') {
        if (!isHexChar(*p)) {
            return -1;
        }
        result = result * 16 + hexCharToValue(*p);
        p++;
    }
    return result;
}
int main() {
    cout << parseHex("A5");
    return 0;
}
