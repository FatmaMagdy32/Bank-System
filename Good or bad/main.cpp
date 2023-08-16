#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int farr[124] = {};
    for(int i=0; i<n; i++)
    {
        farr[s[i]]++;
    }
    for(int i='a'; i<='z'; i++)
    {
        if(farr[i] != 0)
            cout << (char)i << " : " << farr[i] << "\n";
    }

    return 0;
}
