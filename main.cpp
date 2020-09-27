#include <iostream>

using namespace std;

int main()
{

    //0xAF = -81 = 175
    char    it_antenna_signal_char=0xAF;
    uint8_t it_antenna_signal_uint8_t=0xAF;

    printf(" %d \n ", it_antenna_signal_char);

    if (it_antenna_signal_uint8_t<127)
        printf("rssi : %d, ", it_antenna_signal_uint8_t -1);
    else
        printf("rssi : %d, ", it_antenna_signal_uint8_t -255 -1);
}
