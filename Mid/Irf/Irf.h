/*
 * Copyright (c) 2021
 * Team, JSC.
 * All Rights Reserved
 *
 *
 * Description:
 *
 * Author: Truongvv
 *
 * Last Changed By:  $Author: Truongvv $
 * Revision:         $Revision: 1.0 $
 * Last Changed:     $Date: x/x/xxxx $
 */

#ifndef IRF_H_

#define IRF_H_


/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/


/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/

#define IRF_BUFF_MAX        50
#define IRF_QUEUE_MAX       3
#define IRF_HEADER          4


typedef struct irf_Command_t
{
    u8 command;
    u8 type;
    u8 senquence;
    u8 length;
    u8 buff[IRF_BUFF_MAX];
} irf_Command_t;



/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/

void IRF_Init(void);

static void IRF_CallBackHandle(void);

void IRF_Proc(void);

void IRF_Send(u8* buff, u8 length);

#endif	/* IRF_H_ */