/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <Array.hpp>

namespace cpu
{

template<typename T, af_pad_type edge_pad>
Array<T> * medfilt(const Array<T> &in, dim_type w_len, dim_type w_wid);

}
