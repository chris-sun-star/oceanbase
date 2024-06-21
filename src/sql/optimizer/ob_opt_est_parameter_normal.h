/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_SQL_OPTIMIZER_OB_OPT_EST_PARAMETER_NORMAL_
#define OCEANBASE_SQL_OPTIMIZER_OB_OPT_EST_PARAMETER_NORMAL_
#include "ob_opt_cost_model_parameter.h"

namespace oceanbase
{
namespace sql
{

const static double NORMAL_CPU_TUPLE_COST = 0.02977945030613315927249275026 * DEFAULT_CPU_SPEED;
const static double NORMAL_TABLE_SCAN_CPU_TUPLE_COST = 0.3717749711890249146505031527 * DEFAULT_CPU_SPEED;
const static double NORMAL_MICRO_BLOCK_SEQ_COST = 4.12032943880540981 * DEFAULT_DISK_SEQ_READ_SPEED / DEFAULT_MACR_BLOCK_SIZE;
const static double NORMAL_MICRO_BLOCK_RND_COST = 5.45276187553 * DEFAULT_DISK_RND_READ_SPEED / DEFAULT_MACR_BLOCK_SIZE;
const static double NORMAL_FETCH_ROW_RND_COST = 2.2477466668 * DEFAULT_CPU_SPEED;
const static double NORMAL_MATERIALIZE_PER_BYTE_WRITE_COST = 0.0003799844906944444444444444444 * DEFAULT_CPU_SPEED;
const static double NORMAL_READ_MATERIALIZED_PER_ROW_COST = 0.08075845740444444444444444444 * DEFAULT_CPU_SPEED;
const static double NORMAL_PER_AGGR_FUNC_COST = 0.03295337962222222222222222222 * DEFAULT_CPU_SPEED;
const static double NORMAL_PER_WIN_FUNC_COST = 0.4276335555833333333333333333 * DEFAULT_CPU_SPEED;
const static double NORMAL_CPU_OPERATOR_COST = 0.03295337962222222222222222222 * DEFAULT_CPU_SPEED;
const static double NORMAL_JOIN_PER_ROW_COST = 0.2924230170039462058068723292 * DEFAULT_CPU_SPEED;
const static double NORMAL_BUILD_HASH_PER_ROW_COST = 0.2518499446975396825396825399 * DEFAULT_CPU_SPEED;
const static double NORMAL_PROBE_HASH_PER_ROW_COST = 0.2320765365033553814947149724 * DEFAULT_CPU_SPEED;
const static double NORMAL_RESCAN_COST = 0.7380813333 * DEFAULT_CPU_SPEED;
const static double NORMAL_NETWORK_SER_PER_BYTE_COST = 0.0094539370039375 * DEFAULT_CPU_SPEED;
const static double NORMAL_NETWORK_DESER_PER_BYTE_COST = 0.0094539370039375 * DEFAULT_CPU_SPEED;
const static double NORMAL_NETWORK_TRANS_PER_BYTE_COST = 0.011832508338 * DEFAULT_NETWORK_SPEED;
const static double NORMAL_PX_RESCAN_PER_ROW_COST = 398.267410467 * DEFAULT_CPU_SPEED;
const static double NORMAL_PX_BATCH_RESCAN_PER_ROW_COST = 49.5841472833 * DEFAULT_CPU_SPEED;
const static double NORMAL_NL_SCAN_COST = 19.2 * DEFAULT_CPU_SPEED;
const static double NORMAL_BATCH_NL_SCAN_COST = 16.11 * DEFAULT_CPU_SPEED;
const static double NORMAL_NL_GET_COST = 8.24 * DEFAULT_CPU_SPEED;
const static double NORMAL_BATCH_NL_GET_COST = 6.76 * DEFAULT_CPU_SPEED;
const static double NORMAL_TABLE_LOOPUP_PER_ROW_RPC_COST = 20.9591092914652749211572741 * DEFAULT_CPU_SPEED;
const static double NORMAL_INSERT_PER_ROW_COST = 6.330037500000001 * DEFAULT_CPU_SPEED;
const static double NORMAL_INSERT_INDEX_PER_ROW_COST = 6.583673124999999 * DEFAULT_CPU_SPEED;
const static double NORMAL_INSERT_CHECK_PER_ROW_COST = 96.2424 * DEFAULT_CPU_SPEED;
const static double NORMAL_UPDATE_PER_ROW_COST = 7.562755000000001 * DEFAULT_CPU_SPEED;
const static double NORMAL_UPDATE_INDEX_PER_ROW_COST = 23.969286875 * DEFAULT_CPU_SPEED;
const static double NORMAL_UPDATE_CHECK_PER_ROW_COST = 92.15352 * DEFAULT_CPU_SPEED;
const static double NORMAL_DELETE_PER_ROW_COST = 5.0310162499999995 * DEFAULT_CPU_SPEED;
const static double NORMAL_DELETE_INDEX_PER_ROW_COST = 6.549611874999999 * DEFAULT_CPU_SPEED;
const static double NORMAL_DELETE_CHECK_PER_ROW_COST = 59.4583275 * DEFAULT_CPU_SPEED;
const static double NORMAL_SPATIAL_PER_ROW_COST = 3.2434868757557513 * DEFAULT_CPU_SPEED;
const static double NORMAL_RANGE_COST = 2.1 * DEFAULT_CPU_SPEED;

//project cost params
//row store
const static double NORMAL_ROW_STORE_PROJECT_COLUMN_SEQ_INT_COST = 0.04392826667 * DEFAULT_CPU_SPEED;
const static double NORMAL_ROW_STORE_PROJECT_COLUMN_SEQ_NUMBER_COST = 0.04187649999657894736842105263 * DEFAULT_CPU_SPEED;
const static double NORMAL_ROW_STORE_PROJECT_COLUMN_SEQ_CHAR_COST = 0.001149576877742598684210526316 * DEFAULT_CPU_SPEED;

const static double NORMAL_ROW_STORE_PROJECT_COLUMN_RND_INT_COST = 0.04392826667 * DEFAULT_CPU_SPEED;
const static double NORMAL_ROW_STORE_PROJECT_COLUMN_RND_NUMBER_COST = 0.04187649999657894736842105263 * DEFAULT_CPU_SPEED;
const static double NORMAL_ROW_STORE_PROJECT_COLUMN_RND_CHAR_COST = 0.001149576877742598684210526316 * DEFAULT_CPU_SPEED;
//column store
const static double NORMAL_COLUMN_STORE_PROJECT_COLUMN_SEQ_INT_COST = 0.08879689693065789473684210526 * DEFAULT_CPU_SPEED;
const static double NORMAL_COLUMN_STORE_PROJECT_COLUMN_SEQ_NUMBER_COST = 0.07463286534828947368421052632 * DEFAULT_CPU_SPEED;
const static double NORMAL_COLUMN_STORE_PROJECT_COLUMN_SEQ_CHAR_COST = 0.002145698273026315789473684210 * DEFAULT_CPU_SPEED;

const static double NORMAL_COLUMN_STORE_PROJECT_COLUMN_RND_INT_COST = 0.08879689693065789473684210526 * DEFAULT_CPU_SPEED;
const static double NORMAL_COLUMN_STORE_PROJECT_COLUMN_RND_NUMBER_COST = 0.07463286534828947368421052632 * DEFAULT_CPU_SPEED;
const static double NORMAL_COLUMN_STORE_PROJECT_COLUMN_RND_CHAR_COST = 0.002145698273026315789473684210 * DEFAULT_CPU_SPEED;

//compare cost params
const static double NORMAL_CMP_INT_COST = 0.0100087103407539 * DEFAULT_CPU_SPEED;
const static double NORMAL_CMP_NUMBER_COST = 0.0227412012152380952380952381 * DEFAULT_CPU_SPEED;
const static double NORMAL_CMP_CHAR_COST = 0.09707028746051587301587301588 * DEFAULT_CPU_SPEED;
const static double NORMAL_CMP_SPATIAL_COST = 19.311884382850465 * DEFAULT_CPU_SPEED;
const static double NORMAL_INVALID_CMP_COST = -1;

//hash cost params
const static double NORMAL_HASH_INT_COST = 0.02272897981269841269841269841 * DEFAULT_CPU_SPEED;
const static double NORMAL_HASH_NUMBER_COST = 0.02702563229230158730158730158 * DEFAULT_CPU_SPEED;
const static double NORMAL_HASH_CHAR_COST = 0.2306996323278174603174603175 * DEFAULT_CPU_SPEED;
const static double NORMAL_INVALID_HASH_COST = -1;

//mock complex expr cost
const static double NORMAL_CMP_UDF_COST = 100.0 * DEFAULT_CPU_SPEED;
const static double NORMAL_CMP_LOB_COST = 9.707028746051587301587301588 * DEFAULT_CPU_SPEED; //NORMAL_CMP_CHAR_COST * 100
const static double NORMAL_CMP_ERR_HANDLE_EXPR_COST = 1.00087103407539 * DEFAULT_CPU_SPEED; //NORMAL_CMP_INT_COST * 100

const static double comparison_params_normal[ObMaxTC+1] = {
  NORMAL_CMP_INT_COST,            // null
  NORMAL_CMP_INT_COST,            // int8, int16, int24, int32, int64.
  NORMAL_CMP_INT_COST,            // uint8, uint16, uint24, uint32, uint64.
  NORMAL_CMP_INT_COST,            // float, ufloat.
  NORMAL_CMP_INT_COST,            // double, udouble.
  NORMAL_CMP_NUMBER_COST,         // number, unumber.
  NORMAL_CMP_INT_COST,            // datetime, timestamp.
  NORMAL_CMP_INT_COST,            // date
  NORMAL_CMP_INT_COST,            // time
  NORMAL_CMP_INT_COST,            // year
  NORMAL_CMP_CHAR_COST,           // varchar, char, varbinary, binary.
  NORMAL_CMP_INT_COST,            // extend
  NORMAL_INVALID_CMP_COST,        // unknown
  NORMAL_CMP_CHAR_COST,           // TinyText,MediumText, Text ,LongText
  // TODO:@zhenling.zzg check the new type cost plz
  NORMAL_CMP_INT_COST,            // Bit
  NORMAL_CMP_CHAR_COST,           // enum, set
  NORMAL_CMP_INT_COST,            // ObEnumSetInnerTC
  NORMAL_CMP_INT_COST,            // timestamp with time zone
  NORMAL_CMP_CHAR_COST,           // raw
  NORMAL_CMP_INT_COST,            // interval
  NORMAL_CMP_INT_COST,            // rowid
  NORMAL_CMP_CHAR_COST,           // lob
  NORMAL_CMP_CHAR_COST,           // json
  NORMAL_CMP_CHAR_COST,           // geometry
  NORMAL_CMP_CHAR_COST,           // user defined type
  NORMAL_CMP_NUMBER_COST,         // ObDecimalIntTC
  NORMAL_CMP_CHAR_COST,           // collection sql type
  NORMAL_CMP_INT_COST,            // mysql date
  NORMAL_CMP_INT_COST,            // mysql datetime
  NORMAL_CMP_CHAR_COST,           // roaringbitmap
};

const static double hash_params_normal[ObMaxTC+1] = {
  NORMAL_HASH_INT_COST,            // null
  NORMAL_HASH_INT_COST,            // int8, int16, int24, int32, int64.
  NORMAL_HASH_INT_COST,            // uint8, uint16, uint24, uint32, uint64.
  NORMAL_HASH_INT_COST,            // float, ufloat.
  NORMAL_HASH_INT_COST,            // double, udouble.
  NORMAL_HASH_NUMBER_COST,         // number, unumber.
  NORMAL_HASH_INT_COST,            // datetime, timestamp.
  NORMAL_HASH_INT_COST,            // date
  NORMAL_HASH_INT_COST,            // time
  NORMAL_HASH_INT_COST,            // year
  NORMAL_HASH_CHAR_COST,           // varchar, char, varbinary, binary.
  NORMAL_HASH_INT_COST,            // extend
  NORMAL_INVALID_HASH_COST,        // unknown
  NORMAL_HASH_CHAR_COST,           // TinyText,MediumText, Text ,LongText
  NORMAL_HASH_INT_COST,            // Bit
  NORMAL_HASH_CHAR_COST,           // enum, set
  NORMAL_HASH_INT_COST,            // ObEnumSetInnerTC
  NORMAL_HASH_INT_COST,            // timestamp with time zone
  NORMAL_HASH_CHAR_COST,           // raw
  NORMAL_HASH_INT_COST,            // interval
  NORMAL_HASH_INT_COST,            // rowid
  NORMAL_HASH_CHAR_COST,           // lob
  NORMAL_HASH_CHAR_COST,           // json
  NORMAL_HASH_CHAR_COST,           // geometry
  NORMAL_HASH_CHAR_COST,           // user defined type
  NORMAL_HASH_NUMBER_COST,         // ObDecimalIntTC
  NORMAL_HASH_CHAR_COST,           // collection sql type
  NORMAL_HASH_INT_COST,            // mysql date
  NORMAL_HASH_INT_COST,            // mysql datetime
  NORMAL_HASH_CHAR_COST,           // roaringbitmap
};

const static double project_params_normal[2][2][MAX_PROJECT_TYPE] = {
  {
    {// row store sequence access
      NORMAL_ROW_STORE_PROJECT_COLUMN_SEQ_INT_COST,     // int
      NORMAL_ROW_STORE_PROJECT_COLUMN_SEQ_NUMBER_COST,  // number or decimal
      NORMAL_ROW_STORE_PROJECT_COLUMN_SEQ_CHAR_COST     // char
    },
    {// row store random access
      NORMAL_ROW_STORE_PROJECT_COLUMN_RND_INT_COST,     // int
      NORMAL_ROW_STORE_PROJECT_COLUMN_RND_NUMBER_COST,  // number or decimal
      NORMAL_ROW_STORE_PROJECT_COLUMN_RND_CHAR_COST     // char
    }
  },
  {
    {// column store sequence access
      NORMAL_COLUMN_STORE_PROJECT_COLUMN_SEQ_INT_COST,    // int
      NORMAL_COLUMN_STORE_PROJECT_COLUMN_SEQ_NUMBER_COST, // number or decimal
      NORMAL_COLUMN_STORE_PROJECT_COLUMN_SEQ_CHAR_COST    // char
    },
    {// column store random access
      NORMAL_COLUMN_STORE_PROJECT_COLUMN_RND_INT_COST,    // int
      NORMAL_COLUMN_STORE_PROJECT_COLUMN_RND_NUMBER_COST, // number or decimal
      NORMAL_COLUMN_STORE_PROJECT_COLUMN_RND_CHAR_COST    // char
    }
  }
};

const static ObOptCostModelParameter cost_params_normal(
    NORMAL_CPU_TUPLE_COST,
    NORMAL_TABLE_SCAN_CPU_TUPLE_COST,
    NORMAL_MICRO_BLOCK_SEQ_COST,
    NORMAL_MICRO_BLOCK_RND_COST,
    NORMAL_FETCH_ROW_RND_COST,
    NORMAL_CMP_SPATIAL_COST,
    NORMAL_MATERIALIZE_PER_BYTE_WRITE_COST,
    NORMAL_READ_MATERIALIZED_PER_ROW_COST,
    NORMAL_PER_AGGR_FUNC_COST,
    NORMAL_PER_WIN_FUNC_COST,
    NORMAL_CPU_OPERATOR_COST,
    NORMAL_JOIN_PER_ROW_COST,
    NORMAL_BUILD_HASH_PER_ROW_COST,
    NORMAL_PROBE_HASH_PER_ROW_COST,
    NORMAL_RESCAN_COST,
    NORMAL_NETWORK_SER_PER_BYTE_COST,
    NORMAL_NETWORK_DESER_PER_BYTE_COST,
    NORMAL_NETWORK_TRANS_PER_BYTE_COST,
    NORMAL_PX_RESCAN_PER_ROW_COST,
    NORMAL_PX_BATCH_RESCAN_PER_ROW_COST,
    NORMAL_NL_SCAN_COST,
    NORMAL_BATCH_NL_SCAN_COST,
    NORMAL_NL_GET_COST,
    NORMAL_BATCH_NL_GET_COST,
    NORMAL_TABLE_LOOPUP_PER_ROW_RPC_COST,
    NORMAL_INSERT_PER_ROW_COST,
    NORMAL_INSERT_INDEX_PER_ROW_COST,
    NORMAL_INSERT_CHECK_PER_ROW_COST,
    NORMAL_UPDATE_PER_ROW_COST,
    NORMAL_UPDATE_INDEX_PER_ROW_COST,
    NORMAL_UPDATE_CHECK_PER_ROW_COST,
    NORMAL_DELETE_PER_ROW_COST,
    NORMAL_DELETE_INDEX_PER_ROW_COST,
    NORMAL_DELETE_CHECK_PER_ROW_COST,
    NORMAL_SPATIAL_PER_ROW_COST,
    NORMAL_RANGE_COST,
    NORMAL_CMP_UDF_COST,
    NORMAL_CMP_LOB_COST,
    NORMAL_CMP_ERR_HANDLE_EXPR_COST,
    comparison_params_normal,
    hash_params_normal,
    project_params_normal
);

}
}
#endif /*OCEANBASE_SQL_OPTIMIZER_OB_OPT_EST_PARAMETER_NORMAL_*/