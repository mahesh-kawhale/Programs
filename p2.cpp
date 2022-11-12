// program which accepts two numbers from user and return the addition 
#include<iostream>
using namespace std;

class Addition
{
    public:
        int iNo1;
        int iNo2;

    public:
        Addition(int a,int b)
        {
            this->iNo1=a;
            this->iNo2=b;
        }

        void Display()
        {
            cout<<"first number is :"<<this->iNo1<<endl;
            cout<<"second number is :"<<this->iNo2<<endl;
        }

        int Addi()
        {
            int iAns=0;
            iAns=this->iNo1+this->iNo2;
            return iAns;
        }

};

int main()
{
    int iRet=0;
    int iValue1=0,iValue2=0;
    cout<<"Enter the first number\n";
    cin>>iValue1;

    cout<<"Enter the second number\n";
    cin>>iValue2;

    Addition obj(iValue1,iValue2);

    obj.Display();

    iRet=obj.Addi();

    cout<<"The addition of two numbers is:"<<iRet<<endl;



    return 0;
}