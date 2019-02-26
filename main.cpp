#include "Date.h"

using namespace std;


int main()
{
    Date un(25,2,2019);
    Date deux(25,2,2019);
    Date faux1(40,2,2019);
    Date faux2(40,38,2019);
    Date faux3(2,13,2019);

    cout<<un<<endl;
    cout<<deux<<endl;
    cout<<faux1<<endl;
    cout<<faux2<<endl;
    cout<<faux3<<endl;

    Date add =  un + 100;
    Date sub = deux - 100 ;

    cout<<add<<endl;
    cout<<sub<<endl;


    add++;
    sub--;

    
    cout<<add<<endl;
    cout<<sub<<endl;

    faux1.setDay(2);
    cout<<faux1<<endl;
    faux1.setDay(32);
    cout<<faux1<<endl;
    faux1.setDay(2);
    faux1.setMonth(13);
    cout<<faux1<<endl;

    return 0;
}