#pragma once
using namespace std;
//zad1
/*
float kolo(float r);
float prostokat(float a, float b);
float trojkat(float a, float h);
float szescian(float a);
float walec(float r, float h);

float kolo(float r) {
	return r*r*3.14;
}
float prostokat(float a, float b){
	return a * b;
}
float trojkat(float a, float h) {
	return (a * h) / 2;
}
float szescian(float a) {
	return a * a * a;
}
float walec(float r, float h)
{
	return  r * r * 3.14 * h;
}
*/

//zad2

//zad3
/*
void binarnie(int n)
{
    int tab[32];
    int i = 0;
    while (n > 0) 
    {
        tab[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << tab[j];
}
*/
//zad4
float dwusilnia(int n) {
    
    {
        int s = 1; 
        for (; n > 1; n -= 2)
            s*= n;
        return s;
    }
}

