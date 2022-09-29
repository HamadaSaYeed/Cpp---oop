
#include <iostream>

using namespace std;

template <class T>  // template

class number
{
 private:
        
        T first , second;
 public: 
 
        number(T first , T second)
        {
                this-> first  = first;
                this-> second  = second;
        }
        
        T max()
        {
                if(first > second)
                {
                        return first;
                }
                else
                {
                        return second;
                }
        }
        
        
};


int main()
{
    number<int> op(5,7);
    cout << op.max();
    return 0;
}
