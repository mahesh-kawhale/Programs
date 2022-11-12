// program which find the factorial of number

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        // Charactristics

    public:
        // Behaviours
        void Accept()      
        {
            cout<<"Enter the number : "<<endl;
            cin>>this->iNo;
        }

        void Display()     
        {
            cout<<"The Value is : "<<this->iNo<<endl;
        }

        int Factorial()
        {
            int iCnt=0;
            int iFact=1;

            for(iCnt = 1; iCnt <= this->iNo; iCnt++)
            {
                iFact = iFact * iCnt;
            }
            
            return iFact;

        }
};

int main()
{
    int iRet=0;

    Number nobj;

    nobj.Accept();

    nobj.Display();

    iRet=nobj.Factorial();
    cout<<"The factorial of number is :"<<iRet<<endl;

    return 0;
}