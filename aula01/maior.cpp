#include <iostream>
using namespace std;

int main()
{   
    // ENTRADA
    // A entrada é dada em uma única linha contendo uma sequência de números inteiros positivos. O último número da linha é 0 (zero).
    int n = 1, max = 0;
    
    while (n != 0)
    {
        cin >> n;

        if (n > max)
        {
            max = n;
        }
    }
    
    // SAÍDA
    // Seu programa deve imprimir o maior número dentre os números da entrada.

    cout << max;
    return 0;

}