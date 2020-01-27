cocci_test_suite() {
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 92 */(void *ioc);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 91 */(struct bfa_ioc_s *ioc,
							 bfa_boolean_t force);
	bfa_boolean_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 85 */;
	char *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6993 */;
	union bfa_flash_dev_status_reg_u cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6788 */;
	union bfa_flash_cmd_reg_u cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6764 */;
	void __iomem *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6762 */;
	union bfa_flash_addr_reg_u cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6754 */;
	union bfa_flash_addr_reg_u {
		struct {
#ifdef __BIG_ENDIAN
			u32 addr:24;
			u32 dummy:8;
#else
			u32 dummy:8;
			u32 addr:24;
#endif
		} r;
		u32 i;
	} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6720 */;
	union bfa_flash_dev_status_reg_u {
		struct {
#ifdef __BIG_ENDIAN
			u32 rsv:21;
			u32 fifo_cnt:6;
			u32 busy:1;
			u32 init_status:1;
			u32 present:1;
			u32 bad:1;
			u32 good:1;
#else
			u32 good:1;
			u32 bad:1;
			u32 present:1;
			u32 init_status:1;
			u32 busy:1;
			u32 fifo_cnt:6;
			u32 rsv:21;
#endif
		} r;
		u32 i;
	} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6694 */;
	union bfa_flash_cmd_reg_u {
		struct {
#ifdef __BIG_ENDIAN
			u32 act:1;
			u32 rsv:1;
			u32 write_cnt:9;
			u32 read_cnt:9;
			u32 addr_cnt:4;
			u32 cmd:8;
#else
			u32 cmd:8;
			u32 addr_cnt:4;
			u32 read_cnt:9;
			u32 write_cnt:9;
			u32 rsv:1;
			u32 act:1;
#endif
		} r;
		u32 i;
	} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6670 */;
	enum bfa_flash_err{BFA_FLASH_NOT_PRESENT=-1, BFA_FLASH_UNINIT=-2, BFA_FLASH_BAD=-3, BFA_FLASH_BUSY=-4, BFA_FLASH_ERR_CMD_ACT=-5, BFA_FLASH_ERR_FIFO_CNT=-6, BFA_FLASH_ERR_WIP=-7, BFA_FLASH_ERR_TIMEOUT=-8, BFA_FLASH_ERR_LEN=-9,} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6655 */;
	enum bfa_flash_cmd{BFA_FLASH_FAST_READ=0x0b, BFA_FLASH_READ_STATUS=0x05,} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6647 */;
	struct bfi_fru_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6560 */;
	bfa_cb_fru_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6402 */;
	struct bfa_fru_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6295 */;
	struct bfi_fru_read_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6257 */;
	enum bfi_fru_h2i_msgs cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6254 */;
	struct bfi_fru_write_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6223 */;
	struct bfa_dconf_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6091 */;
	struct bfa_dconf_hdr_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6087 */;
	struct bfa_dconf_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6085 */;
	struct bfa_dconf_mod_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6078 */;
	struct bfa_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6076 */;
	struct bfa_iocfc_cfg_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6076 */;
	struct bfa_mem_kva_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6065 */;
	struct bfa_meminfo_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 6062 */;
	enum bfa_dconf_event cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5953 */;
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5845 */(void *arg,
							   bfa_status_t status);
	bfa_status_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5844 */(struct bfa_dconf_mod_s *dconf);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5843 */(void *cbarg);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5842 */(void *dconf,
							   bfa_status_t status);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5833 */(struct bfa_dconf_mod_s *dconf,
							   enum bfa_dconf_event event);
	enum bfa_dconf_event{BFA_DCONF_SM_INIT=1, BFA_DCONF_SM_FLASH_COMP=2, BFA_DCONF_SM_WR=3, BFA_DCONF_SM_TIMEOUT=4, BFA_DCONF_SM_EXIT=5, BFA_DCONF_SM_IOCDISABLE=6,} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5817 */;
	struct bfa_phy_stats_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5753 */;
	struct bfa_phy_attr_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5735 */;
	union {
		struct bfi_phy_query_rsp_s *query;
		struct bfi_phy_stats_rsp_s *stats;
		struct bfi_phy_write_rsp_s *write;
		struct bfi_phy_read_rsp_s *read;
		struct bfi_mbmsg_s *msg;
	} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5709 */;
	struct bfa_phy_stats_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5568 */;
	uint8_t *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5549 */;
	bfa_cb_phy_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5529 */;
	struct bfa_phy_attr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5529 */;
	struct bfa_phy_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5465 */;
	struct bfi_phy_stats_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5430 */;
	struct bfi_phy_read_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5406 */;
	struct bfi_phy_write_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5366 */;
	struct bfi_phy_query_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5347 */;
	bfa_cb_diag_beacon_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5269 */;
	struct bfa_trc_mod_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5269 */;
	struct bfa_diag_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5268 */;
	uint32_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5229 */;
	struct bfa_diag_ledtest_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5197 */;
	struct bfa_diag_results_tempsensor_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5162 */;
	bfa_cb_diag_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5113 */;
	struct bfa_diag_results_fwping *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5113 */;
	enum ioc_event cocci_id/* drivers/scsi/bfa/bfa_ioc.c 510 */;
	struct bfa_diag_memtest_result *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5067 */;
	struct bfa_diag_memtest_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5066 */;
	struct bfi_diag_ledtest_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5045 */;
	bfi_diag_ts_rsp_t *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5042 */;
	struct bfi_diag_fwping_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5039 */;
	struct bfi_diag_portbeacon_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 5005 */;
	struct bfi_diag_ledtest_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4962 */;
	struct bfi_diag_ts_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4906 */;
	struct bfi_diag_fwping_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4819 */;
	u32 *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4776 */;
	struct bfa_diag_memtest_result cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4773 */;
	bfa_cb_flash_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4570 */;
	enum bfa_flash_part_type cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4569 */;
	struct bfa_flash_attr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4535 */;
	struct bfa_flash_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4481 */;
	union {
		struct bfi_flash_query_rsp_s *query;
		struct bfi_flash_erase_rsp_s *erase;
		struct bfi_flash_write_rsp_s *write;
		struct bfi_flash_read_rsp_s *read;
		struct bfi_flash_event_s *event;
		struct bfi_mbmsg_s *msg;
	} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4348 */;
	struct bfi_flash_erase_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4326 */;
	struct bfi_flash_read_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4301 */;
	struct bfi_flash_write_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4268 */;
	struct bfa_flash_attr_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4255 */;
	struct bfi_flash_query_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4250 */;
	struct bfa_aen_entry_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4197 */;
	struct bfad_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4196 */;
	enum bfa_audit_aen_event cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4193 */;
	struct bfa_mfg_block_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4190 */;
	enum bfa_port_speed cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4135 */;
	bfa_cb_sfp_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4103 */;
	enum bfa_defs_sfp_media_e *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 4102 */;
	union sfp_xcvr_fc3_code_u cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3961 */;
	struct sfp_xcvr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3960 */;
	struct sfp_mem_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3921 */;
	union sfp_xcvr_e10g_code_u cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3920 */;
	struct bfi_sfp_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3842 */;
	struct bfi_sfp_scn_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3798 */;
	struct sfp_mem_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3787 */;
	struct bfi_sfp_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3777 */;
	enum bfi_sfp_mem_e cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3775 */;
	enum bfa_port_aen_event cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3713 */;
	struct bfa_sfp_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3641 */;
	bfa_status_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3637 */(struct bfa_sfp_s *sfp,
								   enum bfa_port_speed portspeed);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3635 */(struct bfa_sfp_s *sfp);
	struct bfi_ablk_h2i_optrom_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3606 */;
	u8 cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3505 */;
	struct bfi_ablk_h2i_cfg_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3486 */;
	bfa_ablk_cbfn_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3484 */;
	void *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3484 */;
	int cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3484 */;
	enum bfa_mode_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3483 */;
	struct bfa_ablk_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3483 */;
	bfa_status_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3482 */;
	struct bfi_ablk_h2i_pf_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3424 */;
	enum bfi_pcifn_class cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3420 */;
	u16 *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3419 */;
	struct bfi_ablk_h2i_query_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3390 */;
	struct bfa_ioc_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3376 */;
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3375 */;
	u64 cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3369 */;
	u8 *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3369 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3362 */;
	enum bfa_ioc_event_e cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3333 */;
	struct bfa_ablk_cfg_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3297 */;
	struct bfi_ablk_i2h_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3287 */;
	struct bfi_mbmsg_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3284 */;
	u16 cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3264 */;
	struct bfa_ablk_cfg_inst_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3262 */;
	struct bfa_ablk_cfg_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3260 */;
	void (*cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3232 */)(void *);
	unsigned int cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3232 */;
	struct list_head cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3197 */;
	struct bfa_timer_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3196 */;
	struct bfa_fw_stats_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3105 */;
	int *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 3025 */;
	struct bfi_ioc_ctrl_req_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2990 */;
	struct bfa_mbox_cmd_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2989 */;
	enum bfa_ioc_type_e cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2915 */;
	enum bfa_ioc_aen_event cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2911 */;
	mac_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2880 */;
	struct bfa_ioc_attr_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2862 */;
	struct bfa_ioc_attr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2860 */;
	enum bfa_iocpf_state cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2822 */;
	enum bfa_ioc_state cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2819 */;
	struct bfa_mfg_vpd_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2705 */;
	struct bfi_ioc_attr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2696 */;
	struct bfa_adapter_attr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2694 */;
	struct bfi_mbmsg_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2600 */;
	bfa_ioc_mbox_mcfunc_t cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2549 */;
	enum bfi_mclass cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2548 */;
	bfa_ioc_mbox_mcfunc_t *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2535 */;
	struct bfa_pcidev_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2396 */;
	struct bfa_timer_mod_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2363 */;
	struct bfa_ioc_cbfn_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2362 */;
	struct bfa_iocpf_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2324 */;
	union bfi_ioc_i2h_msg_u *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2323 */;
	union bfi_ioc_i2h_msg_u cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2304 */;
	__be32 *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2293 */;
	struct bfi_ioc_image_hdr_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2219 */;
	struct bfa_iocpf_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 214 */;
	__be32 cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2048 */;
	struct bfa_mbox_cmd_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 2030 */;
	enum bfa_iocpf_state{BFA_IOCPF_RESET=1, BFA_IOCPF_SEMWAIT=2, BFA_IOCPF_HWINIT=3, BFA_IOCPF_READY=4, BFA_IOCPF_INITFAIL=5, BFA_IOCPF_FAIL=6, BFA_IOCPF_DISABLING=7, BFA_IOCPF_DISABLED=8, BFA_IOCPF_FWMISMATCH=9,} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 202 */;
	struct bfa_ioc_mbox_mod_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1983 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1872 */[BFI_FLASH_CHUNK_SZ_WORDS];
	enum iocpf_event{IOCPF_E_ENABLE=1, IOCPF_E_DISABLE=2, IOCPF_E_STOP=3, IOCPF_E_FWREADY=4, IOCPF_E_FWRSP_ENABLE=5, IOCPF_E_FWRSP_DISABLE=6, IOCPF_E_FAIL=7, IOCPF_E_INITFAIL=8, IOCPF_E_GETATTRFAIL=9, IOCPF_E_SEMLOCKED=10, IOCPF_E_TIMEOUT=11, IOCPF_E_SEM_ERROR=12,} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 184 */;
	struct bfi_ioc_getattr_req_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1825 */;
	struct bfi_ioc_ctrl_req_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1812 */;
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 179 */(void *ioc_arg);
	enum bfi_ioc_state cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1667 */;
	enum bfi_ioc_img_ver_cmp_e cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1638 */;
	struct bfi_ioc_image_hdr_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1452 */;
	struct bfa_sm_table_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 143 */[];
	struct bfa_ioc_s cocci_id/* drivers/scsi/bfa/bfa_ioc.c 132 */;
	struct list_head *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1310 */;
	struct bfa_ioc_notify_s *cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1309 */;
	enum ioc_event{IOC_E_RESET=1, IOC_E_ENABLE=2, IOC_E_DISABLE=3, IOC_E_DETACH=4, IOC_E_ENABLED=5, IOC_E_FWRSP_GETATTR=6, IOC_E_DISABLED=7, IOC_E_PFFAILED=8, IOC_E_HBFAIL=9, IOC_E_HWERROR=10, IOC_E_TIMEOUT=11, IOC_E_HWFAILED=12,} cocci_id/* drivers/scsi/bfa/bfa_ioc.c 117 */;
	enum iocpf_event cocci_id/* drivers/scsi/bfa/bfa_ioc.c 1111 */;
	enum bfi_ioc_img_ver_cmp_e cocci_id/* drivers/scsi/bfa/bfa_ioc.c 110 */(struct bfa_ioc_s *ioc,
										struct bfi_ioc_image_hdr_s *base_fwhdr);
	enum bfi_ioc_img_ver_cmp_e cocci_id/* drivers/scsi/bfa/bfa_ioc.c 107 */(struct bfi_ioc_image_hdr_s *base_fwhdr,
										struct bfi_ioc_image_hdr_s *fwhdr_to_cmp);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 103 */(struct bfa_ioc_s *ioc);
	void cocci_id/* drivers/scsi/bfa/bfa_ioc.c 101 */(struct bfa_ioc_s *ioc,
							  enum bfa_ioc_event_e event);
}
