// Evaluate the intersection and exclusive union of two vectors

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Prototypes
int  countOccurrences(vector<int> v, int key);
void showVector(vector<int> v, string msg);
vector<int> commonElements(vector<int> v1, vector<int> v2);
vector<int> exclusiveUnion(vector<int> v1, vector<int> v2);
// -----------------------------------------------------------------

int main()
{
    vector<int> v1{ 44, 22, 33, 11, };
    vector<int> v2{ 22, 33, 77 };
    showVector(v1, " v1 ");
    showVector(v2, " v2 ");

    vector<int> vresult = commonElements(v1, v2);
    showVector(vresult, " commonElements vresult ");


    vresult = exclusiveUnion(v1, v2);
    showVector(vresult, " exclusive union vresult ");

}

// -----------------------------------------------------------------

//How many times the key value appears in vector v?
int countOccurrences(vector<int> v, int key)
{
    int counter = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key) counter++;
    }
    return counter;
}

//Output: Elements that belong to both, v1 and v2
vector<int> commonElements(vector<int> v1, vector<int> v2)
{
    vector<int> vresult;
    for (int i1 = 0; i1 < v1.size(); i1++)
    {
        if ((countOccurrences(v2, v1[i1]) > 0)
            &&
            (countOccurrences(vresult, v1[i1]) == 0))
        {
            vresult.push_back(v1[i1]);
        }
    }
    return vresult;

}

//Display the data in vector v with optional caption (msg)
void showVector(vector<int> v, string msg)
{
    cout << msg << endl;
    cout << " ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }
    cout << endl;
}

//Output: Elements that belong exclusively to either v1 or v2
vector<int> exclusiveUnion(vector<int> v1, vector<int> v2)
{
    vector<int> vresult;
    for (int i = 0; i < v1.size(); i++)
    {
        if (countOccurrences(vresult, v1[i]) == 0
            &&
            countOccurrences(v2, v1[i]) == 0)
            vresult.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if (countOccurrences(vresult, v2[i]) == 0
            &&
            countOccurrences(v1, v2[i]) == 0)
            vresult.push_back(v2[i]);
    }

    return vresult;
}
