#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int check = 1;
	int n, a;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"List prime : ";
	for (a = 2; a <= n; a++)
	{
		for (int i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
				{
					check = 0;
					break;  // Neu da co uoc thi bo qua luon, khong can tiep tuc nua.
				}
			else 
				{
					check = 1;
				}
		}
		if (check == 1)
		{
			cout<<a<<" ";
		}
	}
	system("pause");
	return 0;
}
