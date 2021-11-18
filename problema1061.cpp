#include <iostream>
 
using namespace std;
 
int main() {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    string texto;
    
    cin >> texto >> d1 >> h1 >> texto >> m1 >> texto >> s1;
    cin >> texto >> d2 >> h2 >> texto >> m2 >> texto >> s2;
    
    int t1, t2;
    t1 = s1+m1*60+h1*3600+d1*86400;
    t2 = s2+m2*60+h2*3600+d2*86400;
    
    int tempo = t2-t1;
    
    printf("%d dia(s)\n", tempo/86400); tempo = tempo%86400;
    printf("%d hora(s)\n", tempo/3600); tempo = tempo%3600;
    printf("%d minuto(s)\n", tempo/60); tempo = tempo%60;
    printf("%d segundo(s)\n", tempo); 
    return 0;
}
