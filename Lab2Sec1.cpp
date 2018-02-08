

# include <iostream>


using namespace std;

int main(void) {


    char menu=0;

do{
    cout<<endl<<"*****Menu*****"<<endl<< "a) Factorial of a number"<<endl<<"b)Leap year or not"<<endl<<"c)Maximum"<<endl<<"d)Division of two numbers"<<endl<<"e)Exit"<<endl<<"Please input your selection:";
    cin>>menu;


    while((menu>69&&menu<97)||menu>101||menu<65)
    {  cout<<"Wrong Input, Please input correct character (a,b,c,d,e)";
       cin>>menu;
    }
		cout<<endl;


    switch(menu)
    {


    case 'a'  :   {
    	           int j;
                   unsigned short x;
                   unsigned long y=1;

                   cout<<"Enter a number";
                   cin>>x;

                   if(x>=13)
                   {
                	   cout<<"Number cannot over 13,which is over the memeory of long int";
                	   break;
                   }
                   for(j=1;j<=x;j++)
                   {
                     y=y*j;
                   }

                   cout<<"Output: "<<y<<endl;
                   break;
                  }


    case 'b'  :  {


    	         unsigned int year;
                 cout<<"Input year";
                 cin>>year;


                 if((year%4==0 && year%100!=0) || year%400==0)
                 {
                	 cout<<"This year is leap year";
                     break;
                 }
                 else
                 {
                     cout<<"This year is not leap year";
                     break;
                 }
                 }


    case 'c'   : {
    	         cout<<"Input two numbers"<<endl;

                float x,y;
                cout<<"Input the first number";
                cin>>x;
                cout<<"Input the second number";
				cin>>y;
                int tf;

                if(y<0)

                {


                	tf = x + y> 0? 1:0;
                }

                else{
                    tf = x - y> 0? 1:0;
                }


                if(tf==1)
                { cout<<"The first number "<<x<<" is bigger"<<endl;
                  break;}
                else{
                	cout<<"The second number "<<y<<" is bigger"<<endl;
                break; }
                 }
    case 'd'  :  {
    	         cout<<"Input two numbers"<<endl;

                int x,y;
                float result;
                cout<<"Input dividend:";
                cin>>x;
                cout<<"Input divisor:";
				cin>>y;


                if(y==0)
                {
                	cout<<"Divisor by zero!"<<endl;

                     break;
                }

                result = static_cast<float> (x) / y ;
                cout<<"The result of division is "<<result<<endl;
                break; }

    case 'e'  :   break;

    default  :  break;

    }
}while(menu=='e');

return 0;
}
