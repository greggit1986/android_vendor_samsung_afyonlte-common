/*
 * Copyright (C) 2017 The LineageOS Project
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

#include <cstdint>

extern "C" {
    // Return 0 to simulate a successful Qualcomm QMI operation
    int32_t qmi_wds_remove_delegated_ipv6_prefix() {
        return 0;
    }
    int32_t qmi_wds_bind_subscription() {
        return 0; 
    }
    int32_t qmi_qos_bind_subscription() {
        return 0; 
    }
}

