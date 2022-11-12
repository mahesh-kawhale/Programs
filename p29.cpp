// program which accepts N numbers from user and return the frequency of even numbers

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

        int EvenFreq()
        {
            int iCnt=0,iFreq=0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iFreq++;
                }
            }
            return iFreq;
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
    iRet=obj.EvenFreq();

    cout<<"The Frequnecy of Even numbers is:"<<iRet<<endl;


    return 0;
}