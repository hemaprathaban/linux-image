/* QLogic qed NIC Driver
 * Copyright (c) 2015 QLogic Corporation
 *
 * This software is available under the terms of the GNU General Public License
 * (GPL) Version 2, available from the file COPYING in the main directory of
 * this source tree.
 */

#ifndef REG_ADDR_H
#define REG_ADDR_H

#define  CDU_REG_CID_ADDR_PARAMS_CONTEXT_SIZE_SHIFT \
	0

#define  CDU_REG_CID_ADDR_PARAMS_CONTEXT_SIZE		( \
		0xfff << 0)

#define  CDU_REG_CID_ADDR_PARAMS_BLOCK_WASTE_SHIFT \
	12

#define  CDU_REG_CID_ADDR_PARAMS_BLOCK_WASTE		( \
		0xfff << 12)

#define  CDU_REG_CID_ADDR_PARAMS_NCIB_SHIFT \
	24

#define  CDU_REG_CID_ADDR_PARAMS_NCIB			( \
		0xff << 24)

#define  XSDM_REG_OPERATION_GEN \
	0xf80408UL
#define  NIG_REG_RX_BRB_OUT_EN \
	0x500e18UL
#define  NIG_REG_STORM_OUT_EN \
	0x500e08UL
#define  PSWRQ2_REG_L2P_VALIDATE_VFID \
	0x240c50UL
#define  PGLUE_B_REG_USE_CLIENTID_IN_TAG	\
	0x2aae04UL
#define  PGLUE_B_REG_INTERNAL_PFID_ENABLE_MASTER	\
	0x2aa16cUL
#define PGLUE_B_REG_WAS_ERROR_VF_31_0_CLR \
	0x2aa118UL
#define PSWHST_REG_ZONE_PERMISSION_TABLE \
	0x2a0800UL
#define  BAR0_MAP_REG_MSDM_RAM \
	0x1d00000UL
#define  BAR0_MAP_REG_USDM_RAM \
	0x1d80000UL
#define  BAR0_MAP_REG_PSDM_RAM \
	0x1f00000UL
#define  BAR0_MAP_REG_TSDM_RAM \
	0x1c80000UL
#define  NIG_REG_RX_LLH_BRB_GATE_DNTFWD_PERPF \
	0x5011f4UL
#define  PRS_REG_SEARCH_TCP \
	0x1f0400UL
#define  PRS_REG_SEARCH_UDP \
	0x1f0404UL
#define  PRS_REG_SEARCH_FCOE \
	0x1f0408UL
#define  PRS_REG_SEARCH_ROCE \
	0x1f040cUL
#define  PRS_REG_SEARCH_OPENFLOW	\
	0x1f0434UL
#define  TM_REG_PF_ENABLE_CONN \
	0x2c043cUL
#define  TM_REG_PF_ENABLE_TASK \
	0x2c0444UL
#define  TM_REG_PF_SCAN_ACTIVE_CONN \
	0x2c04fcUL
#define  TM_REG_PF_SCAN_ACTIVE_TASK \
	0x2c0500UL
#define  IGU_REG_LEADING_EDGE_LATCH \
	0x18082cUL
#define  IGU_REG_TRAILING_EDGE_LATCH \
	0x180830UL
#define  QM_REG_USG_CNT_PF_TX \
	0x2f2eacUL
#define  QM_REG_USG_CNT_PF_OTHER	\
	0x2f2eb0UL
#define  DORQ_REG_PF_DB_ENABLE \
	0x100508UL
#define DORQ_REG_VF_USAGE_CNT \
	0x1009c4UL
#define  QM_REG_PF_EN \
	0x2f2ea4UL
#define  TCFC_REG_STRONG_ENABLE_PF \
	0x2d0708UL
#define  CCFC_REG_STRONG_ENABLE_PF \
	0x2e0708UL
#define  PGLUE_B_REG_PGL_ADDR_88_F0 \
	0x2aa404UL
#define  PGLUE_B_REG_PGL_ADDR_8C_F0 \
	0x2aa408UL
#define  PGLUE_B_REG_PGL_ADDR_90_F0 \
	0x2aa40cUL
#define  PGLUE_B_REG_PGL_ADDR_94_F0 \
	0x2aa410UL
#define  PGLUE_B_REG_WAS_ERROR_PF_31_0_CLR \
	0x2aa138UL
