#include <stdio.h>

typedef enum{
    STATE_IDLE,
    STATE_RUNNING,
    STATE_STOPPED,
    STATE_ERROR,
} SYSTEM_STATE;

SYSTEM_STATE checkSYSTEM(){
    SYSTEM_STATE state = STATE_IDLE;
    if( state == STATE_IDLE ){
        return STATE_RUNNING;
    }
    else if( state == STATE_RUNNING ){
        return STATE_STOPPED;
    }
    else if( state == STATE_STOPPED ){
        return STATE_ERROR;
    }
    else{
        return STATE_IDLE;
    }
}

void main(){

}