/*
 * Copyright 2014 LKC Technologies, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MMC_H
#define MMC_H

#include <stddef.h>
#include <stdio.h>

void mmc_pretty_size(off_t amount, char *out);
off_t mmc_device_size(const char *devpath);
char *mmc_find_device();
void mmc_attempt_umount_all(const char *mmc_path);

#endif // MMC_H
