#include <iostream>
#include <fstream>


using namespace std;
class Test
{
    private:
        string text;
        int i_data;
        double d_data;
    public:
        Test(string t_text = "test_string", int t_i_data = 0, double t_d_data = 0)
        {
            text = t_text;
            i_data = t_i_data;
            d_data = t_d_data;
        }
        ~Test(){};
        void display()
        {
            cout << "str: " << text << " int: " << i_data << " double: " << d_data << endl;
        }
        ostream& t_write(ostream& out) const
        {
            out << text << " " << i_data << " " << d_data << "\n" <<endl;
            return out;
        }
        istream& t_read(istream & in)
        {
            getline(in, text, '\0');
            return in;
        }
};

int main(int argc, char *argv[])
{
    ifstream in_file(argv[1]);
    char line[88];
    ofstream out_file("out.txt");
    Test t1;
    if(in_file.is_open() && out_file.is_open())
    {
        while(!in_file.eof())
        {
            t1.t_read(in_file);
            t1.display();
            t1.t_write(out_file);
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