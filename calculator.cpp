#include <iostream>
using namespace std;

double power(double base, double pow){
    double result=1;
    for(double i=1; i<=pow; i++)
    {
        result=result*base;
    }
    return result;
}
double factorial(double pow)
{
    double result=1;
    for(int i=1; i<=pow; i++)
    {
        result=result*i;
    }
    return result;

}
int main()
{
    double num1,num2,x,degrees,radians;
    char op;


    cout << "                                                          MY CALCULATOR\n";
    cout<<"INDEX:\n";
    cout<<"Press '+' for Addition\n";
    cout<<"Press '-' for substraction\n";
    cout<<"Press '/' for division\n";
    cout<<"Press '*' for multiplication\n";
    cout<<"Press '^' for exponentiation\n";
    cout<<"Press 'T' for trigonometric functions\n";
    cout<<" \n";
    cout<< "Choose your operator: ";
    cin>> op;
    double result = 0;
    if(op == '+')
    {
    cout<< "Select first number: ";
    cin>> num1;
    cout<< "Select second number: ";
    cin>> num2;
        result = num1 + num2;
    }
    else if(op == '-')
    {
    cout<< "Select first number: ";
    cin>> num1;
    cout<< "Select second number: ";
    cin>> num2;
        result = num1 - num2;
    }
     else if(op == '*')
    {
    cout<< "Select first number: ";
    cin>> num1;
    cout<< "Select second number: ";
    cin>> num2;
        result = num1 * num2;
    }
     else if(op == '/')
    {
    cout<< "Select first number: ";
    cin>> num1;
    cout<< "Select second number: ";
    cin>> num2;
        result = num1 / num2;
    }
    else if (op == '^')
    {
         cout<< "Select base: ";
    cin>> num1;
    cout<< "Select power: ";
    cin>> num2;
    int r=1;
    for (int i= 1; i<=num2;i++)
    {
     r=r*num1;
     result = r;
    }
    }
    else if (op == 'T' || op == 't')
    {
        char tf;
         cout <<" Press 'S' for sine \n";
         cout <<" Press 'C'for cosine \n";
         cout <<" Press 'T' for tangent\n";
         cout<<" \n";
         cout<< "Select your trigonometric function: ";
         cin>>tf;
         if(tf == 'S' || tf == 's')
         {
            cout<<"Sine of(in degrees): ";
            cin>> degrees;
            x = degrees* (3.14159265359/180);
        double sign=1;
        for(int i=1; i<40; i+=2)
        {
        result=result+sign*(double)power(x,i)/factorial(i);
        sign=sign*-1;
        }
        }
         else if (tf == 'C' ||tf == 'c')
        {
        cout<<"Cosine of(in degrees): ";
        cin>> degrees;
        x = degrees* (3.14159265359/180);

        double sign=1;
        for(double i=0; i<40; i+=2)
        {
        result=result+sign*(double)power(x,i)/factorial(i);
        sign=sign*-1;
        }
        }
        else if (tf == 'T'||tf == 't')
        {
        cout<<"tangent of(in degrees): ";
        cin>> degrees;
        x = degrees* (3.14159265359/180);
        result = x + (x*x*x)/(3) + ((2*x*x*x*x*x)/15);
        }
    }
    else
    {
       cout<< "                                              PLEASE SELECT FROM GIVEN OPERATORS!!";
    }
    cout<< "Required result:  "<<result<<endl;
}
   