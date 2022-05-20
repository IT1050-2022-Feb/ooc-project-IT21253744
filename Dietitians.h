/*Created by IT21254802
Perera K.A.W.D*/

class Dietitians{
protected:
char dietitianId[6];
char dietitianName[20];
char dietitianEmail[20];
char dietitianQualification[20];

public:
//Defult constructor
Dietitians();
//overlord constructer
Dietitians(const char dieId[], const char dieName[], const char dieEmail[], const char dieQuali[] );
void updateDietPlan();
void displayDetails();
//Destructer
~Dietitians();

};