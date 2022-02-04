#include <iostream>


int main(int argc, char* argv[])
{
    for(auto i = 1; i < argc; i++)
    {
        cout << argv[i];
    }

    return 0;
}
 
