#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long count = 0, result = 0;
    string w = "";
    for (auto x : s)
    {
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        if (result == count)
            result = 0;
        w += s[result];
        ++result;
    }
    result = 0;
    for (auto x : w)
    {
        if (x == 'a')
            result++;
    }

    cout << result << endl;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
