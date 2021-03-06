/******************************************************************************
 *                                                                            *
 * Copyright (c) 2018, Tsung-Wei Huang, Chun-Xun Lin, and Martin D. F. Wong,  *
 * University of Illinois at Urbana-Champaign (UIUC), IL, USA.                *
 *                                                                            *
 * All Rights Reserved.                                                       *
 *                                                                            *
 * This program is free software. You can redistribute and/or modify          *
 * it in accordance with the terms of the accompanying license agreement.     *
 * See LICENSE in the top-level directory for details.                        *
 *                                                                            *
 ******************************************************************************/

#ifndef DTC_EXIT_HPP_
#define DTC_EXIT_HPP_

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

namespace dtc {

constexpr int EXIT_MASTER_FAILED = 100;
constexpr int EXIT_AGENT_FAILED = 101;
constexpr int EXIT_EXECUTOR_FAILED = 102;
constexpr int EXIT_BROKEN_CONNECTION = 110;
constexpr int EXIT_CRITICAL_STREAM = 111;
constexpr int EXIT_CONTAINER_SPAWN_FAILED = 112;
constexpr int EXIT_VERTEX_PROGRAM_FAILED = 113;


std::string status_to_string(int);

};  // End of namespace dtc. ----------------------------------------------------------------------


#endif

