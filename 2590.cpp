//Questão 2590 - Sete - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int t, r, ans;
    long int n;


    /*
    Padrão:
    (7)
    4(9)
    34(3)
    240(1)
    1680(7)
    11764(9)
    82354(3)
    576480(1)
    4035360(7)

    O final da potência sempre seguirá a sequência 7 - 9 - 3 - 1
    */

    //Otimizações. Src: http://codeforces.com/blog/entry/5217
    //http://demin.ws/blog/english/2012/04/25/endl-vs-new-line/
    cin.tie(NULL);
    cout.sync_with_stdio(false);

    cin >> t;
    while(t--){
        cin >> n;

        r = n % 4;

        if(r == 0)
            ans = 1;
        else if(r == 1)
            ans = 7;
        else if(r == 2)
            ans = 9;
        else
            ans = 3;

        
        cout << ans  << '\n';
    }

    return 0;
}