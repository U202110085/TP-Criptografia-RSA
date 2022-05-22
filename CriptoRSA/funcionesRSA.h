#pragma once
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <fstream>

using namespace System;
using namespace std;

int multiply(int, int[], int);
String^ power(int, int);


int modulo(int resto, int multiplo) {
    int parte_entera, numero_cercano, nuevo_resto;
    parte_entera = resto / multiplo;
    numero_cercano = parte_entera * multiplo;
    nuevo_resto = resto - numero_cercano;
    return nuevo_resto;
}

int mcd(int a, int b) {
    if (b == 0) // if b becomes 0 return a   
        return a;
    return mcd(b, a % b); // divide to a by b to make smaller number
}

int encontrar_d(int b) {
    vector<int> primos;

    int cont = 1;
    int a = 2;
    while (a < b)
    {
        if (mcd(a, b) == 1) {
            primos.push_back(a);
            cont++;
        }
        a++;
    }

    srand(time(0));
    int pos = rand() % cont;
    cout << pos;
    while (pos > 1) {
        primos.pop_back();
        pos--;
    }

    return primos.back();
}

int encontrar_e(int d, int z) {
    int e = 2;
    int resultado;
    while (1)
    {
        resultado = e * d - 1;
        if (modulo(resultado, z) == 0) return e;
        e++;
    }
}

int mod(String^ num, int a)
{
    // Initialize result
    int res = 0;

    // One by one process all digits of 'num'
    for (int i = 0; i < num->Length; i++)
        res = (res * 10 + (int)num[i] - '0') % a;

    return res;
}

String^ encriptar(String^ mensaje, int n, int e) {
    int tamanio_mensaje = mensaje->Length;
    long long posLetra;
    String^ mensaje_e2;
    String^ mensaje_e3;

    for (int i = 0; i < tamanio_mensaje; i++)
    {
        posLetra = int(mensaje[i]);
        mensaje_e3 += power(posLetra, e);
        mensaje_e2 += (mod(mensaje_e3, n));
        mensaje_e3 = "";
        if (i < tamanio_mensaje - 1) mensaje_e2 += " ";
    }
    return mensaje_e2;
}

void splitString(string str, vector<int>& num_des, string delimiter = " ")
{
    int start = 0;
    int end = str.find(delimiter);
    while (end != -1) {
        num_des.push_back(stoi(str.substr(start, end - start)));
        start = end + delimiter.size();
        end = str.find(delimiter, start);
    }
    num_des.push_back(stoi(str.substr(start, end - start)));
}

void MarshalString(String^ s, string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

String^ desencriptar(String^ mensaje_e, int n, int d) {
    String^ mensaje_aux;
    string auxx;
    vector<int> num_des;
    string mensaje_d;
    MarshalString(mensaje_e, mensaje_d);
    splitString(mensaje_d, num_des);
    for (int i = 0; i < num_des.size(); i++)
    {
        mensaje_aux += power(num_des[i], d);
        //mensaje_desencriptado += (mod(mensaje_aux, n));
        auxx += char(mod(mensaje_aux, n));
        mensaje_aux = "";
    }
    return gcnew String(auxx.c_str());
}

#define MAX 100000

int multiply(int x, int res[], int res_size) {

    // Initialize carry
    int carry = 0;

    // One by one multiply n with
    // individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;

        // Store last digit of
        // 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry = prod / 10;
    }

    // Put carry in res and
    // increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

// This function finds
// power of a number x
String^ power(int x, int n)
{
    String^ result;
    int res[MAX];
    int res_size = 0;
    int temp = x;

    // Initialize result
    while (temp != 0) {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }

    // Multiply x n times
    // (x^n = x*x*x....n times)
    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);

    for (int i = res_size - 1; i >= 0; i--)
        result += res[i];

    return result;
}

class Filee {
private:
    ofstream fileWrite;
    ifstream fileRead;
    string text;

public:
    Filee() {}
    ~Filee() {}

    void readData(String^ txtName) {
        string aux;
        MarshalString(txtName, aux);
        aux.append(".txt");
        string readtext;
        fileRead.open(aux, ios::out);

        if (fileRead.fail()) {
            fileRead.close();


            return;
        }

        while (1) {
            getline(fileRead, readtext);
            if (readtext.length() == 0)
                break;
            text.append(readtext);
            readtext.clear();
        }

        //getline(fileRead, text);

        fileRead.close();
    }

    void writeData(String^ txtName, String^ txtMessage) {
        string aux1, aux2;
        MarshalString(txtName, aux1);
        aux1.append(".txt");
        MarshalString(txtMessage, aux2);
        fileWrite.open(aux1, ios::out);
        fileWrite << aux2;
        fileWrite.close();
    }

    string gettext() { return text; }

    void resettext() { text = ""; }

};