//program which accepts number from user and check the frequency of a digit in it

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

        int Frequency(int iNum)
        {
            int iDigit=0,iCnt=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == iNum)
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
    
    cout<<"Enter a digit to check"<<endl;
    cin>>iDigit;

    iRet=nobj.Frequency(iDigit);

    cout<<"The frequency of digit is:"<<iRet<<endl;
    

    return 0;
}