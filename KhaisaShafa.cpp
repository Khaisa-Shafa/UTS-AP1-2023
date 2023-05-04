#include <iostream>
using namespace std;

void DiamondUp(int row)
{
//it means row + space + row for every row
//initial space -> 0
//initial stars -> row;

int space=0;
for (int star = row - 1; star > 0; star--)
    {
        for (int k = star; k > 0; k--) cout <<"*"; //Left

        for (int k = 0; k < space; k++) cout <<"  "; //MidSpace
        
        for (int k = star; k > 0; k--) cout <<"*"; //Right
        
        space++;
        cout << endl;
    }
}
void DiamondDown (int row) 
{
    int space;
    space = row-1;
    for(int star = 1; star < row; star++)
    {
	    for(int k = 0; k < star; k++) cout<<"*"; //Left

	    for(int k = 0; k < ((2*row)-(2*star)-2);k++)cout<<" "; //MidSpace

	    for(int k = star; k > 0; k--) cout<<"*"; //Right

        space--;
        cout<<endl;
    }
}
    
void solve(int row) 
{
    DiamondUp(row);
    DiamondDown(row);
}

int main(void)
{
	int row;

	cout<<"Enter number of rows : ";
	cin>>row;

    solve(row);
    
    return 0;
}

