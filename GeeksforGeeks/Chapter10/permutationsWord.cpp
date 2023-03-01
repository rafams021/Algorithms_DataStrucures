#include <iostream>
#include <algorithm>
using namespace std;
void permute(string& a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else {
        for (int i = l; i <= r; i++) {

            swap(a[l], a[i]);

            permute(a, l + 1, r);

            swap(a[l], a[i]);
        }
    }
}

void helper(string& word){
    string copyW = word;
    sort(copyW.begin(), copyW.end());
    permute(copyW, 0, copyW.size() - 1);
}
