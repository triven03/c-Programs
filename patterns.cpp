#include<iostream>
using namespace std;



void invertedPatternStar(int n){
/*

****
***
**
*

*/

    for (int i = n; i >=0; i--)
    {
        for (int j = 0; j <=i; j++)
        {
           cout<<"* ";
        }
        cout<<endl;
        
    }
   
}
void invertedPatternNumber(int n){
/*

1 2 3 4
1 2 3
1 2
1

*/
    for (int i = n; i >=0; i--)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
        
    }
   
}
void hollowRactangel(int n){
/*

****
*  *
*  *
****

*/    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
          if (i==1||i==n||j==1||j==n)
          {
           cout<<"* ";
          }
          else
          {
            cout<<"  ";
          }
          
          
        }
        cout<<endl;
        
    }
   
}

void invertedHalfPyramid(int n){
/*

   *
  **
 ***
****

*/    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
           if (n-i>=j)
           {
            cout<<"  ";
           }
           else
           {
            cout<<"* ";
           }
           
           
        }

        cout<<endl;
        
    }
    
}


 void butterFly(int n){
 /*

*      *
**    **
***  ***
********
********
***  ***
**    ** 
*      *

*/   

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <=2*n-2*i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <=2*n-2*i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
 }

 void zeroOne(int n){
/*

1
0 1
1 0 1
0 1 0 1

*/

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
    
 }

void rombus(int n){
/*

   ****
  ****
 ****
****

*/


    for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <=n-i ; j++)
        {
            cout<<"  ";
        }
    

        for (int j = 1; j <= n; j++)
        {
           cout<<"* ";
        }
        
        cout<<endl;
    }
    
}

void numberPattern(int n){
/*

   1
  1 2
 1 2 3  

*/    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
        
    }
    
}
void palindromicNumber(int n){
/*

   1
  212
 32123  

*/    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = i; j > 1; j--)
        {
            cout<<j<<"";
        }
        

        for (int j = 1; j <= i; j++)
        {
            cout<<j<<"";
        }

        cout<<endl;
        
    }
    
}


void star(int n){
/*

   *  
  ***
 *****
*******
*******
 *****
  ***
   *

*/

 for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = i; j > 1; j--)
        {
            cout<<"*";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
 for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = i; j > 1; j--)
        {
            cout<<"*";
        }
        

        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }

}


void zigZag(int n){
/*

  *    *
 * *  * *
*   *    *

*/     
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
           if ((i+j)%4==0 || (i==2 && j%4==0))
           {
           cout<<"* ";
           }
           else{
            cout<<"  ";
           }
           
        }
        cout<<endl;
        
    }
    
}

int main()
{
    int c;
    cout<<"Enter a number"<<endl;
    cin>>c;
//    hollowRactangel(c);
//    invertedHalfPyramid(c);
// invertedPatternNumber(c);
    // butterFly(c);
    // zeroOne(c);
    // rombus(c);
    // numberPattern(c);
    // palindromicNumber(c);
    // star(c);
    zigZag(c);
    return 0;
}
