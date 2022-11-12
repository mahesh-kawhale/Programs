// accept N number from user and accpet one another number as NO
// return Last occurence of that number

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

        int LastOccur(int iValue)
        {
            int iCnt=0,iCount=0,iPos=0;

            for(iCnt = iSize-1; iCnt >= 0; iCnt--)
            {
                if(Arr[iCnt]==iValue)
                {
                    break;
                }

            }

            if(iCnt==-1)
            {
                return -1;
            }
            else
            {
                return iCnt;
            }                
        } 

};


int main()
{

    int iRet=0,Size=0,iNo=0;

    cout<<"Enter the size of the array"<<endl;
    cin>>Size;

    cout<<"Enter the number you want to search"<<endl;
    cin>>iNo;

    ArrayX obj(Size);
    obj.Accept();
    obj.Display();
    iRet=obj.LastOccur(iNo);

    cout<<"The Last Occurence of Number is:"<<iRet<<endl;


    return 0;
}