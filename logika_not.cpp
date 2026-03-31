#include <iostream>
using namespace std;

int main(){
  float nilbi,nilm,rerata;
  string status;

  cout<<"masukkan nilai mtk = ";
  cin>>nilm;
  cout<<"masukkan nilai bahasa ingris = ";
  cin>> nilbi;

  rerata = (nilbi+nilm)/2;

  if (!(rerata < 60) )
      status = "lulus";
  else
      status = "tidak lulus";
  
  cout<<"status kelulusan = "<<status<<" ,dengan nilai rata rata = "<<rerata<<endl;


}