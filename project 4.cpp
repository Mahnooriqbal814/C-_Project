#include <iostream>
using namespace std;

    int main()
    {
    	int width, lngth, area, peri;
		cout << "\n\n Find the Area and Perimeter of a Square :\n";
		cout << "-------------------------------------------------\n";		
        cout<<" Input the length of the square : ";
    	cin>>lngth;
		cout<<" Input the width of the square : ";
    	cin>>width;
    	area=(lngth*width);
		peri=2*(lngth+width);
        cout<<" The area of the square is : "<< area << endl;
        cout<<" The perimeter of the square is : "<< peri << endl;		
        cout << endl;
        return 0;
    }
