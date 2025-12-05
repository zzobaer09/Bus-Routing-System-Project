#include <stdio.h>
#include <string.h>

struct route{
    char bus[20][10][20];
    char len[20][30][20];
};

typedef struct route Route;


void route_finder(char from[], char to[], char returnarr[],Route R){

    int fromflag=-1;
    int toflag=-1;
    
    int from_indx=0;
    int to_indx = 0;
    
    for(int i = 0; i<100;i++){
        for(int j = 0; j<100;j++){
            
            if(strcmp(from,R.len[i][j])==0){ 
                fromflag=1;
                from_indx = j;
                //printf("%s\n",R[i][j][k]);

            }
            
            if(strcmp(to,R.len[i][j])==0)
            {
                toflag=1;
                to_indx = j;
                //printf("%s\n",R[i][j][k]);

            }
            
        } 
        if(toflag==1&&fromflag==1) {
            printf("both found ->%s->%s\n",R.len[i][from_indx],R.len[i][to_indx]);
            fromflag=-1;
            toflag=-1;
            break;
        }
        if(toflag!=1||fromflag!=1){
            fromflag=-1;
            toflag=-1;
        }
  
    }
};

void All_Bus_and_len_print(Route test){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%s->%s\n",test.bus[i][j],test.len[i][k]);
            }
            printf("\n");
        }
        
    }
    
}


int main() {
    
    Route AllRouteAndBus = {
        {
            {"bus1","bus2"},
            {"bus3","bus4"}
        },
        {
            {"mirpur","kalshi","ecb","jomuna"},
            {"rampura","badda","gulshan","jomuna"}
        }
    };


    char bus_name[999];
    route_finder("kalshi","ecb",bus_name,AllRouteAndBus);
    printf("\n\n\n\n\n");
    All_Bus_and_len_print(AllRouteAndBus);
    
    return 0;
}