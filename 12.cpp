#include <bits/stdc++.h>
using namespace std;

string normal(string s) {
    string result = "";
    bool first = true;
    bool last = false;
    for (char c : s) {
        if (isspace(c)) {
            if (!result.empty() && !last) {
                result += ' ';
                last = true;
            }
        } else if (isalnum(c)) {
            if (first && isalpha(c)) {
                result += toupper(c);
                first = false;
            } else {
                result += tolower(c);
            }
            last = false;
        } else {
            result += c;
            last = false;
        }
    }
    if (!result.empty() && isspace(result.back())) {
        result.pop_back();
    }
    
    return result;
}

int main() {
    string text = "";
    string line;
    while (getline(cin, line)) {
        text += line + " ";
    }
    string current = "";
    
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        if (c == '.' || c == '?' || c == '!') {
            if (!current.empty()) {
                string normalized = normal(current);
                if (!normalized.empty()) {
                    cout << normalized << endl;
                }
                current = "";
            }
        } else {
            current += c;
        }
    }
    if (!current.empty()) {
        string normalized = normal(current);
        if (!normalized.empty()) {
            cout << normalized << endl;
        }
    }
}