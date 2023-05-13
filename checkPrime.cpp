#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

void checkPrime(int n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<n<<" is Not Prime "<<endl;
            return;
        }    
    }
    cout<<n<<" is Prime Number "<<endl;   
}

int reverseNumber(int n){
    int lastdigit;
    int reverse=0;
    while (n>0)
    {
       lastdigit=n%10;
       reverse=reverse*10+lastdigit;
       n=n/10;
    }
    
    return reverse;
}


void armstrongnumber(int n){
    int orignal=n;
    int sum=0;
    int lastdigit;
    while (n>0)
    {   
        lastdigit=n%10;
        sum += pow(lastdigit,3);
        cout<<"sum of "<<sum<<endl;
        cout<<"pow of "<< lastdigit<<" is " <<pow(lastdigit,3)<<endl;

        n=n/10;
    }

    cout<<125+27;
    
}

int main(){
    cout<<"Enter A Number "<<endl;
    int number;
    cin>>number;
    // checkPrime(number);

    // cout<<reverseNumber(number);
    armstrongnumber(number);
}
