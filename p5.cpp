// program to find factors of given number

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

        void Factors()
        {
            int i=0;
            for(i=1;i<=this->iNo/2;i++)
            {
                if(this->iNo % i ==0)
                {
                    cout<<i<<endl;
                }
            }
        }
     
};

int main()
{
    Number nobj;

    nobj.Accept();
    
    nobj.Display();

    nobj.Factors();

    return 0;
}