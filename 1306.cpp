//Questão 1306 - Numerando Estradas - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int r, n, caso = 1, intdiv;
    float div;
    while(1){
        cin >> r >> n;

        if(!n && !r)
            break;

        //Caso o número de ruas seja maior que o número de combinações possíveis.
        if(r > (n*26 + n)) 
            cout << "Case " << caso << ": impossible\n";
        else{
            //Caso o número de ruas seja menor que a quantidade de números, nenhum sufixo será necessário.
            if(r <= n)  
                cout << "Case " << caso << ": 0\n";
            else{
                /*Exemplo: para r = 11 e n = 5
                intdiv = 11 / 5 = 2
                div = 11 / 5 = 2.2

                Caso div seja menor ou igual a intdiv, o número de sufixos será igual a intdiv - 1.
                Caso contrário, significa que ultrapassou a quantidade de sufixos anterior e a resposta se torna intdiv.

                Para r = 10 e n = 5:
                Ruas: 1 2 3 4 5 1A 2A 3A 4A 5A - Sufixos: 1        
                Para r = 11 e n = 5:
                Ruas: 1 2 3 4 5 1A 2A 3A 4A 5A 1B - Sufixos: 2
                */
                intdiv = r /n;
                div = (float)r/n;

                if(div <= intdiv)
                    cout << "Case " << caso << ": "<< intdiv - 1 << "\n";
                else
                    cout << "Case " << caso << ": "<< intdiv << "\n";
            }
        }
        


        caso++;
    }

    return 0;
}