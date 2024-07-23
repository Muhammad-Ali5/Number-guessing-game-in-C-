#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Gauss_number{
	private:
		int num,choice,num_gusess;
		double c_guase;
		char option;
	public:
		void gaussing_number_game(){
			cout<<"\t-->Number Gausing Game.........."<<endl;
			cout<<"\tGauss the number Between the 1 to 100 :) "<<endl;
			cout<<"\t=========================================="<<endl;
			srand(time(0));
			c_guase=rand()%100+1;
			start:
			cout<<"Enter Your Gauss : "<<endl;
			while(true){
			cin>>num;
			if(num>c_guase){
				cout<<"You Gauss the greater number \n--> Gauss lower number :"<<endl;
				cout<<"----------------------------"<<endl;
			}
			else if (num<c_guase){
				cout<<"You Gauss the lower number \n--> Gauss greater number :"<<endl;
				cout<<"----------------------------"<<endl;
			}
			else{
				cout<<"Congrates :) you Gause the number in "<<num_gusess<<" attempts "<<endl;
				break;
			}
			num_gusess++;		
		}
		cout<<"==============================================="<<endl;
		cout<<"Do  you wanna try again :"<<endl;
		cout<<"Press y/Y for YES and n/N fo NO"<<endl;
		cin>>option;
		if(option=='y'||option=='Y'){
			goto start;
		}else{
			cout<<"Game successfuly terminated!"<<endl;
			exit(0);
		}
	}			
};
int main(){
	Gauss_number g_n;
	g_n.gaussing_number_game();	
	return 0;
}