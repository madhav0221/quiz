#include<iostream>
using namespace std;
char c, o, p;
int marks;
int main(){
    int score = 0;
    int PlayQuiz(void);
    Play:
    score = PlayQuiz();
   cout<<"Your total score is: "<<score<<endl;
if(score>=6){
    cout<<"You passed the quiz."<<endl;
    cout<<"Do you want to play the quiz again?, Type 'y' or 'Y' for yes or 'n' or 'N' for no."<<endl;
    cin>> p;
    if(p== 'y'|| p=='Y'){
       goto Play;
    }
    else{
        cout<<"Thanks for playing."<<endl;
    }
}
else{
    cout<<"You failed the quiz."<< endl;
    cout<<"Do you want to play the quiz again?, Type 'y' or 'Y' for yes or 'n' or 'N' for no."<<endl;
    cin>> p;
    if(p== 'y'|| p=='Y'){ 
       goto Play;
    }
    else{
        cout<<"Thanks for playing."<<endl;
    }
}
}
int PlayQuiz(){
    Play1:
    cout<<"-------Welcome to the game-------" << endl;
    cout<<"-> Read the instructions below:" << endl;
    cout<<"1. Quiz contains total 10 questions." << endl;
    cout<<"2. One mark will be awarded for each right answer."<<endl;
    cout<<"3. There is no negative marking."<<endl;
    cout<<"4. You need to score six or more to pass the quiz."<<endl;
    cout<<"5. Press 'S' or 's' to start the quiz."<<endl;
    cout<<"6. Type the correct option to get marks."<<endl;
    
cin>>c;
if(c=='S'||c=='s'){
    cout<<"Q1. What is the capital of India?"<<endl;
    cout<<"(a) New Delhi  (b) Mumbai (c) Kolkata (d) Chennai "<<endl; 
    cin>>o;
    if(o=='a'||o=='A'){
    marks++;
    }
    else{
        marks = marks + 0;
    }
    cout<<"Q2. Who is the PM of India?"<<endl;
    cout<<"(a) Narendra Modi  (b) Rahul Gandhi (c) Arvinda Kejriwal (d) Manmohan Singh "<<endl; 
    cin>>o;
    if(o=='a'||o=='A'){
    marks++;
    }
    else{
        marks= marks + 0;
    }
    cout<<"Q3. What is the national bird of India?"<<endl;
    cout<<"(a) Parrot  (b) Peacock(c) Pigeon (d) Sparrow "<<endl; 
    cin>>o;
    if(o=='b'||o=='B'){
    marks++;
    }
    else{
        marks=marks+ 0;
    }
    cout<<"Q4. What is the national animal of India?"<<endl;
    cout<<"(a) Tiger  (b) Lion (c) Zebra (d) Leopard "<<endl; 
    cin>>o;
    if(o=='a'||o=='A'){
    marks++;
    }
    else{
        marks = marks + 0;
    }
   cout<<"Q5. What is the national flower of India?"<<endl;
    cout<<"(a) Rose (b) Lily (c) Sunflower (d) Lotus "<<endl; 
    cin>>o;
    if(o=='d'||o=='D'){
    marks++;
    }
    else{
        marks = marks + 0;
    }
    cout<<"Q6. Who is the CM of Bihar?"<<endl;
    cout<<"(a) Narendra Modi  (b) Rahul Gandhi (c) Arvinda Kejriwal (d) Nitish Kumar "<<endl; 
    cin>>o;
    if(o=='d'||o=='D'){
    marks++;
    }
    else{
        marks= marks + 0;
    }
    cout<<"Q7. What is the capital of Bihar?"<<endl;
    cout<<"(a) Lucknow  (b) Ranchi (c) Patna (d) Chandigarh "<<endl; 
    cin>>o;
    if(o=='c'||o=='C'){
    marks++;
    }
    else{
        marks= marks + 0;
    }
    cout<<"Q8. Who is the CM of UP?"<<endl;
    cout<<"(a) Narendra Modi  (b) Rahul Gandhi (c) Arvinda Kejriwal (d) Yogi adityanath "<<endl; 
    cin>>o;
    if(o=='d'||o=='D'){
    marks++;
    }
    else{
        marks= marks + 0;
    }
    cout<<"Q9. What is the capital of Jharkhand?"<<endl;
    cout<<"(a) Lucknow  (b) Ranchi (c) Patna (d) Chandigarh "<<endl; 
    cin>>o;
    if(o=='b'||o=='B'){
    marks++;
    }
    else{
        marks= marks + 0;
    }
    cout<<"Q10. Who is the leader of Congress?"<<endl;
    cout<<"(a) Narendra Modi  (b) Rahul Gandhi (c) Arvinda Kejriwal (d) Yogi adityanath "<<endl; 
    cin>>o;
    if(o=='b'||o=='B'){
    marks++;
    }
    else{
        marks= marks + 0;
    }
}
else{
    cout<<"Please enter 'S' or's' to start."<<endl;
    goto Play1;
}
return marks;
}