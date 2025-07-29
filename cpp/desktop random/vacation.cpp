using namespace std;
#include<iostream>
class Vacation{
   char interest [40];
   double budget;
    int days;
    public:
    Vacation(){
    	strcpy(this->interest,"Not Given");
    	this->budget=0.0;
    	this->days=0;
	}
	Vacation(char*interest,double budget,int days){
    	strcpy(this->interest,interest);
    	this->budget=budget;
    	this->days=days;
	}
	void set_interest(char*interest){
		strcpy(this->interest,interest);
	}
	char* get_interest(){
		return this->interest;
	}
	void set_budget(double budget){
	    this->budget=budget;
	}
	double get_budget(){
		return this->budget;
	}
	void set_days(int days){
		this->days=days;
	}
	int get_days(){
		return this->days;
	}
	void display(){
		cout<<"Interest :- "<<this->interest<<endl;
		cout<<"Budget   :- "<<this->budget<<endl;
		cout<<"days     :- "<<this->days<<endl;
	}
}; // vaction ends here
class AdventureVacation:public Vacation{
   char	Preferred_Activities[50];
   char Adventure_Level[50];
   public:
   AdventureVacation(char*interest,double budget,int days,char*activities,char*level):Vacation(interest,budget,days){
   	strcpy(this->Preferred_Activities,activities);
   	strcpy(this->Adventure_Level,level);
   }
   AdventureVacation():Vacation(){
   	strcpy(this->Preferred_Activities,"not given");
   	strcpy(this->Adventure_Level,"not given");
   }
   void set_activities(char *activities){
   	strcpy(this->Preferred_Activities,activities);
   }
   char* get_preferred_activities(){
   	return this->Preferred_Activities;
   }
   void set_level(char*level){
   	strcpy(this->Adventure_Level,level);	
   }
   char* get_adventure_level(){
   	return this->Adventure_Level;
   }
   void display(){
   	Vacation::display();
   	cout<<"Preferred Activities :- "<<this->Preferred_Activities<<endl;
   	cout<<"Adventure Level      :- "<<this->Adventure_Level<<endl;
   }
    void suggest_destinations() {
    cout << "\nSuggested Adventure Destinations in and around Pune, Maharashtra:\n";

    // Destination 1: Lonavala
    if (this->get_budget() >= 3000 && this->get_days() >= 1 &&
        strstr(this->get_preferred_activities(), "Trekking") != NULL) {
        cout << "- Lonavala: Ideal for trekking, camping, and waterfall exploration. (Budget ~ ?3000)\n";
    }

    // Destination 2: Kamshet
    if (this->get_budget() >= 5000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Paragliding") != NULL) {
        cout << "- Kamshet: Known for paragliding and scenic hill views. (Budget ~ ?5000)\n";
    }

    // Destination 3: Mahabaleshwar
    if (this->get_budget() >= 4000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Nature Walks") != NULL) {
        cout << "- Mahabaleshwar: Famous for nature walks, boating, and strawberry farms. (Budget ~ ?4000)\n";
    }

    // Destination 4: Sinhagad Fort
    if (this->get_budget() >= 2000 && this->get_days() >= 1 &&
        strstr(this->get_preferred_activities(), "Trekking") != NULL) {
        cout << "- Sinhagad Fort: A historical trekking spot near Pune. (Budget ~ ?2000)\n";
    }

    // Destination 5: Panchgani
    if (this->get_budget() >= 4500 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Hiking") != NULL) {
        cout << "- Panchgani: Known for its beautiful plateau and hiking trails. (Budget ~ ?4500)\n";
    }

    // Destination 6: Bhimashankar
    if (this->get_budget() >= 3500 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Trekking") != NULL) {
        cout << "- Bhimashankar: A trekking spot with a mix of religious significance and nature. (Budget ~ ?3500)\n";
    }

    // Destination 7: Kolad
    if (this->get_budget() >= 6000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Rafting") != NULL) {
        cout << "- Kolad: Famous for river rafting and camping. (Budget ~ ?6000)\n";
    }

    // Destination 8: Lavasa
    if (this->get_budget() >= 4000 && this->get_days() >= 1 &&
        strstr(this->get_preferred_activities(), "Cycling") != NULL) {
        cout << "- Lavasa: Ideal for cycling and leisure activities by the waterfront. (Budget ~ ?4000)\n";
    }

    // Destination 9: Matheran
    if (this->get_budget() >= 3000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Hiking") != NULL) {
        cout << "- Matheran: A serene hill station perfect for hiking and enjoying nature. (Budget ~ ?3000)\n";
    }

    // Destination 10: Torna Fort
    if (this->get_budget() >= 2500 && this->get_days() >= 1 &&
        strstr(this->get_preferred_activities(), "Trekking") != NULL &&
        strcmp(this->get_adventure_level(), "Medium") == 0) {
        cout << "- Torna Fort: A challenging trek with stunning views. (Budget ~ ?2500)\n";
    }

    // Destination 11: Rajmachi
    if (this->get_budget() >= 3000 && this->get_days() >= 1 &&
        strstr(this->get_preferred_activities(), "Camping") != NULL) {
        cout << "- Rajmachi: Great for camping and night treks. (Budget ~ ?3000)\n";
    }

    // Destination 12: Harishchandragad
    if (this->get_budget() >= 5000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Trekking") != NULL &&
        strcmp(this->get_adventure_level(), "Hard") == 0) {
        cout << "- Harishchandragad: A tough trek with rewarding views, especially during the monsoon. (Budget ~ ?5000)\n";
    }

    // Destination 13: Alibaug
    if (this->get_budget() >= 6000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Beach Activities") != NULL) {
        cout << "- Alibaug: Perfect for beachside camping and watersports. (Budget ~ ?6000)\n";
    }

    // Destination 14: Mulshi Dam
    if (this->get_budget() >= 2500 && this->get_days() >= 1 &&
        strstr(this->get_preferred_activities(), "Relaxation") != NULL) {
        cout << "- Mulshi Dam: A serene spot for relaxation and enjoying lake views. (Budget ~ ?2500)\n";
    }

    // Destination 15: Kaas Plateau
    if (this->get_budget() >= 4000 && this->get_days() >= 2 &&
        strstr(this->get_preferred_activities(), "Nature Walks") != NULL) {
        cout << "- Kaas Plateau: A UNESCO World Heritage site known as the 'Valley of Flowers.' (Budget ~ ?4000)\n";
    }

    cout << "\nIf no destinations were suggested, please adjust your inputs for a better match.\n";
}


};
int main(){
	
}


