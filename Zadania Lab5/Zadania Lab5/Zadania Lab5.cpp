#include <iostream>
#include <time.h>

using namespace std;

////--------------------------Zadanie 1 -------------------------------
//void zamiana (int liczba)
//{
//	if (liczba > 0)
//		zamiana(liczba / 2);
//	cout << liczba % 2;
//}
//int main ()
//{
//	for (int  i = 0; i < 10; i++)
//	{
//		cout << i << " w systemie dwojkowym = "; zamiana(i); cout << endl;
//	}
//
//}

//--------------------------Zadanie 2 --------------------------------
//int NWD (int a, int b)
//{
//	if (b != 0)
//		return NWD(b, a % b);
//	return a;
//}
//int main()
//{
//	cout << NWD(24, 78);
//	cout << endl << NWD(55, 96);
//	cout << endl << NWD(110, 54);
//
//}

//----------------------Zadanie 3------------------------------------------

//int ciag(int n)
//{
//if (n == 0)
//
//    return 0;
//
//if (n < 3)
//
//	return 1;
//return ciag(n - 2) + ciag(n - 1);
//
//}
//int main()
//
//{
//	int n;
//	cout << "Ciag Fibanaccego dla podanych wartosci :  " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i << " ma wartosc: " << ciag(i) << endl;
//	}
//	return 0;
//
//
//}

//------------------------Zadanie 4 -----------------------------

//int silnia(int liczba)
//{
//    if (liczba < 2)
//    {
//        return liczba;
//    }
//    return liczba * silnia(liczba - 1);
//}
//
//int main()
//{
//    int liczba;
//
//    cout << "podaj liczbe" << endl;
//    cin >> liczba;
//
//    cout << silnia(liczba) << endl;
//    return(0);
//}

//--------------------Zadanie 5------------------------------------

//float ciag(int n) 
//{
//
//
//	if (n == 1)
//	{
//		return 0;
//	}
//	if (n == 2)
//	{
//		return 0.5;
//	}
//	if (n > 2)
//	{
//		return !(ciag(n - 1)) * ciag(n - 2);
//	}
//}
//int main() 
//{
//	int n;
//	cin >> n;
//	cout << ciag(n);
//}