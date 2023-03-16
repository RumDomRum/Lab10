#ifndef DOMFUNCTIONS_H
#define DOMFUNCTIONS_H
#include <iostream>


class Racing
{
    public:
   Racing(std::string n, int l)
   {
    RaceLength=l;
    raceName=n;

   }
    void getLength()
    {
        std::cout<<RaceLength<<std::endl;
    }
private:
    int RaceLength;
    std::string raceName;
 };







#endif