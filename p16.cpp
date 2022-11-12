// Program which return the smallest digit from a number

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

        int SmallDigit()
        {
            int iDigit=0,iSmall=0;
            
            iSmall=this->iNo % 10;

            while(this->iNo != 0)
            {
                iDigit = this->iNo % 10;
                if(iSmall > iDigit)
                {
                    iSmall=iDigit;
                }

                this->iNo = this->iNo/10;
            }

            return iSmall;

        }
 
};

int main()
{
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    iRet=nobj.SmallDigit();

    cout<<"The minimum digit from a number is :"<<iRet<<endl;


    return 0;
}