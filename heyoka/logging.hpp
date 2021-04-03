// Copyright 2020, 2021 Francesco Biscani (bluescarni@gmail.com), Dario Izzo (dario.izzo@gmail.com)
//
// This file is part of the heyoka.py library.
//
// This Source Code Form is subject to the terms of the Mozilla
// Public License v. 2.0. If a copy of the MPL was not distributed
// with this file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef HEYOKA_PY_LOGGING_HPP
#define HEYOKA_PY_LOGGING_HPP

#include <pybind11/pybind11.h>

namespace heyoka_py
{

namespace py = pybind11;

void enable_logging();

void test_debug_msg();
void test_info_msg();
void test_warning_msg();
void test_error_msg();
void test_critical_msg();

void expose_logging_setters(py::module_ &);

} // namespace heyoka_py

#endif