// Program which return the sum of all digits of number

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

        int SumDigit()
        {
            int iSum=0,iDigit=0;

            while(this->iNo != 0)
            {
                iDigit = this->iNo % 10;
                iSum = iSum + iDigit;
                this->iNo = this->iNo/10;
            }

            return iSum;

        }
 
};

int main()
{
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    iRet=nobj.SumDigit();

    cout<<"The sum of digit of a number is :"<<iRet<<endl;


    return 0;
}