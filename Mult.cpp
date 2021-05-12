# include "Txlib.h"
# include "TxM_lib.h"

int main ()
{
    srand(time(0));
    int meetX = rand() % 1200;
    int meetY = rand() % 220;

    txCreateWindow(X, Y);
    txBegin();
    struct color cl = Becomes_Dark (100, 120, meetX, meetY, random(meetX), meetY);
    txSleep (700);
    This_is_Rabbit(cl.meetX, cl.meetY, cl.hedgX, cl.cloud_Len, cl.cloud, cl.sky);
    That_is_all();
    txEnd();
    return 0;
}
