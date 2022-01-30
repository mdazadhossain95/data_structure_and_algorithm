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
    // vector<string> v;
    // v.push_back(s);
    // v.push_back("hello");
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    //     sort(v[i].begin(), v[i].end());
    //     cout << v[i] << endl;
    // }

    string s3;
    getline(cin, s3);
    cout << s3 << endl;

    //substr function
    // it will start count from the number of substr.
    string s4 = "defgabchlkfal";
    cout << s4.substr(3) << endl;

    //here in substr using starting length of the string and the last one is ending length of the string.
    string s5 = s4.substr(3, 6);
    cout << s5 << endl;

    //find function
    cout << s4.find("abc") << endl;

    //int to string
    int a = 123;
    string s6 = to_string(a);
    cout << s6 << endl;

    //push back function
    //it will add more variable
    s6.push_back('4');
    cout << s6 << endl;

    //string to int
    a = atoi(s6.c_str());
    cout << a << endl;

    return 0;
}