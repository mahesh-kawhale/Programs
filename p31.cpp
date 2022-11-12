// Accept N number from user and Accepet range and Display all elemnts from that range

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
            this->iSize = iValue;
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

        void RangeDisplay(int iNo1,int iNo2)
        {
            int iCnt=0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
                {
                    cout<<Arr[iCnt]<<endl;
                }
                
            }
                
        } 

};


int main()
{

    int iRet=0,Size=0;
    int iValue1=0,iValue2=0;

    cout<<"Enter the size of the array"<<endl;
    cin>>Size;

    cout<<"Enter the first number of range"<<endl;;
    cin>>iValue1;

    cout<<"enter the second number of range"<<endl;
    cin>>iValue2;

    ArrayX obj(Size);
    obj.Accept();
    obj.Display();

    cout<<"Elements from the range are...."<<endl;
    obj.RangeDisplay(iValue1,iValue2);


    return 0;
}