#include <iostream>
#include <fstream>


using namespace std;

class ReadFile {
public:

        string message;

public:
  void run(void) {
        ifstream fileData("Data1.txt");
        message = "x";
        while (message != "") {
            getline(fileData, message);
            cout<<message<<endl;
        }
  }

};

int main ()
{
  ReadFile cs;
  cs.run();

  cin.get();
  return 0;
}