#define  PGLUE_B_REG_INTERNAL_PFID_ENABLE_TARGET_READ \
	0x2aa174UL
#define  MISC_REG_GEN_PURP_CR0 \
	0x008c80UL
#define  MCP_REG_SCRATCH	\
	0xe20000UL
#define  CNIG_REG_NW_PORT_MODE_BB_B0 \
	0x218200UL
#define  MISCS_REG_CHIP_NUM \
	0x00976cUL
#define  MISCS_REG_CHIP_REV \
	0x009770UL
#define  MISCS_REG_CMT_ENABLED_FOR_PAIR \
	0x00971cUL
#define  MISCS_REG_CHIP_TEST_REG	\
	0x009778UL
#define  MISCS_REG_CHIP_METAL \
	0x009774UL
#define MISCS_REG_FUNCTION_HIDE \
	0x0096f0UL
#define  BRB_REG_HEADER_SIZE \
	0x340804UL
#define  BTB_REG_HEADER_SIZE \
	0xdb0804UL
#define  CAU_REG_LONG_TIMEOUT_THRESHOLD \
	0x1c0708UL
#define  CCFC_REG_ACTIVITY_COUNTER \
	0x2e8800UL
#define CCFC_REG_STRONG_ENABLE_VF \
	0x2e070cUL
#define  CDU_REG_CID_ADDR_PARAMS	\
	0x580900UL
#define  DBG_REG_CLIENT_ENABLE \
	0x010004UL
#define  DMAE_REG_INIT \
	0x00c000UL
#define  DORQ_REG_IFEN \
	0x100040UL
#define DORQ_REG_DB_DROP_REASON \
	0x100a2cUL
#define DORQ_REG_DB_DROP_DETAILS \
	0x100a24UL
#define DORQ_REG_DB_DROP_DETAILS_ADDRESS \
	0x100a1cUL
#define  GRC_REG_TIMEOUT_EN \
	0x050404UL
#define GRC_REG_TIMEOUT_ATTN_ACCESS_VALID \
	0x050054UL
#define GRC_REG_TIMEOUT_ATTN_ACCESS_DATA_0 \
	0x05004cUL
#define GRC_REG_TIMEOUT_ATTN_ACCESS_DATA_1 \
	0x050050UL
#define  IGU_REG_BLOCK_CONFIGURATION \
	0x180040UL
#define  MCM_REG_INIT \
	0x1200000UL
#define  MCP2_REG_DBG_DWORD_ENABLE \
	0x052404UL
#define  MISC_REG_PORT_MODE \
	0x008c00UL
#define  MISCS_REG_CLK_100G_MODE	\
	0x009070UL
#define  MSDM_REG_ENABLE_IN1 \
	0xfc0004UL
#define  MSEM_REG_ENABLE_IN \
	0x1800004UL
#define  NIG_REG_CM_HDR \
	0x500840UL
#define  NCSI_REG_CONFIG	\
	0x040200UL
#define  PBF_REG_INIT \
	0xd80000UL
#define PBF_REG_NUM_BLOCKS_ALLOCATED_PROD_VOQ0 \
	0xd806c8UL
#define PBF_REG_NUM_BLOCKS_ALLOCATED_CONS_VOQ0 \
	0xd806ccUL
#define  PTU_REG_ATC_INIT_ARRAY \
	0x560000UL
#define  PCM_REG_INIT \
	0x1100000UL
#define  PGLUE_B_REG_ADMIN_PER_PF_REGION	\
	0x2a9000UL
#define PGLUE_B_REG_TX_ERR_WR_DETAILS2 \
	0x2aa150UL
#define PGLUE_B_REG_TX_ERR_WR_ADD_31_0 \
	0x2aa144UL
#define PGLUE_B_REG_TX_ERR_WR_ADD_63_32 \
	0x2aa148UL
#define PGLUE_B_REG_TX_ERR_WR_DETAILS \
	0x2aa14cUL
#define PGLUE_B_REG_TX_ERR_RD_ADD_31_0 \
	0x2aa154UL
#define PGLUE_B_REG_TX_ERR_RD_ADD_63_32 \
	0x2aa158UL
#define PGLUE_B_REG_TX_ERR_RD_DETAILS \
	0x2aa15cUL
#define PGLUE_B_REG_TX_ERR_RD_DETAILS2 \
	0x2aa160UL
