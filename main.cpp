#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    long long a,d,f,g;
    long long length,whichUnit,numb;
    string input,b;
    string unit[14]={"Thousand","Million","Billion","Trillion","Quadrillion","Quintillion","Sextillion","Septillion","Octillion","Nonillion","Decillion","Undecillion","Duodecillion","Tredecillion"};
    string tens[9]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety","Hundred"};
    string elevens[10]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string ones[9]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Enter amount to change to words: ";
    cin>>input;
    length=0;
    //length
    length= input.length();
    b=input;
    g=length;
    while(length){
        numb=0;
        if(length%3>0){
            whichUnit=length/3+1;
        }else{
            whichUnit=length/3;
        }
        numb=input.at(g-length);
        numb-=48;
        f=numb;
        if(numb!=0){
            if(length%3==0){
                cout<<ones[numb-1]<<" "<<tens[8]<<" ";
            }else if((length+1)%3==0){
                if(numb!=1){
                    cout<<tens[numb-2]<<" ";
                }else{
                    d=input.at(g-length+1);
                    d-=48;
                    cout<<elevens[d]<<" ";
                    length--;
                }
            }else {
                cout<<ones[numb-1]<<" ";
            }
            if(length>3&&(length+2)%3==0){
                cout<<unit[whichUnit-2]<<" ";

            }
        }
        length--;
    }
}
