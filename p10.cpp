// Write a program which accept number from user and return its multiplication of factors

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        // Charactristics

    public:
        // Behaviours
        void Accept()       // Setter
        {
            cout<<"Enter the number : "<<endl;
            cin>>this->iNo;
        }

        void Display()      // Getter
        {
            cout<<"The number is : "<<this->iNo<<endl;
        }

        int MultiFactors()
        {
            int iCnt=0,iMult=1;

            for(iCnt=1;iCnt<=this->iNo/2;iCnt++)
            {
                if(this->iNo % iCnt == 0)
                {
                    iMult = iMult * iCnt;
                }
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

    iRet=nobj.MultiFactors();

    cout<<"The multilpication of factors is:"<<iRet<<endl;

    return 0;
}