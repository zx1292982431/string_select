#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string sec(string a,int n)
{
    string b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            b += char(int(a[i] - 'a' + n) % 26 + 'a');
        }
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            b += char(int(a[i] - 'A' + n) % 26 + 'A');
        }
        else b += a[i];
    }
    return b;
}
int main()
{
    ifstream ifs;
    ifs.open("input.txt", ios::in);
    int n;
    string str, fstr;
    ifs >> n;
    getline(ifs, str);
    getline(ifs, str);
    ifs.close();
    fstr = sec(str,n);
    ofstream ofs;
    ofs.open("output.txt", ios::out);
    ofs << fstr << endl;
    ofs.close();
}