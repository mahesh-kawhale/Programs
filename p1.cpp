// program which accepts two numbers from user and return the addition 
#include<iostream>
using namespace std;

class Addition
{
    private:
        int iNo1;
        int iNo2;

    public:
        void Accept()
        {
            cout<<"Enter the first number\n";
            cin>>this->iNo1;

            cout<<"Enter the second number\n";
            cin>>this->iNo2;
            
        }    

        void Display()
        {
            cout<<"first number is :"<<this->iNo1<<endl;
            cout<<"second number is :"<<this->iNo2<<endl;
        }

        int Addi()
        {
            int iAns=0;
            iAns=this->iNo1+this->iNo2;
            return iAns;
        }

};

int main()
{
    int iRet=0;

    Addition obj;

    obj.Accept();

    obj.Display();

    iRet=obj.Addi();

    cout<<"The addition of two numbers is:"<<iRet<<endl;



    return 0;
}