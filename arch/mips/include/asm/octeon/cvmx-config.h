#ifndef __CVMX_CONFIG_H__
#define __CVMX_CONFIG_H__

#define CVMX_LLM_NUM_PORTS 1
#define CVMX_NULL_POINTER_PROTECT 1
#define CVMX_ENABLE_DEBUG_PRINTS 1
#define CVMX_PKO_QUEUES_PER_PORT_INTERFACE0 1
#define CVMX_PKO_QUEUES_PER_PORT_INTERFACE1 1
#define CVMX_PKO_MAX_PORTS_INTERFACE0 CVMX_HELPER_PKO_MAX_PORTS_INTERFACE0
#define CVMX_PKO_MAX_PORTS_INTERFACE1 CVMX_HELPER_PKO_MAX_PORTS_INTERFACE1
#define CVMX_PKO_QUEUES_PER_PORT_PCI 1
#define CVMX_PKO_QUEUES_PER_PORT_LOOP 1

#define CVMX_FPA_POOL_0_SIZE (16 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_1_SIZE (1 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_2_SIZE (8 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_3_SIZE (0 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_4_SIZE (0 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_5_SIZE (0 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_6_SIZE (0 * CVMX_CACHE_LINE_SIZE)
#define CVMX_FPA_POOL_7_SIZE (0 * CVMX_CACHE_LINE_SIZE)

#define CVMX_FPA_PACKET_POOL                (0)
#define CVMX_FPA_PACKET_POOL_SIZE           CVMX_FPA_POOL_0_SIZE
#define CVMX_FPA_WQE_POOL                   (1)
#define CVMX_FPA_WQE_POOL_SIZE              CVMX_FPA_POOL_1_SIZE
#define CVMX_FPA_OUTPUT_BUFFER_POOL         (2)
#define CVMX_FPA_OUTPUT_BUFFER_POOL_SIZE    CVMX_FPA_POOL_2_SIZE


#define CVMX_FAU_REG_64_ADDR(x) ((x << 3) + CVMX_FAU_REG_64_START)
typedef enum {
	CVMX_FAU_REG_64_START	= 0,
	CVMX_FAU_REG_64_END	= CVMX_FAU_REG_64_ADDR(0),
} cvmx_fau_reg_64_t;

#define CVMX_FAU_REG_32_ADDR(x) ((x << 2) + CVMX_FAU_REG_32_START)
typedef enum {
	CVMX_FAU_REG_32_START	= CVMX_FAU_REG_64_END,
	CVMX_FAU_REG_32_END	= CVMX_FAU_REG_32_ADDR(0),
} cvmx_fau_reg_32_t;

#define CVMX_FAU_REG_16_ADDR(x) ((x << 1) + CVMX_FAU_REG_16_START)
typedef enum {
	CVMX_FAU_REG_16_START	= CVMX_FAU_REG_32_END,
	CVMX_FAU_REG_16_END	= CVMX_FAU_REG_16_ADDR(0),
} cvmx_fau_reg_16_t;

#define CVMX_FAU_REG_8_ADDR(x) ((x) + CVMX_FAU_REG_8_START)
typedef enum {
	CVMX_FAU_REG_8_START	= CVMX_FAU_REG_16_END,
	CVMX_FAU_REG_8_END	= CVMX_FAU_REG_8_ADDR(0),
} cvmx_fau_reg_8_t;

#define CVMX_FAU_REG_AVAIL_BASE ((CVMX_FAU_REG_8_END + 0x7) & (~0x7ULL))
#define CVMX_FAU_REG_END (2048)

#define CVMX_SCR_SCRATCH               (0)
#define CVMX_SCR_REG_AVAIL_BASE        (8)

#define CVMX_HELPER_FIRST_MBUFF_SKIP 184

#define CVMX_HELPER_NOT_FIRST_MBUFF_SKIP 0

#define CVMX_HELPER_ENABLE_BACK_PRESSURE 1

#define CVMX_HELPER_ENABLE_IPD 0

#define CVMX_HELPER_INPUT_TAG_TYPE CVMX_POW_TAG_TYPE_ORDERED

#define CVMX_ENABLE_PARAMETER_CHECKING 0

#define CVMX_HELPER_INPUT_TAG_IPV6_SRC_IP	0
#define CVMX_HELPER_INPUT_TAG_IPV6_DST_IP   	0
#define CVMX_HELPER_INPUT_TAG_IPV6_SRC_PORT 	0
#define CVMX_HELPER_INPUT_TAG_IPV6_DST_PORT 	0
#define CVMX_HELPER_INPUT_TAG_IPV6_NEXT_HEADER 	0
#define CVMX_HELPER_INPUT_TAG_IPV4_SRC_IP	0
#define CVMX_HELPER_INPUT_TAG_IPV4_DST_IP   	0
#define CVMX_HELPER_INPUT_TAG_IPV4_SRC_PORT 	0
#define CVMX_HELPER_INPUT_TAG_IPV4_DST_PORT 	0
#define CVMX_HELPER_INPUT_TAG_IPV4_PROTOCOL	0
#define CVMX_HELPER_INPUT_TAG_INPUT_PORT	1

#define CVMX_HELPER_INPUT_PORT_SKIP_MODE	CVMX_PIP_PORT_CFG_MODE_SKIPL2

#define CVMX_HELPER_DISABLE_RGMII_BACKPRESSURE 0

#endif 
