#include <iostream>
using namespace std;
int main() {
	//Boolean1.Дано целое число A.Проверить истинность высказывания : «Число A является положительным».
	/*int a;
	bool res;
	cin >> a;
	res = a > 0;
	cout << boolalpha << res << endl;*/
	//Boolean2.Дано целое число A.Проверить истинность высказывания : «Число A является нечетным».
	/*int a;
	bool res;
	cin >> a;
	res = a % 2 != 0;
	cout << boolalpha << res << endl;*/
	//Boolean3 Дано целое число A.Проверить истинность высказывания : «Число A является четным».
	/*int a;
	bool res;
	cin >> a;
	res = a % 2 == 0;
	cout << boolalpha << res << endl;*/
	//Boolean4.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Справедливы неравенства A > 2 и B ≤ 3».
	/*int a, b;
	bool res;
	cin >> a >> b;
	res = a > 2 && b <= 3;
	cout << boolalpha << res << endl;*/
	//Boolean5.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Справедливы неравенства A ≥ 0 или B < −2».
	/*int a, b;
	bool res;
	cin >> a >> b;
	res = a >= 0 || b < 2;
	cout << boolalpha << res << endl;*/
	//Boolean6.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Справедливо двойное неравенство A < B < C».
	/*int a, b, c;
	bool res;
	cin >> a >> b >> c;
	res = a < b && b < c;
	cout << boolalpha << res << endl;*/
	//Boolean7.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Число B находится между числами A и C».
	/*int a, b, c;
	bool res;
	cin >> a >> b >> c;
	res = (a < b && b < c) || (c < b && b < a);
	cout << boolalpha << res << endl;*/
	//Boolean8.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Каждое из чисел A и B нечетное».
	/*int a, b;
	bool res;
	cin >> a >> b;
	res = (a % 2 != 0) && (a % 2 != 0);
	cout << boolalpha << res << endl;*/
	//Boolean9.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Хотя бы одно из чисел A и B нечетное».
	int a, b;
	bool res;
	cin >> a >> b;
	res = (a % 2 != 0) || (b % 2 == 0);
	cout << boolalpha << res << endl;

}