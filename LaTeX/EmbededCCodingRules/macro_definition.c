// This is permitted
#define RESET_RECEPTION_FLAG    bReceptionFlag = FALSE
#define SET_RECEPTION_FLAG      bReceptionFlag = TRUE
  
// This is forbidden
#define RESET_FLAG( bFlag )     ( bFlag = FALSE )
#define SET_FLAG( bFlag )       ( bFlag = TRUE )

