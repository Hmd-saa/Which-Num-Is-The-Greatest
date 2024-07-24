#include <iostream>
using namespace std;

int main()
{
using i = short;
i num1;
i num2;
i num3;
cout << " "<<endl;
cout << "Enter 3 Numbers " <<endl;
cin>>num1 >>num2 >>num3;
/*cout << "2-Enter A Number " <<endl;
cin >>num2;
cout << "3-Enter A Number " <<endl;
cin >>num3;*/

if (num1 > num2 && num1 > num3 )
{
    cout << "The Greatest Number Is "<< num1 <<endl;
} else { if (num2 >num3 && num2 >num1)
{ cout << "The Greatest Number Is " << num2 <<endl;} 
 else { if (num3 > num2 && num3 > num1 )
 { cout << "The Greatest Number Is " << num3 <<endl;}
 }      
     } 

    return 0;
}