#define PGLUE_B_REG_TX_ERR_WR_DETAILS_ICPL \
	0x2aa164UL
#define PGLUE_B_REG_MASTER_ZLR_ERR_DETAILS \
	0x2aa54cUL
#define PGLUE_B_REG_MASTER_ZLR_ERR_ADD_31_0 \
	0x2aa544UL
#define PGLUE_B_REG_MASTER_ZLR_ERR_ADD_63_32 \
	0x2aa548UL
#define PGLUE_B_REG_VF_ILT_ERR_ADD_31_0 \
	0x2aae74UL
#define PGLUE_B_REG_VF_ILT_ERR_ADD_63_32 \
	0x2aae78UL
#define PGLUE_B_REG_VF_ILT_ERR_DETAILS \
	0x2aae7cUL
#define PGLUE_B_REG_VF_ILT_ERR_DETAILS2 \
	0x2aae80UL
#define PGLUE_B_REG_LATCHED_ERRORS_CLR \
	0x2aa3bcUL
#define  PRM_REG_DISABLE_PRM \
	0x230000UL
#define  PRS_REG_SOFT_RST \
	0x1f0000UL
#define  PSDM_REG_ENABLE_IN1 \
	0xfa0004UL
#define  PSEM_REG_ENABLE_IN \
	0x1600004UL
#define  PSWRQ_REG_DBG_SELECT \
	0x280020UL
#define  PSWRQ2_REG_CDUT_P_SIZE \
	0x24000cUL
#define  PSWHST_REG_DISCARD_INTERNAL_WRITES \
	0x2a0040UL
#define  PSWHST2_REG_DBGSYN_ALMOST_FULL_THR \
	0x29e050UL
#define PSWHST_REG_INCORRECT_ACCESS_VALID \
	0x2a0070UL
#define PSWHST_REG_INCORRECT_ACCESS_ADDRESS \
	0x2a0074UL
#define PSWHST_REG_INCORRECT_ACCESS_DATA \
	0x2a0068UL
#define PSWHST_REG_INCORRECT_ACCESS_LENGTH \
	0x2a006cUL
#define  PSWRD_REG_DBG_SELECT \
	0x29c040UL
#define  PSWRD2_REG_CONF11 \
	0x29d064UL
#define  PSWWR_REG_USDM_FULL_TH \
	0x29a040UL
#define  PSWWR2_REG_CDU_FULL_TH2	\
	0x29b040UL
#define  QM_REG_MAXPQSIZE_0 \
	0x2f0434UL
#define  RSS_REG_RSS_INIT_EN \
	0x238804UL
#define  RDIF_REG_STOP_ON_ERROR \
	0x300040UL
#define  SRC_REG_SOFT_RST \
	0x23874cUL
#define  TCFC_REG_ACTIVITY_COUNTER \
	0x2d8800UL
#define  TCM_REG_INIT \
	0x1180000UL
#define  TM_REG_PXP_READ_DATA_FIFO_INIT \
	0x2c0014UL
#define  TSDM_REG_ENABLE_IN1 \
	0xfb0004UL
#define  TSEM_REG_ENABLE_IN \
	0x1700004UL
#define  TDIF_REG_STOP_ON_ERROR \
	0x310040UL
#define  UCM_REG_INIT \
	0x1280000UL
#define  UMAC_REG_IPG_HD_BKP_CNTL_BB_B0 \
	0x051004UL
#define  USDM_REG_ENABLE_IN1 \
	0xfd0004UL
#define  USEM_REG_ENABLE_IN \
	0x1900004UL
#define  XCM_REG_INIT \
	0x1000000UL
#define  XSDM_REG_ENABLE_IN1 \
	0xf80004UL
#define  XSEM_REG_ENABLE_IN \
	0x1400004UL
#define  YCM_REG_INIT \
	0x1080000UL
#define  YSDM_REG_ENABLE_IN1 \
	0xf90004UL
#define  YSEM_REG_ENABLE_IN \
	0x1500004UL
#define  XYLD_REG_SCBD_STRICT_PRIO \
	0x4c0000UL
#define  TMLD_REG_SCBD_STRICT_PRIO \
	0x4d0000UL
#define  MULD_REG_SCBD_STRICT_PRIO \
	0x4e0000UL
#define  YULD_REG_SCBD_STRICT_PRIO \
	0x4c8000UL
