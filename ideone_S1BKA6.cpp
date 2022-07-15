#include <iostream>
#include <cmath>
using namespace std;

int main() {
int item1;
int item2;
int item3; 
int total;
int answer;
item1 = rand()%+6;
item2 = rand()%+11;
item3 = rand()%+21;
total = item1 +item2+item3;

cout <<"$"<<item1<<endl;
cout <<"$"<<item2<<endl;
cout <<"$"<<item3<<endl;
cout <<"Your total is $"<<total<<endl;
cout<<"Will you be paying with cash or card?"<<endl;

if ( total >=20 ){
      cout<<"I will pay with card."<<endl;
   }
   else if (total <20){
      cout<<"I will pay with cash."<<endl;
   }


	return 0;
}