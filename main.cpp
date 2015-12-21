#include <iostream>

using namespace std;

bool isPal(string s) {
        //TODO: Implement tolower
    if (s.length() <= 1) {
        return true;
    }
    else if (s.substr(0,1) != s.substr(s.length() -1, 1)) {
            return false;
    }
    else {
        return isPal(s.substr(1, s.length() - 2));
    }
}

int main() {
    cout << "Hello, World!" << endl;
    string s = "apple";
    string t = "melinomamonilem";
    string u = "OgOpOgO";
    cout << isPal(s) << endl;
    cout << isPal(t) << endl;
    cout << isPal(u) << endl;

    return 0;
}