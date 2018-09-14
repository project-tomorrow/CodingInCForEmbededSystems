// This is forbidden
#define RESET_FOO_FLAG    bFooFlag = FALSE
#define SET_FOO_FLAG      bFooFlag = TRUE
  
// This is permitted
#define RESET_FLAG( bFlag )     ( (bFlag) = FALSE )
#define SET_FLAG( bFlag )       ( (bFlag) = TRUE )

