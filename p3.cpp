// program to check a given number is odd or even
#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout<<"Enter the number\n";
            cin>>this->iNo;
            
        }    

        void Display()
        {
            cout<<"The given number is :"<<this->iNo<<endl;
        }

        bool ChkEvenOrOdd()
        {
            
            if(this->iNo % 2 == 0)
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
    bool bRet=0;

    Number obj;

    obj.Accept();

    obj.Display();

    bRet=obj.ChkEvenOrOdd();
    if(bRet==true)
    {
        cout<<"The given number is Even...."<<endl;
    }
    else
    {
        cout<<"The given number is Odd...."<<endl;
    }


    return 0;
}