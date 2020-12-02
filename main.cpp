#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "array size: " << "\n";
    cin >> n;
    vector<int> v(n);
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
        {
            *it = rand ()%10 - 6;
            cout << *it << " ";
        };

    cout << "\n";

    vector<int>::iterator it_1;
    int c;

    for(it_1 = v.begin()+1; it_1 != v.end(); it_1++)
    {
        if ((*(it_1-1))*(*it_1) < 0) c += 1;
    }

    cout << "Kol-vo smen znaka: " << c;
    return 0;
}
