#include <iostream>
using namespace std;

int main()
{
    for (int i = 9; i <= 43; i += 1)
    {
        cout << i << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    for (int i = 7; i <= 51; i += 2)
    {
        cout << i << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 30; i += 1)
    {
        cout << i << "=";
        cout << "1/" << i << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 30; i += 1)
    {
        cout << i << "=";
        cout << "1/" << i << endl;
    }
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i += 1)
    {
        cout << "2^" << i << "=" << pow(2, i) << endl;
    }
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numero1;
    cout << "Ingrese el numero a determinar: " << endl;
    cin >> numero1;

    if (numero1 % 14 == 0)
    {
        cout << numero1 << " Es divisible entre " << "14" << endl;
    }
    else
    {
        cout << numero1 << " No es divisible entre " << "14" << endl;
    }

}

#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 6 == 0)
        cout << numero << " es multiplo de " << "6";
    else
        cout << numero << " no es multiplo de " << "6";

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int numero, resultado;
    cout << "Numero a determinar" << endl;
    cin >> numero;
    resultado = numero % 2;
    if (resultado > 0)
    {
        cout << numero << " es impar" << endl;
    }
    else {
        cout << numero << " es par" << endl;
    }
    return 0;

}

#include <iostream>

using namespace std;

int main()
{
    int par = 0, impar = 0;
    int numeros[25];
    int pares[25];
    int impares[25];

    cout << "Introducir datos: " << endl;
    for (int i = 0; i < 25; i++)
    {
        cin >> numeros[i];

        if (numeros[i] % 2 == 0)
            pares[par++] = numeros[i];
        else
            impares[impar++] = numeros[i];
    }

    cout << "Numeros Pares: " << endl;
    for (int i = 0; i < par; i++)
        cout << pares[i] << " ";

    cout << "\nNumeros Impares: " << endl;
    for (int i = 0; i < impar; i++)
        cout << impares[i] << " ";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int pos = 0, neg = 0;
    int numeros[25];
    int negativo[25];
    int positivo[25];

    cout << "Introducir datos: " << endl;
    for (int i = 0; i < 25; i++)
    {
        cin >> numeros[i];

        if (numeros[i] >= 0)
            positivo[pos++] = numeros[i];
        else
            negativo[neg++] = numeros[i];
    }

    cout << "Numeros Positivos: " << endl;
    for (int i = 0; i < pos; i++)
        cout << positivo[i] << " ";

    cout << "\nNumeros Negativos: " << endl;
    for (int i = 0; i < neg; i++)
        cout << negativo[i] << " ";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int par = 0, impar = 0;
    int numeros[15];
    int pares[15];
    int impares[15];

    cout << "Introducir datos: " << endl;
    for (int i = 0; i < 15; i++)
    {
        cin >> numeros[i];

        if (numeros[i] % 2 == 0)
            pares[par++] = numeros[i];
        else
            impares[impar++] = numeros[i];
    }
    int mayor = 0;
    int menor = 0;
    int suma = 0;
    for (int i = 0; i <= 15; i++)
    {
        if (1 == i) {
            mayor = i;
        }
        else if (pares[i] > mayor) {
            mayor = pares[i];
        }
    }
    cout << "El numero par mayor es: " << mayor << endl;

    return 0;
}

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
    int coin = 0;
    int i = 1;
    do
    {
        coin = rand() % 2;
        if (coin == 0) {
            cout << i << " " << "Cara" << endl;
        }
        else {
            cout << i << " " << "Cruz" << endl;
        }
        i++;
    } while (i <= 100);

}

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
    int coin = 0, uno = 0, dos = 0, tres = 0, cuatro = 0, cinco = 0, seis = 0;
    int i = 1;
    do
    {
        coin = rand() % 6;
        if (coin == 0) {
            cout << i << " " << "1" << endl;
            uno++;
        }
        if (coin == 1) {
            cout << i << " " << "2" << endl;
            dos++;
        }
        if (coin == 2) {
            cout << i << " " << "3" << endl;
            tres++;
        }
        if (coin == 3) {
            cout << i << " " << "4" << endl;
            cuatro++;
        }
        if (coin == 4) {
            cout << i << " " << "5" << endl;
            cinco++;
        }
        if (coin == 5) {
            cout << i << " " << "6" << endl;
            seis++;
        }
        i++;
    } while (i <= 60);

    cout << "Numero de unos: " << uno << endl;
    cout << "Numero de dos: " << dos << endl;
    cout << "Numero de tres: " << tres << endl;
    cout << "Numero de cuatro: " << cuatro << endl;
    cout << "Numero de cinco: " << cinco << endl;
    cout << "Numero de seis: " << seis << endl;
}

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
    int coin = 0, uno = 0, dos = 0, tres = 0, cuatro = 0, cinco = 0, seis = 0;
    int i = 1;
    do
    {
        coin = rand() % 6;
        if (coin == 0) {
            uno++;
        }
        if (coin == 1) {
            dos++;
        }
        if (coin == 2) {
            tres++;
        }
        if (coin == 3) {
            cuatro++;
        }
        if (coin == 4) {
            cinco++;
        }
        if (coin == 5) {
            seis++;
        }
        i++;
    } while (i <= 1000);

    cout << "Numero de cuatros: " << cuatro << endl;
}

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
    int coin = 0, uno = 0, dos = 0, tres = 0, cuatro = 0, cinco = 0, seis = 0;
    int i = 1;
    do
    {
        coin = rand() % 6;
        if (coin == 0) {
            uno++;
        }
        if (coin == 1) {
            dos++;
        }
        if (coin == 2) {
            tres++;
        }
        if (coin == 3) {
            cuatro++;
        }
        if (coin == 4) {
            cinco++;
        }
        if (coin == 5) {
            seis++;
        }
        i++;
    } while (i <= 1000);

    cout << "Numero de tres: " << tres << endl;
}

