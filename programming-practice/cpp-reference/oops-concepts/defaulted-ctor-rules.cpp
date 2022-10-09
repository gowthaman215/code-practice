// C++ code to demonstrate that
// non-special member functions
// can't be defaulted
class B {
public:

	// Error, func is not a special member function.
	int func() = default;
	
	// Error, constructor B(int, int) is not
	// a special member function.
	B(int, int) = default;

	// Error, constructor B(int=0)
	// has a default argument.
	B(int = 0) = default;
};

// driver program
int main()
{
	return 0;
}