#define  MISC_REG_SHARED_MEM_ADDR \
	0x008c20UL
#define  DMAE_REG_GO_C0 \
	0x00c048UL
#define  DMAE_REG_GO_C1 \
	0x00c04cUL
#define  DMAE_REG_GO_C2 \
	0x00c050UL
#define  DMAE_REG_GO_C3 \
	0x00c054UL
#define  DMAE_REG_GO_C4 \
	0x00c058UL
#define  DMAE_REG_GO_C5 \
	0x00c05cUL
#define  DMAE_REG_GO_C6 \
	0x00c060UL
#define  DMAE_REG_GO_C7 \
	0x00c064UL
#define  DMAE_REG_GO_C8 \
	0x00c068UL
#define  DMAE_REG_GO_C9 \
	0x00c06cUL
#define  DMAE_REG_GO_C10	\
	0x00c070UL
#define  DMAE_REG_GO_C11	\
	0x00c074UL
#define  DMAE_REG_GO_C12	\
	0x00c078UL
#define  DMAE_REG_GO_C13	\
	0x00c07cUL
#define  DMAE_REG_GO_C14	\
	0x00c080UL
#define  DMAE_REG_GO_C15	\
	0x00c084UL
#define  DMAE_REG_GO_C16	\
	0x00c088UL
#define  DMAE_REG_GO_C17	\
	0x00c08cUL
#define  DMAE_REG_GO_C18	\
	0x00c090UL
#define  DMAE_REG_GO_C19	\
	0x00c094UL
#define  DMAE_REG_GO_C20	\
	0x00c098UL
#define  DMAE_REG_GO_C21	\
	0x00c09cUL
#define  DMAE_REG_GO_C22	\
	0x00c0a0UL
#define  DMAE_REG_GO_C23	\
	0x00c0a4UL
#define  DMAE_REG_GO_C24	\
	0x00c0a8UL
#define  DMAE_REG_GO_C25	\
	0x00c0acUL
#define  DMAE_REG_GO_C26	\
	0x00c0b0UL
#define  DMAE_REG_GO_C27	\
	0x00c0b4UL
#define  DMAE_REG_GO_C28	\
	0x00c0b8UL
#define  DMAE_REG_GO_C29	\
	0x00c0bcUL
#define  DMAE_REG_GO_C30	\
	0x00c0c0UL
#define  DMAE_REG_GO_C31	\
	0x00c0c4UL
#define  DMAE_REG_CMD_MEM \
	0x00c800UL
#define  QM_REG_MAXPQSIZETXSEL_0	\
	0x2f0440UL
#define  QM_REG_SDMCMDREADY \
	0x2f1e10UL
#define  QM_REG_SDMCMDADDR \
	0x2f1e04UL
#define  QM_REG_SDMCMDDATALSB \
	0x2f1e08UL
#define  QM_REG_SDMCMDDATAMSB \
	0x2f1e0cUL
#define  QM_REG_SDMCMDGO	\
	0x2f1e14UL
#define  QM_REG_RLPFCRD \
	0x2f4d80UL
#define  QM_REG_RLPFINCVAL \
	0x2f4c80UL
#define  QM_REG_RLGLBLCRD \
	0x2f4400UL
#define  QM_REG_RLGLBLINCVAL \
	0x2f3400UL
#define  IGU_REG_ATTENTION_ENABLE \
	0x18083cUL
#define  IGU_REG_ATTN_MSG_ADDR_L	\
	0x180820UL
#define  IGU_REG_ATTN_MSG_ADDR_H	\
	0x180824UL
#define  MISC_REG_AEU_GENERAL_ATTN_0 \
	0x008400UL
#define  CAU_REG_SB_ADDR_MEMORY \
	0x1c8000UL
#define  CAU_REG_SB_VAR_MEMORY \
	0x1c6000UL
#define  CAU_REG_PI_MEMORY \
	0x1d0000UL
#define  IGU_REG_PF_CONFIGURATION \
	0x180800UL
#define IGU_REG_VF_CONFIGURATION \
	0x180804UL
#define  MISC_REG_AEU_ENABLE1_IGU_OUT_0 \
	0x00849cUL
#define MISC_REG_AEU_AFTER_INVERT_1_IGU	\
	0x0087b4UL
#define  MISC_REG_AEU_MASK_ATTN_IGU \
	0x008494UL
