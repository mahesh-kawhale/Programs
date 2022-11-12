// Write a program which accept number from user and Display its factors in decreasing order

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        

    public:
        // Behaviours
        void Accept()       // Setter
        {
            cout<<"Enter the number : "<<endl;
            cin>>this->iNo;
        }

        void Display()      // Getter
        {
            cout<<"The Value is : "<<this->iNo<<endl;
        }

        void DecFactors()
        {
            int iCnt=0;
            for(iCnt = this->iNo/2; iCnt >= 1; iCnt--)
            {
                if(this->iNo % iCnt ==0)
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

    nobj.DecFactors();

    return 0;
}