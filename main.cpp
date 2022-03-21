#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
int main(){
    int random = 0, err = 0, banned = 5;
     unsigned long Loop_end = 2, bot_score=0, my_score=0, max;
     short mv_gv = 2;
     #include"v_finished.cpp"
     #include"v_string_style.cpp"
     for(jv;jv<=r_jf;jv++){
         cout<<zvr; if(jv==r_jf){
             cout<<endl;for(i;i<=nrv;i++){
                 cout<<fr;
                 if(i==nrv){
                     cout<<softwareNm<<endl;
                 }
             }
         }
     }
     for(rfg;rfg<=r_jf;rfg++){
         cout<< zvr; if(rfg==r_jf){
              cout<<endl<<endl;
         }
     }
    string computer = "unknown", username,  my_choice;
    for(short Loop_ends=1;Loop_ends<mv_gv;){
     cout   <<  "Username: ";
     cin >> username;
    if(username == "." || username == "," || username == ".." || username == ",,"  || username == "*" || username == "**" || username == "?" || username == "??" || username == ";" || username == "::" || username == ";;" || username == "\""  || username == "=" || username == "$" || username == "@" || username == "_" || username == "-"){
     cout<< "Masukkan username dengan benar!" << endl;
    } else {
     Loop_ends=2;
    }   }
    cout << "Sampai skor berapa: ";
     cin >> max;
    cout << "____________________________\n";
     for(int i=1; i<Loop_end;){
   cout << "\n" << username << ": ";
   cin >>  my_choice;
      if(my_choice == "batu" || my_choice == "kertas" || my_choice == "gunting"){
    srand(time(NULL));
        const char array[3] = {'0', '1', '2'};
        short bot = rand() % 3;
        random = bot;if(random == 0){
       computer ="batu";
 } else if (random == 1){
       computer = "Gunting";
 } else if(random == 2){
       computer = "Kertas";
 } cout << "Bot: " << computer << endl;
   if(my_choice == "batu" && computer == "Gunting"){
                  my_score++;
                  cout << endl << "Kamu menang\n";
                  cout << "bot score: " << bot_score << " my score: " << my_score << endl;
                 #include"results.cpp"
   } else if ( my_choice == "batu" && computer == "Kertas"){
                  bot_score++;
                  cout << endl << "Kamu kalah\n";
                   cout << "bot score: " << bot_score << " my score: " << my_score << endl;
                   #include"results.cpp"
   }else if(my_choice == "gunting" && computer == "kertas"){
                  my_score++;
                  cout << endl << "Kamu menang\n";
                   cout << "bot score: " << bot_score << " my score: " << my_score << endl;
   } else if ( my_choice == "kertas" && computer == "batu"){
                  my_score++;
                  cout << endl << "Kamu menang\n";
                   cout << "bot score: " << bot_score << " my score: " << my_score << endl;               
                   #include"results.cpp"
   } else  if(my_choice == "kertas" && computer == "Gunting"){
                  bot_score++;
                  cout << endl << "Kamu kalah \n";
                   cout << "bot score: " << bot_score << " my score: " << my_score << endl;              
                   #include"results.cpp"
   } else if ( my_choice == "gunting" && computer == "batu"){
                  bot_score++;
                  cout << endl << "Kamu kalah\n";
                   cout << "bot score: " << bot_score << " my score: " << my_score << endl;               
                   #include"results.cpp"
   }  else  {
                       cout << "\nSeri\n";
                        cout << "bot score: " << bot_score << " my score: " << my_score << endl;        
                        #include"results.cpp"
   }cout<< "_____________________________\n";            }else {
          cout << "\nApa itu \'" << my_choice << "\'?\n";err++;if(err<banned){
               cout <<  "Kamu sudah salah dalam " << err << " kali\n";cout << "\n_____________________________\n";
                       }  if(err >= banned){
                            i = 2;cout << "\nKamu di banned karena sudah melakukan kesalahan dalam " << err << " kali\n";
 cout << "\n_____________________________\n";
                       }
      }
     }
        cin.get();
        return 0;
}