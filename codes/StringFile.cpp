#include <iostream>
#include <fstream>

using namespace std;

class StringFile {
public:
        string question1, question2;
        string answer1, answer2;

public:
  void run(void) {
        ifstream fileData("Data.txt");
        question1 = "What is your name? ";
        cout << question1;
        getline(fileData, answer1);
        cout << answer1 << endl;
        question2 = "Where do you lives? ";
        cout << question2;
        getline(fileData,  answer2);
        cout << answer2 << endl;
        cout << "Hello, " << answer1;
        cout << " from " << answer2 << "!" << endl;

        while (!fileData.eof()) {
            getline(fileData, answer2);
            cout << answer2 << endl;
        }
  }
  void first10() {
        cout << "Show first 10 letters from name : ";
        for (int i=0;i<10;i++) {
            if (i < answer1.length())
               cout<<answer1[i];
        }
        cout<<endl;
  }
};

int main ()
{
  StringFile cs;
  cs.run();
  cs.first10();

  cin.get();
  return 0;
}
