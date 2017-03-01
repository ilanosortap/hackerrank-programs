#include<iostream>
#include<stack>
#include<queue>
#include<cmath>
#include<cstdlib>
#include<vector>
#include<list>

using namespace std;

struct Airplane{
	int flightno;
	int fu;  //fuel units in the flight
    int p;
  bool operator<(const Airplane& other)const
{
  return p > other.p;
} 
}a;

int main(){
priority_queue<Airplane> runaway;
priority_queue<Airplane> arrive;
priority_queue<Airplane> departq;
priority_queue<Airplane> landq;
vector<Airplane> ar;
int parrived;int aavg=0,davg=0,noa=0,nota=0,notc=0;
int c=1;
for(int i=0;i<1000;i++){
	int t=6;int sl=0,sd=0,noc=0;int land=0,depart=0;
	int parrived=rand()%10+1; //cout<<parrived<<"\n";
	land+=parrived;
	
	for(int j=0;j<parrived;j++)
	{ a.flightno=c; 
	  a.fu=rand()%25+2;
	  a.p=2;
	  arrive.push(a);
	  ar.push_back(a);
	  c++;
	}
	
cout<<"Time interval : "<<i+1<<"\n";
 while((t>=0)&&(runaway.size()<=6)&&(arrive.size()>=0)){
 	a=arrive.top();
 	a.p=3;
 	arrive.pop();
 	ar.pop_back();
 	runaway.push(a);
 	landq.push(a);
 	sl++;noa++;
 	departq.push(a);
 	runaway.pop();
 	sd++;nota++;depart++;
 	for(vector<Airplane>::iterator k=ar.begin();k<ar.end();k++){
 		 a=*k;
		 a.fu--; 
 		if(a.fu<=2){
 			a.p=1;
		 }
 		if(a.fu==0){
 			noc++;
 			notc++;
 			arrive.pop();
 			ar.pop_back();
		 }}
	t--;
	 }//
	 aavg+=parrived;
	 davg+=depart;
	 cout<<"Landing queue size : "<<land<<"\n";
	 cout<<"Lsnding flights : \n";
	 while(!landq.empty()){
	 	a=landq.top();
	     cout<<"Flight no. :"<<a.flightno<<"\n";
		  landq.pop();	
	 }
	 cout<<"Departing queue size: "<<depart<<"\n";
	 cout<<"Departed flights : \n";
	 while(!departq.empty()){
	 	a=departq.top();
	 	cout<<"Flight no. :"<<a.flightno<<"\n";
	 	departq.pop();
	 }
	 cout<<"Total no. sucessful landing : "<<sl<<"\n";
	 cout<<"Total no. of sucessful departures : "<<sd<<"\n";
	 cout<<"No. of crashes : "<<noc<<"\n";
	 
 }
 cout<<"END RESULTS \n";
 cout<<"___________\n";
 cout<<"Average queue length for departure and arrival : "<<davg/1000<<" & "<<aavg/1000<<"\n";
 cout<<"Total no of arrivals and takeoffs : "<<noa<<" & "<<nota<<"\n";
 cout<<"No. of crashes due to fuel exahustion : "<<notc<<"\n";

return 0;}
