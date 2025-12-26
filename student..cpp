#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void addstudent(vector<int> &roll , vector<string> &name , vector<int> &marks)
{
   int m , r;
   string s;
   cout<<"ENTER ROLL NO";
   cin>>r;
   cout<<"enter marks"<<endl;
   cin>>m;
   cin.ignore();
   cout<<"enter your name "<<endl;
   getline(cin , s) ;
   roll.push_back(r);
   marks.push_back(m);
   name.push_back(s);
}

void displaystudent(vector<int> &roll , vector<string> &name , vector<int> &marks)
{
   cout<<"roll no \t name \t marks"<<endl;
   for(int i=0;i<roll.size();i++){
      cout<<roll[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
   }
}
void sortmarks(vector<int> &roll , vector<string> &name , vector<int> &marks)
{
int i,j;
for(i=0;i<marks.size();i++)
{
   for(j=0;j<marks.size();j++){
      if(marks[i]<marks[j]){
         swap(marks[i], marks[j]);
         swap(roll[i] , roll[j]);
         swap(name[i], name[j]);
      }
   }
}
cout<<"students sorted by marks are"<<endl;
}
void findtopper(vector<int> &roll , vector<string> &name , vector<int> &marks)
{
   int idx;
   idx=0;
   for(int i=0;i<marks.size();i++){

   
   if(marks[i]>marks[idx]){
      idx=i;
   }
}
cout<<"toppers details are"<<endl;
cout<< "marks \t"<<marks[idx]<<"\n";
cout<<"name \t" <<name[idx]<<"\n";
cout<< "roll no \t"<<roll[idx]<<"\n";

}
int main(){
   vector<int> roll , marks;
   vector<string> name;
   int choice;
   do{
   cout<<"enter your choice"<<endl;
   cout<<"1. enter student details"<<endl;
   cout<<"2 . display students"<<endl;
   cout<<"3. display toppers details"<<endl;
   cout<< "4. students sorted by marks"<<endl;
   cout<< "5. exit"<<endl;
   cin>> choice;
   switch(choice)
   {
   case 1 :
   addstudent(roll , name , marks);
   break;
   case 2 :
   displaystudent(roll , name , marks);
   break;
   case 3:
   findtopper(roll , name , marks);
   break;
   case 4:
   sortmarks(roll , name , marks);
   break;
   case 5:
   break;
   } 
}while(choice!=5);
return 0;  

   
}


