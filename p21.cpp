// program which return the fifth power of a number
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

        unsigned long int Power()
        {
            int iCnt=0;
            unsigned long int iPow=1;

            for(iCnt = 1; iCnt <= 5; iCnt++)
            {
                iPow = iPow * iNo;

            }

            return iPow;  

        }
 
};

int main()
{
    unsigned long int iRet=0;

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    iRet=nobj.Power();

    cout<<"The result is :"<<iRet<<endl;


    return 0;
}