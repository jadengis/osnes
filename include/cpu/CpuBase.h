//===-- include/cpu/cpu.h - Cpu Base Class ----------------------*- C++ -*-===//
//
//                           The OsNES Project
//
// This file is distributed under GPL v2. See LICENSE.md for details.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains the Cpu template which serves as an abstract base class
/// for all Cpu style classes in the OsNES project.
///
//===----------------------------------------------------------------------===//
#include "common/CommonTypes.h"

#ifndef CPU_BASE_H
#define CPU_BASE_H

namespace Cpu {

class CpuBase {
  public:
    virtual ~CpuBase() {};
    virtual void init() = 0;
    virtual void run() = 0;
    virtual void trace() = 0;
    virtual void shutdown() = 0;
};

} // namespace Cpu

#endif // CPU_BASE_H //