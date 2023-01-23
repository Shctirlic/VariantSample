#include <iostream>
#include <map>

using namespace std;


class qew
{
private:

public:

	template<typename T>
	T sum(T x)
	{
		return x;
	}


	template<typename T, class... Args>
	T sum(T x, Args... args)
	{

		return x + sum(args...);
	}


};


int main()
{
	qew obj;

	cout << obj.sum(1, 2, 3, 4, 5) << endl;