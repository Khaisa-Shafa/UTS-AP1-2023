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
	    for(int i = 0; i < star; i++) cout<<"*"; //Left

	    for(int i = 0; i < ((2*row)-(2*star)-2);i++)cout<<" "; //MidSpace

	    for(int i = star; i > 0; i--) cout<<"*"; //Right

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


