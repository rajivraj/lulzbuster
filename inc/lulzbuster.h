/*******************************************************************************
*                ____                     _ __                                 *
*     ___  __ __/ / /__ ___ ______ ______(_) /___ __                           *
*    / _ \/ // / / (_-</ -_) __/ // / __/ / __/ // /                           *
*   /_//_/\_,_/_/_/___/\__/\__/\_,_/_/ /_/\__/\_, /                            *
*                                            /___/ team                        *
*                                                                              *
* lulzbuster                                                                   *
* A very fast and smart web-dir/file enumeration tool written in C.            *
*                                                                              *
* FILE                                                                         *
* lulzbuster.h                                                                 *
*                                                                              *
* AUTHOR                                                                       *
* noptrix@nullsecurity.net                                                     *
*                                                                              *
*******************************************************************************/


#ifndef LULZBUSTER_H
#define LULZBUSTER_H


/*******************************************************************************
 * INCLUDES
 ******************************************************************************/


/* sys includes */


/* own includes */
#include "opts.h"


/*******************************************************************************
 * MACROS
 ******************************************************************************/


/* lulzbuster banner*/
#define BANNER "\
    __      __      __               __\n\
   / /_  __/ /___  / /_  __  _______/ /____  _____\n\
  / / / / / /_  / / __ \\/ / / / ___/ __/ _ \\/ ___/\n\
 / / /_/ / / / /_/ /_/ / /_/ (__  ) /_/  __/ /\n\
/_/\\__,_/_/ /___/_.___/\\__,_/____/\\__/\\___/_/\n\n"

#define SUB_BANNER "\
        --==[ by nullsecurity.net ] ==--\n"


/* lulzbuster version */
#define VERSION "lulzbuster v1.4.0-dev"


/*******************************************************************************
 * VARS
 ******************************************************************************/


/*******************************************************************************
 * FUNCTION PROTOTYPES
 ******************************************************************************/


/* function prototypes */
void free_lulzbuster(opts_T *);
void free_parsed_url(url_T);


#endif

