#include<iostream>
#include<unistd.h>
int main(int argc, char* argv[])
{
using namespace std;
if(argc!=3)
{
cout<<"Usage ./a.out sourcedile destination file \n";
return 0;
}
if(link(argv[1],argv[2])==1)
{
cout<<"Can'r Link \n";
return 1;
}
else
{
cout<<"Files have been linked\n";
}
return 0;
}
