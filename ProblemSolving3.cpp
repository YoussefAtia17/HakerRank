#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
        int _length;
        int _breadth;
        int _height;
    public:
        Box():_length(0), _breadth(0), _height(0){}


        
        Box(int l , int b , int h){
            _length = l;
            _height = h;
            _breadth = b;
        }    
        Box(const Box &Copy){
            _length = Copy._length;
            _height = Copy._height;
            _breadth = Copy._breadth;
            
        }
        
        void set_length(int l){
            _length = l;
        }
        int getLength(){
            return _length;
        }
         void set_breadth(int b){
            _breadth = b;
        }
        int getBreadth(){
            return _breadth;
        }
         void set_height(int h){
            _height = h;
        }
        int getHeight(){
            return _height;
        }
        
        long long CalculateVolume(){
            return (1LL*_length*_height*_breadth);
        }
        bool operator<(const Box &b) const {
        if (_length < b._length) return true;
        if (_length == b._length && _breadth < b._breadth) return true;
        if (_length == b._length && _breadth == b._breadth && _height < b._height) return true;
        return false;
    }

   
    friend ostream &operator<<(ostream &out, const Box &b) {
        out << b._length << " " << b._breadth << " " << b._height;
        return out;
    }
        
};     

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