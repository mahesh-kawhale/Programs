// program which check a number is pallindrome or not

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

        bool ChkPallindrome()
        {
            int iDigit=0,iRev=0;

            int iTemp = iNo;
        
            while(iNo != 0)
            {
                iDigit = iNo % 10;

                iRev = iRev * 10 + iDigit;

                iNo = iNo / 10;

            }

            if(iTemp == iRev)
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
    
    bRet=nobj.ChkPallindrome();

    if(bRet==true)
    {
        cout<<"given number is pallindrome number"<<endl;
    }
    else
    {
        cout<<"given number is not pallindrome number"<<endl;
    }


    return 0;
}