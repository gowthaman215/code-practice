#include<iostream>

class myclass
{
	int data;
	public:
	myclass()
	{
	}
	~myclass()
	{
	}
	void set(int data)
	{
		this->data=data;
	}
	int get()
	{
		return data;
	}
			   
};

int main()
{
	myclass obj;
	obj.set(10);
	std::cout << obj.get()<<std::endl;
}
