// Program which checks a digit is present in a number or not

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

        bool CheckDigit(int iNum)
        {
            int iDigit=0,iCnt=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit != iNum)
                {
                    iCnt++;
                    break;
                }
                
                iNo = iNo / 10;

            }
            if(iCnt >= 1)
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
    int iDigit=0;
    bool bRet=false;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    cout<<"Enter a digit to check"<<endl;
    cin>>iDigit;

    bRet=nobj.CheckDigit(iDigit);
    if(bRet==true)
    {
        cout<<"It is present"<<endl;
    }
    else
    {
        cout<<"It is absent"<<endl;
    }


    return 0;
}