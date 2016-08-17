#include <iostream>

#include <stdio.h>

#include <conio.h>

#include <math.h>



int a, b, c, d;

using namespace std;



int main()

{

	cout << "\n HESAP MAKiNESi";

	

	cout << "\nYapmak istediginiz islemin numarasini giriniz." << "\n" << "\n   Toplama      = 1\n   Cikarma     = 2\n   Carpma       = 3\n   Bolme        = 4\n";

	cin >> c;



	cout << "ilk sayiyi giriniz = ";

	cin >> a;

	cout << "Son sayiyi giriniz = ";

	cin >> b;



	if (c == 1)

		d = (a + b);



	if (c == 2)

		d = (a - b);



	if (c == 3)

		d = (a*b);



	if (c == 4)

		d = (a / b);



	cout << "\n islemin sonucu = " << d << "\n";



	if (c > 4)

		cout << "Girdiginiz islemin numarasi yanlis. En buyuk islem numarasi 4(Bolme)''dir.";



	cout << "\nCikmak icin bir tusa basiniz.\n\n";



	system("pause");

	return 0;

}