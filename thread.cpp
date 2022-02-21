#include <iostream>
#include <thread>
#include <vector>

using namespace std;

int A, Size;
vector<vector<int>> vec;
vector<int> d_id;

int factorial(int x)
{
    int fac;

    if (x == 0 || x == 1)
        return 1;
    return fac = x * factorial(x - 1);
}

void func(int num, int id)
{
    int temp = factorial(num);
    A += temp;
    d_id.push_back(id);
    d_id.push_back(A);
    vec.push_back(d_id);
    d_id.clear();
}

void childThread(vector<int> val)
{
    vector<thread> threads;

    for (int i = 0; i < Size; i++)
    {
        threads.push_back(thread(func, val[i], i));
        threads[i].join();
    }
}

int main()
{
    int num;
    cout << "Enter the Size of Input: ";
    cin >> Size;

    vector<int> val;
    for (int i = 1; i <= Size; i++)
    {
        val.push_back(i);
    }

    thread Parent(childThread, val);
    Parent.join();

    for (int i = 0; i < vec.size(); i++)
    {
        cout << "This is Thread " << vec[i][0] << ", factorial = " << vec[i][1] << endl;
    }

    cout << endl
         << "This is main thread.Value of A = " << A << "." << endl;
}
