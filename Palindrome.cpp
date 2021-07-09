#include <iostream>
using namespace std;
void is_palindrome(char*, int);


int main()
{
	char array[100];
	cin >> array;
	int length = strlen(array);
	is_palindrome(array,length);
	return 0;

}
void is_palindrome(char* arr, int l)
{
	char* ptr1 = arr;
	char* ptr2 = arr;
	while (*ptr2 != '\0') {
		ptr2++;
	}
	ptr2--;
	int i,count = 0;
	while(i<(l+1)/2)
	{
		if (*ptr1 != *ptr2)
		{
			count++;
		}
		ptr1++;
		ptr2--;
		i++;
	}
	if (count == 0)
		cout << "IS PALINDROME" << endl;
	else
		cout << "Not Palindrome" << endl;
}