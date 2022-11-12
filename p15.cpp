// Program to return the highest digit from a number

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

        int MaxDigit()
        {
            int iDigit=0,iMax=0;

            while(this->iNo != 0)
            {
                iDigit = this->iNo % 10;
                if(iMax < iDigit)
                {
                    iMax=iDigit;
                }

                this->iNo = this->iNo/10;
            }

            return iMax;

        }
 
};

int main()
{
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    iRet=nobj.MaxDigit();

    cout<<"The maximum digit from a number is :"<<iRet<<endl;


    return 0;
}