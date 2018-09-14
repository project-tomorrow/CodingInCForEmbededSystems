// This has to be avoided
#define IS_RESP_OK(resp, len, parser)                       \
    {                                                       \
        parser = TEST_OK;                                   \
        if( len == 2 )                                      \
        {                                                   \
            if (!((resp[0] == 0x30) && (resp[1] == 0x0D)))  \
            {                                               \
                parser = TEST_ERR_RESP;                     \
            }                                               \
        }                                                   \
        else                                                \
        {                                                   \
            parser = TEST_ERR_RESP;                         \
        }                                                   \
}
  
// This is strongly recommended
static void isRespOK( uint8_t *resp, uint8_t len, uint8_t *parser )
{
    parser = TEST_OK;
    if (len == 2)
    {
        if (!((resp[0] == 0x30) && (resp[1] == 0x0D)))
        {
            *parser = TEST_ERR_RESP;
        }
    }
    else
    {
        *parser = TEST_ERR_RESP;
    }
 
    return;
}

