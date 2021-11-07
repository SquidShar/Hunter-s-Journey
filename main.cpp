#include <iostream>
#include <cstdlib>


using namespace std;

bool isDead(int &hp);
string btry(string &input);
void el();
// void forestScenery();
int main() {
  //whatever the title of the game is.
  string titleName = "A Hunter's Journey";
  string start;
  string input;
  int hp = 100;
  int atk = 0;
  int def = 0;
  int wolfHp = 125;
  //amount of lives you get when starting the game



  cout << "Welcome to " << titleName << ", Player" << endl;
  cout << "Would you like to start (Yes or No): ";
  cin >> start;
  cout << endl;
  

  while(start != "Yes"){
      if(start == "No"){
          exit(0);
      }
      cout << "Would you like to start (Yes or No): ";
      cin >> start;
      cout << endl;
  }
  cout << "You wake up and consider the possible events to come today. You collect your equipment and items from the bedside table and get out of bed to get ready for the big day ahead" << endl;

  el();

  cout << "**You obtain a wooden shield and a sword**" << endl;

  el();
  
  cout << "The wooden cabin you call home is warm and cozy despite the fact you lack material possessions. It is a largely empty area with the exception of the table decorating the center and the kitchen area surrounding the interior. Your bed is in a corner of your cabin, beside it the fireplace crackles softly as a reminder of its warm existence. You check your cabinets and fridge and notice you are low on meat. Your stomach grumbles loudly. Would you like to go out and hunt? (Yes or No): ";
  cin >> input;
  el();
  btry(input);
  el();

  if (input == "Yes"){
    cout << "As you step outside your cabin, you see two prominent things in your vision. To your left, you see a very large lake that appears to be brimming with fish. To your right, you see a thick evergreen forest that must be brimming with prey. Where do you go? (Lake or Forest): ";
    cin >> input;
    el();
    while(!(input == "Lake" || input == "Forest")){
    cout << "Input only Lake or Forest" << endl;
    cin >> input;
    }
    el();

    if (input == "Lake"){
      cout << "You go to the lake, noticing you don't have a fishing rod, so you have to fish the rough way. How would you like to catch the fish(Hands or Teeth): ";
      cin >> input;
      el();
      while(!(input == "Hands" || input == "Teeth")){
        cout << "Input only Hands or Teeth" << endl;
        cin >> input;
      }
        if(input == "Hands"){
           cout << "With your hands  (You attempt to grab the fish with your hands and find out they are very, very, slippery. With some finesse and fidgeting you manage to grab the tail of a decently sized fish. It thrashes in your grip before you manage to incapacitate it. You laugh giddy at the thought of getting to eat well tonight and immediately set off for home.)" << endl;
           exit(0);

        }
        if(input == "Teeth"){
            cout << "With your teeth (You see a nice big fish in the center of the lake, immediately you lunge at it trying to grab it with your mouth, but as you were running you failed to notice the slippery rocks underneath you and you slammed face first into them. Dismayed, you stand up and realize you are badly bruised and bleeding from the mouth and forehead. You decide to give up on getting meat for today and decide to go home instead to nurse your wounds.)" << endl;
            exit(0);
        }
      el();
    }
    else {
      cout << "You notice some potential bandits interrogating some other hunters you know. The bandits seem hostile. What do you do? (Intervene or Keep_walking): ";
      cin >> input;
      el();
      while(!(input == "Intervene" || input == "Keep_walking")){
        cout << "Input only Intervene or Keep_walking" << endl;
        cin >> input;
      }
      el();
      if(input == "Intervene"){
        cout << "You put on the scariest face you can muster and approach the bandits. They don’t notice you until it's too late. You have your sword right at their leader’s neck and you make a bluff to try to get them to back down. They put down their weapons and flee the scene. Your hunter friends thank you profusely. With a job well done, you head deeper into the woods."<< endl << "As you’re traveling through the woods, you see a single lone wolf prowling around and decide it would make for a very good meal, mostly because you’re starving at this point. You ready your sword and charge towards it, ready to engage in combat." << endl;

        cout << "Current Hp: " << hp << endl;
        cout << "Wolf's Hp: " << wolfHp << endl;
        string fightChoices;
        cout << "You are met with a dire wolf" << endl;
        cout << "Whatever will you do against such a foe (attack, kite, flee)" << endl;
        cin >> fightChoices;
        while(!isDead(hp)){
          while(!(fightChoices == "attack" || fightChoices == "kite" || fightChoices == "flee")){
            cout << "Input only attack kite or flee" << endl;
            cin >> fightChoices;
          }
          if(fightChoices == "attack"){
            cout << "You slash at the great beast able to draw blood. However the quick beast slashed back as well lunging towards your legs" << endl; 
            wolfHp -= 25;
            cout << "Current Hp: " << hp << endl;
            cout << "Wolf's Hp: " << wolfHp << endl;
            isDead(hp);
          }
          if(fightChoices == "kite"){
            cout << "The great beast lunges at you but with your quick reactions, you are able to dodge the attack with its claws on scraping your clothing" << endl;
            hp -= 5;
            cout << "Current Hp: " << hp << endl;
            cout << "Wolf's Hp: " << wolfHp << endl;
            isDead(hp);
          }
          if(fightChoices == "flee"){
            cout << "You think you can escape from such a beast? The beast runs at you as you scream in fear. The wolf grapples you to the ground and bites out a healthy portion of your abdomen" << endl;
            hp -= 100;
            isDead(hp);
            cout << "You die to your own wounds. The beast continues to eat your body, limb by limb." << endl;
            exit(0);
          }
          cout << "What is your next Move (attack, kite, flee)" <<    endl;
          cin >> fightChoices;
          if(wolfHp < 1){
          cout << "Right as you land the last hit, the bloodied wolf, with its last ounce of strength,lets out a blood curdling howl before collapsing onto the floor, dead from its wounds. As you begin to catch your breath, you hear the howl of another wolf. Then two! Then four! Four angry looking wolves emerge from the shrubbery ready to avenge their fallen friend. Knowing that this might be the end, you close your eyes for one last moment of peace before meeting your very violent end. However, that end never comes. It feels like an eternity goes by before you open your eyes. When you finally open them, you find the once angry wolves dead on the ground covered in arrows like porcupines. As you scan the area to find the source of these arrows, you see your hunter friends looking at you concerned. They approach you and patch up your wounds. Gazing upon the now five dead wolves, you see a bountiful feast is in order. You and your friends carry the wolf meat back to your house to prepare for a meal. You guys hold a bountiful feast with much merriment and full bellies. Boy, you sure are glad you helped your hunter friends when you did!";
          exit(0);
          }

        }
        
        




      }
      else {
         cout << "As you walk beyond the sound, you hear a sickening crunch and a thud. You turn around in horror as you realize they had killed some acquaintances you interacted with previously. As you backed away in fear they heard you and were yelling to give chase. You burst into a run and attempt to lose them in the thick trees." << endl << "You stumble and trip over the root of a fallen tree, you curse and panic as you realize that the bandits were catching up and will have you surrounded. You stagger to your feet only to meet the tip of a razor sharp blade. You quickly attempt to draw your own blade before you feel a burst of pain radiating from your chest as another bandit stabs you deeply with their blade. As you collapse to your side you hear menacing laughter before the world fades away";
         exit(0);

      }
      el();
      



    }
  }
  else {
    cout << "Your hesitation and laziness gives way to stubbornness as you refuse to believe that you are capable of starving, a day becomes two, and two becomes three, until a couple of weeks later some local hunters and gatherers come across your cabin only to find you dead in your sleep having died of starvation and the freezing weather." << endl;
  }
  


  return 0;
}


//Implementation
bool isDead(int &hp){
    return hp < 1;
}

string btry(string &input){
  while(!(input == "Yes" || input == "No")){
    cout << "Input only Yes or No" << endl;
    cin >> input;
  }
  return input;
}

void el(){
  cout << endl;
}

// void forestScenery(){
//   cout << "^  ^  ^   ^      ___I_      ^  ^   ^  ^  ^   ^  ^ " << endl; 
//    cout <<     "/|\/|\/|\ /|\    /\-_--\    /|\/|\ /|\/|\/|\ /|\/|\ " <<
//          "/|\/|\/|\ /|\   /  \_-__\   /|\/|\ /|\/|\/|\ /|\/|\" <<
//          "/|\/|\/|\ /|\   |[]| [] |   /|\/|\ /|\/|\/|\ /|\/|\" <<
// } 



// token
