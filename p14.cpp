// Program to display the digits of number

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;     

    public:
       
        void Accept()     
        {
            cout<<"Enter the number : "<<endl;
            cin>>this->iNo;
        }

        void Display()      
        {
            cout<<"The number is : "<<this->iNo<<endl;
        }

        void DisplayDigits()
        {
            int iDigit=0,iCnt=0;

            while(this->iNo != 0)
            {
                iDigit = this->iNo % 10;
                cout<<iDigit<<endl;
                this->iNo = this->iNo/10;
            }

        }
 
};

int main()
{

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    nobj.DisplayDigits();


    return 0;
}