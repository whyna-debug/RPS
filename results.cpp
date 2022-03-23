if(bot_score == max or my_score == max){
    cout<< "\n_____________________________\n";
      i=2;
    if(bot_score>my_score){
        cout<<lost<<endl;
    }else if(bot_score<my_score){
        cout<<win<<endl;
    }
    cout<< "_____________________________\n\n";
    cout  << "             Hasil \n\n";cout<<"          Skor kamu: "<< my_score << endl;cout << "          Skor bot: "<< bot_score<< endl;
    
}