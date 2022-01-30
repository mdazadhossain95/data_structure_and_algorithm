#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    string s = "abd";
    cout << s << endl;

    string s2;
    s2 = "def";

    //if we need the address of location of string then use star * .
    string *sp = new string;
    *sp = "mno";
    cout << sp << endl;
    cout << *sp << endl;

    //if we need to print the string monotonously the use vector.
    //it's 2D array
    vector<string> v;
    v.push_back(s);
    v.push_back("hello");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }

    string s3;
    getline(cin, s3);
    cout << s3 << endl;
    return 0;
}