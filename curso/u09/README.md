# Operaciones relacionales y lógicas

Por ejemplo `3 + 4``es una expresión de tipo entero, ya que al sumar dos enteros el resultado es entero. Veamos el ejemplo del operador de división:

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
        cout << 4 / 3 << endl;
        cout << 4.0 / 3 << endl;
        cout << 4 / 3.0 << endl;
        return 0;

El resultado de dividir dos números enteros será un valor entero, si dividimos una número real por un entero el resultado será un valor real.





La precedencia de operadores es la siguiente:

* Los paréntesis rompen la precedencia.
* Operadores unarios (soĺo tienen un operador, por ejemplo el `-9`)
* Multiplicar, dividir y módulo
* Suma y resta
* Operador lógico `&&` (Y lógico)
* Operadores lógico `||` (O lógico)
* Operadores de comparación
* Operadores de asignación