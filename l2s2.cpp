# include <iostream>


using namespace std;

int main (void)
{
	int i;
	cout<<"Please select a way to convert decimal numbers to binary numbers"<<endl;
	cout<<"1)Using arithmetic operations: +,-,*,/,%"<<endl;
	cout<<"2)Using bitwise operations: &,|,^,<<,>>"<<endl;
	cin>>i;


	switch(i)
	{ case 1: {
		int a[16]={0},i=0;
		unsigned short n;


		cout<<"Please input an integer: ";
		cin>>n;

		do
		{
			a[i]=(n%2);
			i=i+1;
			n=n/2;
		}

		while (n!=0);

		for(i=15;i>=0;i--)
		{
			//cin>>a[i];
			cout<<a[i];}
		break;
	}


	case 2: {
		//int num[16]={0};
		//	int t=0,i;

		unsigned short n;
		cout<<("Input a decimal number");
		cin>>n;

		unsigned int mask=32768;

		while(mask>0)
		{
			if((n&mask)==0)
				cout<<" 0 ";
			else
				cout<<" 1 ";
			mask=mask>>=1;
		}

		break;}
	default:   break;
	}
	return 0;
}