#define  IGU_REG_CLEANUP_STATUS_0 \
	0x180980UL
#define  IGU_REG_CLEANUP_STATUS_1 \
	0x180a00UL
#define  IGU_REG_CLEANUP_STATUS_2 \
	0x180a80UL
#define  IGU_REG_CLEANUP_STATUS_3 \
	0x180b00UL
#define  IGU_REG_CLEANUP_STATUS_4 \
	0x180b80UL
#define  IGU_REG_COMMAND_REG_32LSB_DATA \
	0x180840UL
#define  IGU_REG_COMMAND_REG_CTRL \
	0x180848UL
#define  IGU_REG_BLOCK_CONFIGURATION_VF_CLEANUP_EN	( \
		0x1 << 1)
#define  IGU_REG_BLOCK_CONFIGURATION_PXP_TPH_INTERFACE_EN	( \
		0x1 << 0)
#define  IGU_REG_MAPPING_MEMORY \
	0x184000UL
#define IGU_REG_STATISTIC_NUM_VF_MSG_SENT \
	0x180408UL
#define IGU_REG_WRITE_DONE_PENDING \
	0x180900UL
#define  MISCS_REG_GENERIC_POR_0	\
	0x0096d4UL
#define  MCP_REG_NVM_CFG4 \
	0xe0642cUL
#define  MCP_REG_NVM_CFG4_FLASH_SIZE	( \
		0x7 << 0)
#define  MCP_REG_NVM_CFG4_FLASH_SIZE_SHIFT \
	0
#define MCP_REG_CPU_STATE \
	0xe05004UL
#define MCP_REG_CPU_EVENT_MASK \
	0xe05008UL
#define PGLUE_B_REG_PF_BAR0_SIZE \
	0x2aae60UL
#define PGLUE_B_REG_PF_BAR1_SIZE \
	0x2aae64UL
#define PRS_REG_ENCAPSULATION_TYPE_EN	0x1f0730UL
#define PRS_REG_GRE_PROTOCOL		0x1f0734UL
#define PRS_REG_VXLAN_PORT		0x1f0738UL
#define PRS_REG_OUTPUT_FORMAT_4_0	0x1f099cUL
#define NIG_REG_ENC_TYPE_ENABLE		0x501058UL

#define NIG_REG_ENC_TYPE_ENABLE_ETH_OVER_GRE_ENABLE		(0x1 << 0)
#define NIG_REG_ENC_TYPE_ENABLE_ETH_OVER_GRE_ENABLE_SHIFT	0
#define NIG_REG_ENC_TYPE_ENABLE_IP_OVER_GRE_ENABLE		(0x1 << 1)
#define NIG_REG_ENC_TYPE_ENABLE_IP_OVER_GRE_ENABLE_SHIFT	1
#define NIG_REG_ENC_TYPE_ENABLE_VXLAN_ENABLE			(0x1 << 2)
#define NIG_REG_ENC_TYPE_ENABLE_VXLAN_ENABLE_SHIFT		2

#define NIG_REG_VXLAN_PORT		0x50105cUL
#define PBF_REG_VXLAN_PORT		0xd80518UL
#define PBF_REG_NGE_PORT		0xd8051cUL
#define PRS_REG_NGE_PORT		0x1f086cUL
#define NIG_REG_NGE_PORT		0x508b38UL

#define DORQ_REG_L2_EDPM_TUNNEL_GRE_ETH_EN	0x10090cUL
#define DORQ_REG_L2_EDPM_TUNNEL_GRE_IP_EN	0x100910UL
#define DORQ_REG_L2_EDPM_TUNNEL_VXLAN_EN	0x100914UL
#define DORQ_REG_L2_EDPM_TUNNEL_NGE_IP_EN	0x10092cUL
#define DORQ_REG_L2_EDPM_TUNNEL_NGE_ETH_EN	0x100930UL

#define NIG_REG_NGE_IP_ENABLE			0x508b28UL
#define NIG_REG_NGE_ETH_ENABLE			0x508b2cUL
#define NIG_REG_NGE_COMP_VER			0x508b30UL
#define PBF_REG_NGE_COMP_VER			0xd80524UL
#define PRS_REG_NGE_COMP_VER			0x1f0878UL

#define QM_REG_WFQPFWEIGHT	0x2f4e80UL
#define QM_REG_WFQVPWEIGHT	0x2fa000UL
#endif
