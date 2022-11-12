// Program which return the multiplication of all digits of number

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

        int MultiDigit()
        {
            int iMult=1,iDigit=0;

            while(iNo != 0)
            {
                iDigit = this->iNo % 10;
                iMult = iMult * iDigit;
                iNo = iNo / 10;
            }

            return iMult;

        }
 
};

int main()
{
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    iRet=nobj.MultiDigit();

    cout<<"The multilpication of digit of a number is :"<<iRet<<endl;


    return 0;
}