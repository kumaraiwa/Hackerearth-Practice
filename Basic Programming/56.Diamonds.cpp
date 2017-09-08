#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int br_up; cin >> br_up;
    for (int i = 0; i < br_up; i++) {
        int n; cin >> n;
        vector<int> niz = vector<int>(n);
        for (int j = 0; j < n; j++)
            cin >> niz[j];
        bool inverse = true;
        for (int j = 0; j < n; j++) {
            if (niz[niz[j] - 1] != j + 1) {
                inverse = false;
                break;
            }
        }
        if (inverse)
            cout << "inverse";
        else
            cout << "not inverse";
        cout << endl;
    }
    return 0;
}