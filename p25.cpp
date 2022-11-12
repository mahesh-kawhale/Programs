// Write a program which accepts number from user and return the count of even digits

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

        int CountEven()
        {
            int iDigit=0,iCnt=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 == 0)
                {
                    iCnt++;
                
                }

                iNo = iNo / 10;
            }

            return iCnt;
        }
 
};

int main()
{
    int iDigit=0;
    int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet=nobj.CountEven();

    cout<<"The count of even digits is:"<<iRet<<endl;
    

    return 0;
}