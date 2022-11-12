// program which Check the given number is divisible by 5

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

        bool ChkDiv()
        {
            if(this->iNo % 5 ==0)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
};

int main()
{
    bool bRet=false;

    Number nobj;

    nobj.Accept();

    nobj.Display();

    bRet=nobj.ChkDiv();
    if(bRet==true)
    {
        cout<<"The given number is divisible by 5"<<endl;
    }
    else
    {
        cout<<"The given number is not divisible by 5"<<endl;
    }
    

    return 0;
}