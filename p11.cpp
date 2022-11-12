// Write a program which accept number from user and display its non factors

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

        void NonFactors()
        {
            int iCnt=0;

            for(iCnt = 1; iCnt <= this->iNo/2; iCnt++)
            {
                if(this->iNo % iCnt != 0)
                {
                    cout<<iCnt<<endl;
                }
                
                    
            }

        }
 
};

int main()
{

    Number nobj;

    nobj.Accept();
    nobj.Display();
    
    cout<<"The non factors of number are :"<<endl;
    nobj.NonFactors();

    return 0;
}