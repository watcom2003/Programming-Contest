#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class ArrayString {
public:
        vector<string> question;
        vector<string> answer;

  run(void) {
        ifstream fileData("data1.txt");

        string t;  int pos = 0;

        do {
        getline(fileData, t);
        if (t!="") question.push_back(t);

        getline(fileData, t);
        if (t!="") answer.push_back(t);

        if ((pos < question.size()) && (pos < answer.size())) {
            cout << question.at(pos) << endl;
            cout << answer.at(pos) << endl;
            pos++;
        }
        } while (!t.empty());

  }
  first10() {
        cout << "Get the first 10 letters ...." << endl;
        for (int i=0;i<10;i++) {
            if (i < answer[0].length())
               cout<<answer[0][i];
        }
        cout<<endl;
  }
  back2front() {
        cout << "Reverse letters  order ...." << endl;
        for (int i=answer[0].length()-1;i>=0;i--) {
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
  cs.back2front();


  return 0;
}

