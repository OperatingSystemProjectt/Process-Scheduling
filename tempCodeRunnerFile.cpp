		for(int i=0  ; i<L ; ++i){
                for(int j=0 ; j<N ; ++j){
                if(Queue[i][j].id ==0 ) continue;
                Queue[i][j].tat = Queue[i][j].finishtime - Queue[i][j].arrivaltime;
                Queue[i][j].responsetime = Queue[i][j].fresponsetime - Queue[i][j].arrivaltime;
                    printf("[%d]      %d                  %d                 %d               %d            %d\n",Queue[i][j].id,Queue[i][j].fresponsetime,Queue[i][j].arrivaltime,Queue[i][j].finishtime,Queue[i][j].responsetime,Queue[i][j].tat);
            }
            puts("");
        }