#include <iostream>
#define MAX 50

class x_arr
{
    private:
        double x[MAX];
    public:
        double &operator[](unsigned int i)
        {
            if(i>=MAX)
            {
                std::cerr << "Oh fuck off" << std::endl;
                exit(1);
            }
            return x[i]; 
        }
        static int MaxIndex(){return MAX-1;}
};

int main()
{
    x_arr a;
    int i;
    for(i=0;i<a.MaxIndex();i++)
        a[i] = i;
    for(i=0;i<a.MaxIndex();i++)
        std::cout << a[i] << " ";
    return 0;
}