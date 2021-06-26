#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

string ari(string);
int ncharacters(string, int);
int nwords(string, int);
int nsentences(string, int);
string readability_index(int, int, int);
string grade_level(int);

string ari(string s){

    int l = strlen(s);
    int characters = ncharacters(s,l);
    int words = nwords(s,l);
    int sentences = nsentences(s,l); 
    string grade = readability_index(characters, words, sentences);
    
    return grade;
}

int ncharacters(string s, int len){

    int characters = 0;
    for(int i=0; i<len; i++){
        if(isalnum(s[i])){
            characters++;
        }
    }
    return characters;
}

int nwords(string s, int len){

    int words = 0;
    for(int i=0; i<len; i++){
        if(s[i]==' '){
           words++; 
        }       
    }
    return words;
}

int nsentences(string s, int len){

    int sentences = 0;
    for(int i=0; i<len; i++){
        if(s[i]=='.' || s[i]=='?' || s[i]=='!'){
            sentences++;
        }
    }
    return sentences;
}

string readability_index(int ch, int w, int sen){

   int ari =ceil(4.71 * ch/w + 0.5 * w/sen - 21.43);
   
   return grade_level(ari);  
}

string grade_level(int score){
   if(score == 1){
        return "Kindergarten";
   }else if (score == 2){
        return "First/Second Grade";
   }else if (score == 3){
        return "Third Grade";
   }else if (score == 4){
        return "Fourth Grade";
   }else if (score == 5){
        return "Fifth Grade";
   }else if (score == 6){
        return "Sixth Grade";
   }else if (score == 7){
        return "Seventh Grade";
   }else if (score == 8){
        return "Eighth Grade";
   }else if (score == 9){
        return "Ninth Grade";
   }else if (score == 10){
        return "Tenth Grade";
   }else if (score == 11){
        return "Eleventh Grade";
   }else if (score == 12){
        return "Twelfth grade";
   }else if (score == 13){
        return "College student";
   }else if (score == 14){
        return "Professor";
   }
}
