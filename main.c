// Online C compiler to run C program online
#include <stdio.h>
void route(char from[], char to[], char returnarr[]){
    
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
int main() {
    
    char bus_name[999];
    route("mirpur","jomuna",bus_name);
    
    
    return 0;
}