#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (j = 2; j <= 400; j++)
    {
        i = 2;
        while (j % i != 0)
            i++;

        if (i == j)
            cout << j << " ";

    }

}


#include <iostream>
using namespace std;
int main()
{
    int i, j;

    cout << "Introduce un numero: ";
    cin >> j;

    i = 2;
    while (j % i != 0)
        i++;

    if (i == j)
        cout << j << " Es numero primo ";
    else
    {
        cout << j << " No Es numero primo ";
    }
}

#include <iostream>
using namespace std;
int main()
{
    int i, j, numero;
    cout << "Introducir numero" << endl;
    cin >> numero;
    for (j = 2; j <= numero; j++)
    {
        i = 2;
        while (j % i != 0)
            i++;

        if (i == j)
            cout << j << " ";

    }

}

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (j = 1972; j <= 2000; j++)
    {
        i = 2;
        while (j % i != 0)
            i++;

        if (i == j)
            cout << j << " ";

    }

}

#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int main()
{
    int num, edad, numeros;
    srand(time(NULL));
    cout << "Introduzca la cantidad de numeros " << endl;
    cin >> numeros;
    cout << "Introduzca la edad " << endl;
    cin >> edad;
    cout << "Numeros aleatorios menores a la edad " << endl;
    for (int i = 1; i <= numeros; i++)
    {
        num = 10 + rand() % (101 - 10);
        if (num <= edad)
        {
            cout << num << " ";
        }
    }

    return 0;
}


#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int main()
{
    int num, edad;
    srand(time(NULL));
    cout << "Numeros aleatorios menores a la edad " << endl;
    for (int i = 1; i <= 40; i++)
    {
        num = -100 + rand() % (101 - -100);
        cout << num << " ";
    }
    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0, aux = 0;

    cout << "Numero 1 " << endl;
    cin >> numero1;
    cout << "Numero 2 " << endl;
    cin >> numero2;
    cout << "Numero 3 " << endl;
    cin >> numero3;

    if (numero1 < numero2) {
        aux = numero2;
        numero2 = numero1;
        numero1 = aux;
    }

    if (numero1 < numero3) {
        aux = numero3;
        numero3 = numero1;
        numero1 = aux;
    }

    if (numero2 < numero3) {
        aux = numero3;
        numero3 = numero2;
        numero2 = aux;
    }
    cout << "Numeros ordenados descendentemente " << endl;
    cout << numero1 << ' ' << numero2 << ' ' << numero3 << endl;
    return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    float prod = 0, sum = 0;
    int i, n;
    cout << "Introduzca el valor de n " << endl;
    cin >> n;
    for (i = 0; i <= n; i++) {
        if (i == 1)
        {
            prod = 1;
        }
        prod = pow(2, i);
        sum += prod;
    }
    cout << "La suma de la serie es " << sum;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numero, producto = 1;
    for (int i = 1; i <= 2; i++)
    {
        cout << "Numero " << i << endl;
        cin >> numero;

        producto *= numero;
    }

    cout << "La media geometrica es: " << sqrt(producto) << endl;

    return 0;
}

#include <iostream>  
using namespace std;
int main()
{
    int i, operacion = 1, numero;
    cout << "Introduzca numero: ";
    cin >> numero;
    for (i = 1;i <= numero;i++) {
        operacion = operacion * i;
    }
    cout << "El factorial de " << numero << " es: " << operacion << endl;
    return 0;
}