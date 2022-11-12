//Write a program which accepts number from user and print even factors of numbers

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

        void EvenFactors()
        {
            int i=0;
            for(i=1;i<=this->iNo/2;i++)
            {
                if(this->iNo % i ==0)
                {
                    if(i % 2 ==0)
                    {
                        cout<<i<<endl;

                    }
                    
                }
            }
        }
     
};

int main()
{
    Number nobj;

    nobj.Accept();
    
    nobj.Display();

    nobj.EvenFactors();

    return 0;
}