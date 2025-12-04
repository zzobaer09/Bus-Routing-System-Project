#include <stdio.h>


struct route{
    char bus[20][10][20];
    char len[20][30][20];
};

typedef struct route Route;


void route_finder(char from[], char to[], char returnarr[]){
    
    char *len[100][100][100] = {
        {{"bus1","bus2"},{"mirpur","kalshi","ecb","jomuna"}},
        {{"bus3","bus4"},{"rampura","badda","gulshan","jomuna"}}
    };
    
    int fromflag=-1;
    int toflag=-1;
    
    int from_indx=0;
    int to_indx = 0;
    
    for(int i = 0; i<100;i++){
        for(int j = 0; j<100;j++){
            for(int k = 0; k<100;k++){
                
                if(from==len[i][j][k]){ 
                   fromflag=1;
                   from_indx = k;
                   //printf("%s\n",len[i][j][k]);
                }
                
                if(to==len[i][j][k])
                {
                    toflag=1;
                    to_indx = k;
                    //printf("%s\n",len[i][j][k]);
                }
                
            } 
            // if(toflag==1&&fromflag==1) {
            //     printf("both found ->%s->%s\n",len[i][j][from_indx],len[i][j][to_indx]);
            //     fromflag=-1;
            //     toflag=-1;
                
            // }
            if(toflag!=1||fromflag!=1){
                fromflag=-1;
                toflag=-1;
            }
        }   
    }
};

void test_struct_working(Route test){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%s->%s\n",test.bus[i][j],test.len[i][j]);

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
    //route_finder("mirpur","jomuna",bus_name);
    
    test_struct_working(AllRouteAndBus);
    
    return 0;
}