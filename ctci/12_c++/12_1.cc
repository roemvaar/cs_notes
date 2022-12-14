// 12.1 Last K Lines: write a method to print the last K lines of an
// input file using C++

#include <iostream>
#include <fstream>
#include <string>

// TODO: Improve algorithm by using the ios::end offset counted from the end of the stream
// Current algorithm
// 1) Reads all the file and counts the number of lines
// 2) Returns the stream pointer to the beginning
// 3) Re-reads all the lines again until it finds the num_lines - k and
// prints the last k lines
// This is sub-optimal, we can just start at the end instead, and only read
// the necessary lines

void LastKLines(int k)
{
    std::string line;
    std::ifstream file("lorem_ipsum.txt");

    if (file.is_open())
    {
        // Count total number of lines
        int num_lines = 0;

        while (getline(file, line))
        {
            num_lines++;
        }

        // Print last k lines
        file.clear();
        file.seekg(0);
        int curr_line = 0;

        while (getline(file, line))
        {
            if (curr_line >= num_lines - k) {
                std::cout << line << std::endl;
            }

            curr_line++;
        }

        file.close();
    }
    else {
        std::cout << "Unable to open the text file" << std::endl;
    }
}

int main()
{
    LastKLines(10);

    return 0;
}
