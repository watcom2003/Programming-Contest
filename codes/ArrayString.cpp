#include <iostream>
#include <fstream>


using namespace std;

class ArrayString {
public:

        string question[2] ;
        string answer[2] ;


public:
  void run(void) {

        ifstream fileData("Data1.txt");
        getline(fileData, question[0]);
        cout << question[0] << endl;
        getline(fileData, answer[0]);
        cout << answer[0] << endl;
        getline(fileData, question[1]);
        cout << question[1] << endl;
        getline(fileData,  answer[1]);
        cout << answer[1] << endl;
        cout << "Hello, " << answer[0];
        cout << " from " << answer[1] << "!\n";
  }
  void first10() {
        cout << "Get the first 10 letters ...." << endl;
        for (int i=0;i<10;i++) {
            if (i < answer[0].length())
               cout<<answer[0][i];
        }
        cout<<endl;
  }
};

int main ()
{
  ArrayString cs;
  cs.run();
  cs.first10();

  cin.get();
  return 0;
}

