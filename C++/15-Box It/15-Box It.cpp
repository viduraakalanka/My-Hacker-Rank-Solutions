#include<bits/stdc++.h>

using namespace std;

class Box{
    private:
        int l,b,h;

    public:
        Box(){
           l=0;
           b=0;
           h=0;
        }

        Box(int length, int bredth, int height){
            l = length;
            b = bredth;
            h = height;
        }

        Box(const Box &box_obj){
            l = box_obj.l;
            b = box_obj.b;
            h = box_obj.h;
        }

        int getLength(){
            return l;
        }

        int getBredth(){
            return b;
        }

        int getHeight(){
            return h;
        }

        long long int CalculateVolume(){
            long long int vol =l;
            vol = vol*b*h;
            return vol;
        }

        bool operator<(Box& b){
            if (this->l < b.l){
                return true;
            }
            else if (this->b < b.b && this->l==b.l){
                return true;
            }
            else if (this->h < b.h && this->l==b.l && this->b==b.b){
                return true;
            }
            else{
                return false;
            }
        }

        friend ostream& operator<<(ostream& out, const Box& B){
            out << B.l << " " << B.b << " " << B.h;
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
