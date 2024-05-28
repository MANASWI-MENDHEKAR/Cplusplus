#include<iostream>
using namespace std;
class objectcounter{
    private :
    static int objectcount;

    public:       
                //constructor
    objectcounter(){
        ++objectcount;
    }

    static int getobjectcount(){
        return objectcount;
    }
};

int objectcounter::objectcount = 0 ;
int main(){
    cout<< " initial object count:"<<objectcounter::getobjectcount()<<endl;
    objectcounter obj1;
    cout<< "object count after creating obj 1:"<<objectcounter::getobjectcount()<<endl;
    objectcounter obj2;
    cout<< "object count after creating obj 2:"<<objectcounter::getobjectcount()<<endl;

    return 0;
}
