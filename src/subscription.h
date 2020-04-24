/*
 * OCILIB - C Driver for Oracle (C Wrapper for Oracle OCI)
 *
 * Website: http://www.ocilib.net
 *
 * Copyright (c) 2007-2020 Vincent ROGIER <vince.rogier@ocilib.net>
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
 
#ifndef OCILIB_SUBSCRIPTION_H_INCLUDED
#define OCILIB_SUBSCRIPTION_H_INCLUDED

#include "types.h"

boolean SubscriptionClose
(
    OCI_Subscription *sub
);

boolean SubscriptionDetachConnection
(
    OCI_Connection *con
);

OCI_Subscription * SubscriptionRegister
(
    OCI_Connection   *con,
    const otext  *name,
    unsigned int  type,
    POCI_NOTIFY handler,
    unsigned int  port,
    unsigned int  timeout
);

boolean SubscriptionUnregister
(
    OCI_Subscription *sub
);

boolean SubscriptionAddStatement
(
    OCI_Subscription *sub,
    OCI_Statement    *stmt
);

const otext * SubscriptionGetName
(
    OCI_Subscription *sub
);

unsigned int SubscriptionGetPort
(
    OCI_Subscription *sub
);

unsigned int SubscriptionGetTimeout
(
    OCI_Subscription *sub
);

OCI_Connection * SubscriptionGetConnection
(
    OCI_Subscription *sub
);

#endif /* OCILIB_SUBSCRIPTION_H_INCLUDED */
