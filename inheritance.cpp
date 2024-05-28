#include<iostream>
using namespace std;
class Base{
    private :
    int pvt=1;
    protected :
    int prot=2;
    public :
    int pub=3;

    int getprivate(){ return pvt;}

};
 class PublicDerived : public Base{
    public :
    int getprotected(){ return prot;}
    int getpublic(){ return pub; }

 };

 int main(){
    PublicDerived object1;
    cout<<"private = "<<object1.getprivate()<<endl;
    cout<<"protected = "<<object1.getprotected()<<endl;
    cout<<"public = "<<object1.getpublic()<<endl;
    
    return 0;    
}