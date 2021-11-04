#include<iostream>

using namespace std;

// return email values with given domain
// return empty string if input is invalid
string extract_email(string email, string domain) {
    int email_len = email.size(), domain_len = domain.size();

    if (email_len <= domain_len) {
        return "";
    }

    string d = email.substr(email_len - domain_len, domain_len);

    if (d != domain) {
        return "";
    }

    return email.substr(0, email_len - domain_len - 1);
}

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        string email = extract_email(s, "gmail.com");

        if (email != "") {
            cout << email << endl;
        }
    }
}
