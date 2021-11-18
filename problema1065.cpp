#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int a[5], r=0, i;
    cin >> a[0]>> a[1]>> a[2]>> a[3]>> a[4];
    
    for(i=0; i<5; i++)
        if(a[i]%2 == 0)
            r++;
        
    cout << r << " valores pares" << endl;
    
    return 0;
}
