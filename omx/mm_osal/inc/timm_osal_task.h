/*
 * Copyright (C) Texas Instruments - http://www.ti.com/
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _TIMM_OSAL_TASK_H_
#define _TIMM_OSAL_TASK_H_

#ifdef __cplusplus
extern "C"
{
#endif				/* __cplusplus */

/*******************************************************************************
* Includes
*******************************************************************************/

#include "timm_osal_types.h"

/*******************************************************************************
* Tasks
*******************************************************************************/

/**
* prototype for the task function
*/

	typedef void *(*TIMM_OSAL_TaskProc) (void *arg);	/*Linux */

	TIMM_OSAL_ERRORTYPE TIMM_OSAL_CreateTask(TIMM_OSAL_PTR * pTask,
	    TIMM_OSAL_TaskProc pFunc,
	    TIMM_OSAL_U32 uArgc,
	    TIMM_OSAL_PTR pArgv,
	    TIMM_OSAL_U32 uStackSize,
	    TIMM_OSAL_U32 uPriority, TIMM_OSAL_S8 * pName);

	TIMM_OSAL_ERRORTYPE TIMM_OSAL_DeleteTask(TIMM_OSAL_PTR pTask);

	TIMM_OSAL_ERRORTYPE TIMM_OSAL_SleepTask(TIMM_OSAL_U32 mSec);

#ifdef __cplusplus
}
#endif				/* __cplusplus */

#endif				/* _TIMM_OSAL_TASK_H_ */
