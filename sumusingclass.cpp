#include<iostream>
class Addition{
    private:
    int num1,num2,sum;
    public:
    void input(){
        std::cout<<"enter two numbers:";
        std::cin>>num1>>num2;
    }
    void calculate(){
        sum=num1+num2;
    }
    void output(){
        std::cout<<"the sum of"<< num1 <<"and"<< num2 <<"is"<< sum <<std::endl;
    }
};

int main(){
    Addition add;
    add.input();
    add.calculate();
    add.output();

return 0;
}