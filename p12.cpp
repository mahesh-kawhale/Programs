// Write a program which accept number from user and check number is perfect or not

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

        bool ChkPerfect()
        {
            int iCnt=0,iSum=0;

            for(iCnt = 1; iCnt <= this->iNo/2; iCnt++)
            {
                if(this->iNo % iCnt == 0)
                {
                    iSum=iSum+iCnt;
                }

                if(iSum > this->iNo)
                {
                    break;
                }       
            }

            if(iSum == this->iNo)
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
    
    bRet=nobj.ChkPerfect();

    if(bRet==true)
    {
        cout<<"The number is perfect number"<<endl;
    }
    else
    {
        cout<<"The number is not perfect number"<<endl;
    }

    return 0;
}