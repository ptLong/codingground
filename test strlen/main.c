#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

static uint8_t
tagData[] = {  0xC1, 0x01,             // TNF, type len
                                0x00, 0x00, 0x00, 0x00, // payload len, default to 0
                                0x54,                   // wellknown type: Text
                                0x02, 0x65, 0x6E };     // UTF-8 en
int main()
{
    int i;
    uint32_t payload_len = 0xF88;
    uint32_t *p_len = (uint32_t *)&tagData[2];
    
    *p_len = htonl(payload_len);
    
    for(i = 0; i < 9; ++i){
        printf("-%02x-", tagData[i]);
    }
    printf("\nHello, World!\n");

    return 0;
}
