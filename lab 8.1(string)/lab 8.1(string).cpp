//���� ������� �����, ���� ������ ����������� ������� s0, ..., sn, ... .
//1. ϳ��������� ������� �������� ������� �� ������� � + �, � - �, � = � � ����������� s1, ..., sn.
//����� ������� � �������� ����� - ������������ ��������� ��� ����� string

#include <iostream>
#include <string>
using namespace std;
int Count(const string s, const string cs)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = s.find_first_of(cs, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
int main()
{
	string s = "S1,...,Sn";
	string cs = "+""-""=";
	cout << Count(s, cs) << endl;
	return 0;
}