#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	    int n;//number of round .
	    
	    cin>>n;
	    int winner=0;
	    int player1=0,player2=0; //cumulative  scores of players .initially taken as 0.
	    
	    int lead=0;// maximum lead after every round .initially taken as 0.
	    
	    while(n--){
	        int p1,p2;
	        cin>>p1>>p2;
	        player1+=p1; // p1 is the score of that particular round .
	                        // player1 is the total score of that player .
	                        
	        player2+=p2;// p2 is the score of that particular round .
	                        // player2 is the total score of that player .
	                        
	        int x=abs(player1-player2);// calculating lead after every particular round.
	                                    // x is current lead .hence lead of current round.
	        if(x>lead){   //if current lead if greater than maximum lead .means the mamximum lead would be change . winner would also be updated.
	        
	            lead=x; // mamimum lead changed.
	            
	            player1>player2?winner=1:winner=2;//winner updated .
	        }
	    }
	    cout<<winner<<" "<<lead<<endl; // display output 
	
	return 0;
}

