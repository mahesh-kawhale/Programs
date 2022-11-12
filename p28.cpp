// program which accepts N numnber from user and return the multiplication of all numbers

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)
        {
            this -> iSize = iValue;
            Arr = new int[iSize];

        }    

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt=0;
            cout<<"Enter the elements of the array..."<<endl;
            for(iCnt = 1; iCnt <= iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt=0;
            cout<<"elements of the array are..."<<endl;
            for(iCnt = 1; iCnt <= iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }

        }

        int Multiplication()
        {
            int iCnt=0,iProd=1;
            for(iCnt = 1; iCnt <= iSize; iCnt++)
            {
                iProd=iProd*Arr[iCnt];

            }
            return iProd;
        }


};

int main()
{
    int Size=0,iRet=0;

    cout<<"Enter the number of elements"<<endl;
    cin>>Size;

    ArrayX obj(Size);

    obj.Accept();
    obj.Display();
    iRet=obj.Multiplication();

    cout<<"The Multiplication of all elements of the array is:"<<iRet<<endl;


    return 0;
}