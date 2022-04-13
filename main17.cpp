#include<iostream>
using namespace std;

class Function                       //class created 
{
    int a, b;                        //global variable decleration
    public:                         

    void getvalue()                  //function defination
    {
        cout<<"Enter the value of Numbers a: ";
        cin >> a;
        cout<<"Enter the value of Numbers b: ";
        cin>>b;
        
    }

    Function operator+(Function F)     //binary operator overloading 
    {
        Function res;
        res.a = a + F.a;
        res.b = b + F.b;
        return (res);
    }

    Function operator-(Function F)      //binary operator overloading
    {
        Function res;
        res.a = a - F.a;
        res.b = b - F.b;
        return (res);
    }

    void display()                      // display function
    {
        cout<<"The sum of a is: "<<a<<" and b is: "<<b<<endl;
    }
    void display1()                     //display function 
    {
        cout<<"The difference of a is: "<<a<<" and b is: "<<b<<endl;
    }
};

int main() 
{
    Function f1, f2, result, result1;    //creating object of function type

    f1.getvalue();                       //function call
    f2.getvalue();

    result = f1 + f2;                    //adding two objects using + operator (overloaded)
    result1 = f1 - f2;                   //subtracting two objects using - operator (overloaded)

    cout << "Result: "<<endl;
    result.display();                    // result display
    result1.display1();
    return 0;
}