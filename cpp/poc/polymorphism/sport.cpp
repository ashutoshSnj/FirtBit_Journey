using namespace std;
#include<iostream>
struct Sport{
	char team_name[50];  
    int players_per_team;  
    int duration; 
    virtual void display(){
    	  cout<<"Team name : "<<this->team_name<<endl;
        cout<<"Players per Team: "<<this->players_per_team<<endl;
        cout<<"Duration: "<<this->duration<<endl;
	}
	 void setteamname(const char*str) {
        strcpy(this->team_name, str);
    }

    void setPlayer(int a) {
        this->players_per_team = a;
    }
    void setduration(int a){
    	this->duration=a;
	}
	char* getteamname() {
        return this->team_name;
    }

    int getPlayer() {
        return this->players_per_team;
    }
    int getduration(int a){
    	return this->duration;
	}
    Sport(){
    	strcpy(this->team_name,"not given");
    	this->players_per_team=0;
    	this->duration=0;
	}
	Sport(char*str,int a,int b){
    	strcpy(this->team_name,str);
    	this->players_per_team=a;
    	this->duration=b;
	}
	 virtual void play() {
        cout<<"Playing some sport."<<endl;
    }

	
};//spost end here
struct Cricket:public Sport{
	int overs_per_innings; 
    char match_type[20];
    void display(){
    	Sport::display();
    	cout<<"Overs per Innings: "<< this->overs_per_innings<<endl;
        cout<<"Match Type: "<<this->match_type<<endl;
	}
	 void setovers(int a) {
        this->overs_per_innings = a;
    }

    void setmatchtype(const char* str) {
        strcpy(this->match_type, str);
    }
     int setovers() {
        return this->overs_per_innings;
    }

      char* setmatchtype() {
        return this->match_type;
    }
    Cricket():Sport(){
    	this->overs_per_innings=0;
    	strcpy(this->match_type,"not given");
	}
	Cricket(char*teamname,int player,int duration,int over,char*matchtype):Sport(teamname,player,duration){
    	this->overs_per_innings=over;
    	strcpy(this->match_type,matchtype);
	}
	void play() {
        cout<<"Playing cricket through bat and ball."<<endl;
    }
	// cricet end here
};
struct Football:public Sport {
	 int goals_per_match;
    int fifa_ranking; 
	 void display(){
	  Sport::display();
	 	cout<<"Goals per Match: "<<this->goals_per_match<<endl;
        cout<<"FIFA Ranking: "<<this->fifa_ranking<<endl;
	 }
	  void setgoals(int a) {
        this->goals_per_match = a;
    }

    void setfifarank(int a) {
        this->fifa_ranking = a;
    }
    int getgoals() {
        return this->goals_per_match;
    }

    int getfifarank() {
        return this->fifa_ranking;
    }
    Football():Sport(){
    	this->goals_per_match=0;
    	this->fifa_ranking=0;
	}
	Football(char*teamname,int player,int duration,int goal,int fifaranking):Sport(teamname,player,duration){
    	this->goals_per_match=goal;
    	this->fifa_ranking=fifaranking;
	}
	 void play() {
        cout<<"Playing football by kicking the ball."<<endl;
    }
};
int main(){
    Sport *ptr;
    
	Cricket C1("indian",14,2,20,"T-20");
	ptr=&C1;
  ptr->display();
  ptr->play();
	

	Football F1(" Blue Tigers",11,90,45,102);
	ptr=&F1;
	ptr->display();
	ptr->play();
}