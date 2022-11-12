// program to check a given number is prime or not
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

        bool ChkPrime()
        {
            int i=0,iCnt=0;
            if((this->iNo == 1) || (this->iNo == 0))
            {
                return false;
            }
            for(i=1;i<=this->iNo/2;i++)
            {
                if(this->iNo % i == 0)
                {
                    iCnt++;
                }

            }
            if(iCnt == 1)
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

    bRet=obj.ChkPrime();
    if(bRet==true)
    {
        cout<<"The given number is prime...."<<endl;
    }
    else
    {
        cout<<"The given number is not prime...."<<endl;
    }


    return 0;
}