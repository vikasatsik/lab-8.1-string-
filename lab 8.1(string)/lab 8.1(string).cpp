//ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, ..., sn, ... .
//1. ѕ≥драхувати к≥льк≥сть входжень кожного ≥з символ≥в У + Ф, У - Ф, У = Ф в посл≥довн≥сть s1, ..., sn.
//ѕошук символ≥в у л≥терному р€дку - стандартними функц≥€ми дл€ р€дк≥в string

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