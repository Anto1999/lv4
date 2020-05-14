#include<iostream>
#include<vector>

using namespace std;

vector<int> brojevi;
vector<int> temp;
int najveciBroj;

void gradiBroj(int broj)
{
	int potencija, vadi;
	int temp = brojevi[broj % 10 - 1];
	broj /= 10;
	while (broj != 0)
	{
		vadi = brojevi[broj % 10 - 1];
		potencija = 1;
		while (vadi != 0)
		{
			potencija *= 10;
			vadi /= 10;
		}
		temp = temp * potencija + brojevi[broj % 10 - 1];
		broj /= 10;
	}
	if (temp > najveciBroj)
		najveciBroj = temp;
}

void trazi(int broj, int znamenke)
{
	if (znamenke == 0)
	{
		gradiBroj(broj);
		return;
	}
	if (broj > 0)
		temp[broj % 10 - 1] = 1;

	for (int i = 1; i <= brojevi.size(); i++)
	{
		if (temp[i - 1] == 0)
		{

			trazi(broj * 10 + i, znamenke - 1);
		}
	}
	if (broj > 0)
		temp[broj % 10 - 1] = 0;
}

int main()
{
	brojevi = { 50,20,1,9 };
	for (int i = 0; i < brojevi.size(); i++)
		temp.push_back(0);
	int znamenke = brojevi.size();
	trazi(0, znamenke);
	cout << najveciBroj << endl;

	return 0;
}