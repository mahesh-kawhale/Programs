// program which accepts N numbers from user and return the sum of numbers

#include<iostream>
using namespace std;
                            
class ArrayX
{
    private:                       // characteristics
        int *Arr;
        int iSize;

    public:   
        ArrayX(int iValue)          // Parameterised constructor
        {
            this->iSize=iValue;
            Arr=new int[iSize];

        }

        ~ArrayX()                   // destructor  
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt=0;

            cout<<"Enter the elements of the array..."<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt=0;
            cout<<"Elements of the array are..."<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }  

        int Summation()
        {
            int iCnt=0,iSum=0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];

            }

            return iSum;
        } 

}; 



int main()
{
    int iRet=0,Size=0;

    cout<<"Enter the size of the array"<<endl;
    cin>>Size;

    ArrayX obj(Size);

    obj.Accept();
    obj.Display();
    iRet = obj.Summation();

    cout<<"The summation of all elements is:"<<iRet<<endl;


    return 0;
}