#include<iostream>
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
    std::cout<< " initial object count:"<<objectcounter::getobjectcount()<<std::endl;
    objectcounter obj1;

    std::cout<< "object count after creating obj 1:"<<objectcounter::getobjectcount()<<std::endl;
    objectcounter obj2;
    std::cout<< "object count after creating obj 2:"<<objectcounter::getobjectcount()<<std::endl;

    return 0;


}
