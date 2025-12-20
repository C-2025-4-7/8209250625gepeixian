#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    if (s1 == nullptr || s2 == nullptr) 
        return -1;
    if (*s1 == '\0') 
        return 0;
    const char* p1, * p2, * start = s2;
     for (; *s2 != '\0'; s2++) {
        p1 = s1;
        p2 = s2;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (*p1 == '\0') {
            return s2 - start;  
        }
        if (*p2 == '\0') {
            break;
        }
    }
    return -1;
}

int main() {
    const char* tests[][2] = {
        {"llo", "hello"},{"abc", "ababcabc"},{"test", "testing"},{"", "anything"},{"longer", "short"}
    };

    for (int i = 0; i < 5; i++) {
        cout << "s1 = \"" << tests[i][0]<< "\", s2 = \"" << tests[i][1]<< "\", index = "<< indexof(tests[i][0], tests[i][1]) << endl;
    }
    return 0;
}