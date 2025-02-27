#include<iostream>
using namespace std;
class Dayofyear

	{
	public:
		int num;
		int n;
		
		int  checkdate()
		{
			cout<<"Enter the date"<<endl;
			cin>>num;
			
			if(num<=31)
			{
				cout<<"January ";
					cout<<num;
			}
			else if (num<=59)
			{
				cout<<"Febraury ";
				n=num-31;
					cout<<n;
			}
			else if (num<=90)
			{
				cout<<"March ";
				n=num-59;
					cout<<n;
			}
			else if (num<=120)
			{
				cout<<"April ";
				n=num-90;
					cout<<n;
			}
			else if (num<=151)
			{
				cout<<"May ";
				n=num-120;
					cout<<n;
			}
		else if (num<=181)
			{
				cout<<"June ";
				n=num-151;
					cout<<n;
			}
			else if (num<=212)
			{
				cout<<"July ";
				n=num-181;
					cout<<n;
			}
			else if (num<=243)
			{
				cout<<"August ";
				n=num-212;
					cout<<n;
			}
			else if (num<=273)
			{
				cout<<"Sept ";
				n=num-243;
					cout<<n;
			}
			else if (num<=304)
			{
				cout<<"October ";
				n=num-273;
					cout<<n;
			}
			else if (num<=334)
			{
				cout<<"November ";
				n=num-304;
					cout<<n;
			}
			else if(num<=365)
			{
				cout<<"December ";
				n=num-334;
					cout<<n;
			}
		}
	};
int main()
{
 Dayofyear Day;
 Day.checkdate();

}
