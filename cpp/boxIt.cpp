#include<bits/stdc++.h>

using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

class Box
{
    private:
        int l, b, h;
    public:
        Box();
        Box(int, int, int);
        Box(Box&);
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
        bool operator<(Box&);
        friend ostream& operator<<(ostream&, Box&);
};

// The class should have the following functions : 

// Constructors: 
// Box();
Box::Box()
{
    l = 0;
    b = 0;
    h = 0;
}

// Box(int,int,int);
Box::Box(int i, int j, int k)
{
    l = i;
    b = j;
    h = k;
}

// Box(Box);
Box::Box(Box& o)
{
    l = o.l;
    b = o.b;
    h = o.h;
}

// int getLength(); // Return box's length
int Box::getLength()
{
    return l;
}

// int getBreadth (); // Return box's breadth
int Box::getBreadth()
{
    return b;
}

// int getHeight ();  //Return box's height
int Box::getHeight()
{
    return h;
}

// long CalculateVolume(); // Return the volume of the box
long long Box::CalculateVolume()
{
    return 1LL * l * b * h;
}

//Overload operator < as specified
//bool operator<(Box& b)
bool Box::operator<(Box& o)
{
    if (l < o.l)
        return true;
    else if (b < o.b && l == o.l)
        return true;
    else if (h < o.h && l == o.l && b == o.b)
        return true;
    return false;
}

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
ostream& operator<<(ostream& out, Box& B)
{
    out << B.l << " "
        << B.b << " "
        << B.h;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}