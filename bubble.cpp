#include <stdio.h>
#include<iostream>
void swap(int &,int &);
using namespace std;
class bubble{
    int i,j,temp,a[50],size;
    public:
    void bubblesort(){
    cout<<" \n Enter array size( Max:50 ) :: ";
    cin>>size;
	cout<<"\nEnter array elements :: \n";

	for(i=0; i<size; i++)
	{
	    cout<<"\nEnter arr["<<i<<"] Element :: ";
		cin>>a[i];
	}

  cout<<"\nStored Data Before Sorting In Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

 for(i=0;i<size;i++)
 {
     for(j=0;j<size-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
             swap(a[j],a[j+1]);
         }
     }
 }
 cout<<"\n\nStored Data After Sorting In Array :: \n\n";

 for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

  cout<<"\n";

}
};
int main()
{
    std::cout<<"------Name: Subhajit Seal ,Roll:01, Section: CSE 3D-------";
    bubble B;
    B.bubblesort();
  return 0;

 }
 void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
