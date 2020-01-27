cocci_test_suite() {
	enum ioc_event{IOC_E_RESET=1, IOC_E_ENABLE=2, IOC_E_DISABLE=3, IOC_E_DETACH=4, IOC_E_ENABLED=5, IOC_E_FWRSP_GETATTR=6, IOC_E_DISABLED=7, IOC_E_PFFAILED=8, IOC_E_HBFAIL=9, IOC_E_HWERROR=10, IOC_E_TIMEOUT=11, IOC_E_HWFAILED=12,} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 91 */;
	enum iocpf_event cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 908 */;
	u64 cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 88 */(struct bfa_ioc *ioc);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 87 */(struct bfa_ioc *ioc,
									 char *model);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 85 */(struct bfa_ioc *ioc,
									 char *manufacturer);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 83 */(struct bfa_ioc *ioc,
									 char *optrom_ver);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 81 */(struct bfa_ioc *ioc,
									 char *chip_rev);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 79 */(struct bfa_ioc *ioc,
									 char *fw_ver);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 77 */(struct bfa_ioc *ioc,
									 char *serial_num);
	u32 cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 76 */(struct bfa_ioc *ioc,
									u32 fmaddr);
	enum bfa_status cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 74 */(struct bfa_ioc *ioc,
										    enum bfi_fwboot_type boot_type,
										    u32 boot_param);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 65 */(struct bfa_ioc *ioc);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 64 */(struct bfa_ioc *,
									 enum bfa_ioc_event);
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 53 */(struct bfa_ioc *ioc,
									 bool force);
	enum ioc_event cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 428 */;
	struct bfa_flash_attr cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3273 */;
	u8 *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3269 */;
	struct bfi_flash_query_req *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3257 */;
	bfa_cb_flash cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3255 */;
	struct bfa_flash_attr *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3139 */;
	union {
		struct bfi_flash_query_rsp *query;
		struct bfi_flash_write_rsp *write;
		struct bfi_flash_read_rsp *read;
		struct bfi_mbmsg *msg;
	} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3121 */;
	struct bfi_mbmsg *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3116 */;
	void *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3116 */;
	struct bfi_flash_read_req *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3093 */;
	struct bfi_flash_write_req *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3060 */;
	enum bfa_ioc_event cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3036 */;
	struct bfa_flash *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3028 */;
	void cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3027 */;
	struct bfa_mfg_block cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 3025 */;
	u64 cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2916 */;
	struct bfa_ioc_attr cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2896 */;
	struct bfa_ioc_attr *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2894 */;
	enum bfa_iocpf_state cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2857 */;
	enum bfa_ioc_state cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2854 */;
	enum bfa_ioc_type cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2786 */;
	struct bfa_mfg_vpd cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2758 */;
	struct bfi_ioc_attr *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2749 */;
	struct bfa_adapter_attr *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2747 */;
	struct bfi_mbmsg cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2684 */;
	bfa_ioc_mbox_mcfunc_t cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2628 */;
	enum bfi_mclass cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2627 */;
	struct bfi_ioc_attr cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2592 */;
	enum bfi_pcifn_class cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2509 */;
	struct bfa_pcidev *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2508 */;
	struct bfa_ioc_cbfn *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2476 */;
	union bfi_ioc_i2h_msg_u *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2439 */;
	union bfi_ioc_i2h_msg_u cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2420 */;
	struct bfi_ioc_image_hdr *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2360 */;
	enum bfi_fwboot_type cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2357 */;
	struct bfa_ioc *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2357 */;
	int *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2268 */;
	struct bfa_mbox_cmd cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2177 */;
	struct bfa_mbox_cmd *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2174 */;
	bfa_mbox_cmd_cbfn_t cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2134 */;
	struct bfa_ioc_mbox_mod *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2118 */;
	struct bfa_iocpf *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2094 */;
	enum bfa_mode cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2091 */;
	u32 cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 2001 */[BFI_FLASH_CHUNK_SZ_WORDS];
	struct bfi_ioc_getattr_req cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1949 */;
	struct bfi_ioc_ctrl_req cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1935 */;
	enum bfi_ioc_state cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1831 */;
	enum bfi_ioc_img_ver_cmp cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1749 */;
	char *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1692 */;
	enum bfa_status cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1691 */;
	struct bfa_iocpf cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 169 */;
	u32 *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1651 */;
	u8 cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1627 */;
	enum bfa_iocpf_state{BFA_IOCPF_RESET=1, BFA_IOCPF_SEMWAIT=2, BFA_IOCPF_HWINIT=3, BFA_IOCPF_READY=4, BFA_IOCPF_INITFAIL=5, BFA_IOCPF_FAIL=6, BFA_IOCPF_DISABLING=7, BFA_IOCPF_DISABLED=8, BFA_IOCPF_FWMISMATCH=9,} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 157 */;
	union bfa_flash_dev_status_reg cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1540 */;
	u32 cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1538 */;
	union bfa_flash_cmd_reg cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1524 */;
	void __iomem *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1522 */;
	int cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1521 */;
	union bfa_flash_addr_reg cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1514 */;
	union bfa_flash_addr_reg {
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
	} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1482 */;
	union bfa_flash_dev_status_reg {
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
	} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1458 */;
	union bfa_flash_cmd_reg {
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
	} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1436 */;
	enum bfa_flash_err{BFA_FLASH_NOT_PRESENT=-1, BFA_FLASH_UNINIT=-2, BFA_FLASH_BAD=-3, BFA_FLASH_BUSY=-4, BFA_FLASH_ERR_CMD_ACT=-5, BFA_FLASH_ERR_FIFO_CNT=-6, BFA_FLASH_ERR_WIP=-7, BFA_FLASH_ERR_TIMEOUT=-8, BFA_FLASH_ERR_LEN=-9,} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1423 */;
	enum bfa_flash_cmd{BFA_FLASH_FAST_READ=0x0b, BFA_FLASH_WRITE_ENABLE=0x06, BFA_FLASH_SECTOR_ERASE=0xd8, BFA_FLASH_WRITE=0x02, BFA_FLASH_READ_STATUS=0x05,} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1414 */;
	enum iocpf_event{IOCPF_E_ENABLE=1, IOCPF_E_DISABLE=2, IOCPF_E_STOP=3, IOCPF_E_FWREADY=4, IOCPF_E_FWRSP_ENABLE=5, IOCPF_E_FWRSP_DISABLE=6, IOCPF_E_FAIL=7, IOCPF_E_INITFAIL=8, IOCPF_E_GETATTRFAIL=9, IOCPF_E_SEMLOCKED=10, IOCPF_E_TIMEOUT=11, IOCPF_E_SEM_ERROR=12,} cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 141 */;
	bool cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1338 */;
	struct bfa_sm_table cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 117 */[];
	struct bfi_ioc_image_hdr cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1134 */;
	struct bfa_ioc_notify *cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 1082 */;
	struct bfa_ioc cocci_id/* drivers/net/ethernet/brocade/bna/bfa_ioc.c 106 */;
}
