// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "head.h"

using namespace std;

void vectorText();
void vectorText2(vector<string> &text);
void upperWords();
void addVector(vector<int> vec);

int main()
{
#if 0
    //init vector with () and {}
    vector<int> v1(10);//10 elements in v1
    vector<int> v2{ 10 };//1 elements in v2

    vector<int> vec;
    for (int i = 0; i < 100; ++i)
    {
        vec.push_back(i);
    }

    //vectorText();

    vector<string> text;
    vectorText2(text);

    for (auto i : text)
    {
        cout << i << endl;
    }

    vector<int> v{ 1,2,3,4,5,6,7,8,9 };
    for (auto& i : v)
    {
        i *= i;
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
#endif
    //upperWords();

    vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
    vector<int> v2{ 1,2,3,4,5,6,7,8,9,10 };

    addVector(v1);
    addVector(v2);
    return 0;
}

void vectorText()
{
    vector<string> text;
    string word;
    while (cin >> word)
    {
        text.push_back(word);
    }

    for (auto i : text)
    {
        cout << i << endl;
    }
}

void vectorText2(vector<string>& text)
{
    string word;
    while (cin >> word)
    {
        text.push_back(word);
    }
}

void upperWords()
{
    vector<string> str;

    string word;
    while (cin >> word)
    {
        for (auto& c : word)
        {
            c = toupper(c);
        }
        str.push_back(word);
    }

    for (auto i : str)
    {
        cout << i << endl;
    }
}

void addVector(vector<int> vec)
{
    decltype(vec.size()) len = vec.size();

    for (decltype(len) i = 0; i < len - 1; ++i)
    {
        cout << vec[i] + vec[i + 1] << " ";
    }
    cout << endl;

    if (!(len % 2))
    {
        for (decltype(len) i = 0; i < len / 2; ++i)
        {
            cout << vec[i] + vec[len - 1 - i] << " ";
        }
        cout << endl;
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
