#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost::filesystem;

int main()
{   
    cout << endl;
    cout << "ICON WHITENER By Luca Errani <luca.errani1@gmail.com>" << endl;
    cout << endl;

    path p("icons/");
    directory_iterator end;

    cout << "Whitened icons:" << endl;
    cout << endl;
    // Cycles through every file in the "icons/" directory
    for (directory_iterator it(p); it != end; ++it)
    {
        if (is_regular_file(it->path()))
        {
            string fileName = it->path().string();
            cout << fileName << endl;
            std::ifstream fileIn;
            std::ofstream fileOut;

            // Opens the old svg and create a new one with a "w" char at the end (white)
            fileIn.open(fileName);
            fileOut.open(fileName + "w");

            // For every line of the file, replaces (if exists)
            // every occurrence of "fill:#000000" with "fill:#ffffff"
            // which is from black to white
            while (!fileIn.eof())
            {
                string ss;
                fileIn >> ss;
            
                boost::replace_all(ss, "fill:#000000", "fill:#ffffff");
                
                fileOut << ss;
                fileOut << "\n";
            }
            fileIn.close();
            fileOut.close();

            // Deletes the old file
            remove(fileName);
            // Renames the new file as the old one
            rename(fileName +  "w", fileName);
        }
    }
    cout << "FINISHED" << endl;
    return 0;
}