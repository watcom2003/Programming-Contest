#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class GraphExam {
public:
    char node1,node2;
    int weight;

    GraphExam(char n1, char n2, int w) {
        this->node1 = n1;
        this->node2 = n2;
        this->weight = w;
    };
    bool operator<(const GraphExam& g1) const{return this->weight < g1.weight;}
    bool operator>(const GraphExam& g1) const{return this->weight > g1.weight;}
    bool operator==(const char& g1) const {return this->node1 == g1;}
};

void printNode(const vector<GraphExam>& v1,set<char>& s1) {

    for(auto gd : v1) {
        s1.insert(gd.node1);
        s1.insert(gd.node2);
    }
}
void printPath(const vector<GraphExam>& v1, const set<char>& s1) {
    vector<GraphExam>::iterator vt;
    GraphExam minG('x','x',99);
    for (auto ss : s1) {
      minG.weight = 99;
      for (auto vv : v1) {
        if (vv.node1== ss)
           if (vv.weight <= minG.weight){
               minG = vv;
               cout << minG.node1 << " , " << minG.node2 << " => " << minG.weight << endl;
           }

      }
    }
}

int main()
{
    set<char> nodeName;
    GraphExam data[] = {GraphExam('a','b',2),GraphExam('b','a',2),GraphExam('b','c',1),GraphExam('b','d',3),
                        GraphExam('c','b',1),GraphExam('d','b',3),GraphExam('c','d',1),GraphExam('c','e',5),
                        GraphExam('d','c',1),GraphExam('e','c',5),GraphExam('d','e',1),GraphExam('e','d',1),
                        GraphExam('e','f',1),GraphExam('f','e',1)};
   vector<GraphExam> vec(data, data + sizeof(data) / sizeof(data[0]));
   std::sort(vec.begin(), vec.end(),less<GraphExam>());
   for (auto val:vec) {
    cout << val.node1 << " , " << val.node2 << " , " << val.weight << endl;
   }
   printNode(vec, nodeName);
   for(auto ss: nodeName) cout << ss << endl;
   printPath(vec, nodeName);
}

