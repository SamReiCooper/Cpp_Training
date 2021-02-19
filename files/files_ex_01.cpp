#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in_file(argv[1]);
    char line[88];
    ofstream out_file("out.txt");
    if(in_file.is_open() && out_file.is_open())
    {
        while(!in_file.eof())
        {
            in_file.getline(line, 88);
            out_file << line << endl;
        }  
    }
    else
    {
        cout << "something went wrong" << endl;
        exit(1);
    }
    
    in_file.close();
    out_file.close();
    return 0;
}