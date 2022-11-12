// Program to Count the number of digits in number

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

        int CountDigits()
        {
            int iDigit=0,iCnt=0;

            while(this->iNo != 0)
            {
                iDigit = this->iNo % 10;
                iCnt++;
                this->iNo = this->iNo/10;
            }

            return iCnt;

        }
 
};

int main()
{
    
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    iRet=nobj.CountDigits();

    cout<<"The number of digits in a number is :"<<iRet<<endl;


    return 0;
}