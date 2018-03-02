
#include <cstdio>

class USERDATA
{
public: // public user
	int nAge;
	char szName[32];
	
	void Print(void)
	{
		printf("%d, %s\n", nAge, szName);
	} 
};

int main()
{
	USERDATA user = { 20, "dongbin"};
	user.Print();

	return 0;
}
