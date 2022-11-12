// Program which display the even digits of number

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

        void EvenDigit()
        {
            int iDigit=0;

            while(this->iNo != 0)
            {
                iDigit = this->iNo % 10;

                if(iDigit % 2==0)
                {
                    cout<<iDigit<<endl;
                }

                this->iNo = this->iNo/10;
            }

        }
 
};

int main()
{
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    nobj.EvenDigit();


    return 0;
}