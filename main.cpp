#include "Date.h"

using namespace std;


int main()
{
    Date un(25,2,2019);
    Date deux(25,2,2019);

    cout<<un<<endl;
    cout<<deux<<endl;

    Date add =  un + 100;
    Date sub = deux - 100 ;

    cout<<add<<endl;
    cout<<sub<<endl;


    add++;
    sub--;

    
    cout<<add<<endl;
    cout<<sub<<endl;
    return 0;
}