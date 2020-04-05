#include <iostream>
using namespace std;
void last(int x[], int i, int j)
{

while((i<10)&&(j<9))
{
    if((x[i]==0))
    {
        cout<<"\n the cursor will not reach the last element";

    }
    else if((x[i]!=0)&&(((x[j])!=0)))
           {
                last(x,i+2,j+2);

            }
            else if((x[i]!=0)&&((x[j])==0))
                    {
                        last(x,i+2, j+2);

                    }
break;
}
cout<<"\n number of steps:" << " " <<i;
}
int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};
 last(a,0,1);
   return 0;
}
