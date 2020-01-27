cocci_test_suite() {
	char *cocci_id/* drivers/edac/i5400_edac.c 960 */;
	int cocci_id/* drivers/edac/i5400_edac.c 959 */;
	struct i5400_dimm_info *cocci_id/* drivers/edac/i5400_edac.c 958 */;
	struct i5400_pvt *cocci_id/* drivers/edac/i5400_edac.c 956 */;
	void cocci_id/* drivers/edac/i5400_edac.c 956 */;
	u16 cocci_id/* drivers/edac/i5400_edac.c 887 */;
	struct pci_dev *cocci_id/* drivers/edac/i5400_edac.c 720 */;
	struct i5400_error_info cocci_id/* drivers/edac/i5400_edac.c 688 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/i5400_edac.c 686 */;
	enum hw_event_mc_err_type cocci_id/* drivers/edac/i5400_edac.c 525 */;
	char cocci_id/* drivers/edac/i5400_edac.c 515 */[EDAC_MC_LABEL_LEN + 1 + 90 + 80];
	unsigned long cocci_id/* drivers/edac/i5400_edac.c 513 */;
	struct i5400_error_info *cocci_id/* drivers/edac/i5400_edac.c 436 */;
	struct edac_pci_ctl_info *cocci_id/* drivers/edac/i5400_edac.c 428 */;
	const char *cocci_id/* drivers/edac/i5400_edac.c 395 */;
	struct i5400_error_info {
		u32 ferr_fat_fbd;
		u32 nerr_fat_fbd;
		u32 ferr_nf_fbd;
		u32 nerr_nf_fbd;
		u32 redmemb;
		u16 recmema;
		u32 recmemb;
		u16 nrecmema;
		u32 nrecmemb;
	} cocci_id/* drivers/edac/i5400_edac.c 357 */;
	struct i5400_pvt {
		struct pci_dev *system_address;
		struct pci_dev *branchmap_werrors;
		struct pci_dev *fsb_error_regs;
		struct pci_dev *branch_0;
		struct pci_dev *branch_1;
		u16 tolm;
		union {
			u64 ambase;
			struct {
				u32 ambase_bottom;
				u32 ambase_top;
			} u __packed;
		};
		u16 mir0,mir1;
		u16 b0_mtr[DIMMS_PER_CHANNEL];
		u16 b0_ambpresent0;
		u16 b0_ambpresent1;
		u16 b1_mtr[DIMMS_PER_CHANNEL];
		u16 b1_ambpresent0;
		u16 b1_ambpresent1;
		struct i5400_dimm_info dimm_info[DIMMS_PER_CHANNEL][MAX_CHANNELS];
		int maxch;
		int maxdimmperch;
	} cocci_id/* drivers/edac/i5400_edac.c 322 */;
	struct i5400_dimm_info {
		int megabytes;
	} cocci_id/* drivers/edac/i5400_edac.c 317 */;
	const struct i5400_dev_info cocci_id/* drivers/edac/i5400_edac.c 310 */[];
	struct i5400_dev_info {
		const char *ctl_name;
		u16 fsb_mapping_errors;
	} cocci_id/* drivers/edac/i5400_edac.c 304 */;
	u32 cocci_id/* drivers/edac/i5400_edac.c 298 */;
	unsigned int cocci_id/* drivers/edac/i5400_edac.c 268 */;
	const char *cocci_id/* drivers/edac/i5400_edac.c 178 */[];
	void __exit cocci_id/* drivers/edac/i5400_edac.c 1451 */;
	int __init cocci_id/* drivers/edac/i5400_edac.c 1433 */;
	enum error_mask{EMASK_M1=1 << 0, EMASK_M2=1 << 1, EMASK_M3=1 << 2, EMASK_M4=1 << 3, EMASK_M5=1 << 4, EMASK_M6=1 << 5, EMASK_M7=1 << 6, EMASK_M8=1 << 7, EMASK_M9=1 << 8, EMASK_M10=1 << 9, EMASK_M11=1 << 10, EMASK_M12=1 << 11, EMASK_M13=1 << 12, EMASK_M14=1 << 13, EMASK_M15=1 << 14, EMASK_M16=1 << 15, EMASK_M17=1 << 16, EMASK_M18=1 << 17, EMASK_M19=1 << 18, EMASK_M20=1 << 19, EMASK_M21=1 << 20, EMASK_M22=1 << 21, EMASK_M23=1 << 22, EMASK_M24=1 << 23, EMASK_M25=1 << 24, EMASK_M26=1 << 25, EMASK_M27=1 << 26, EMASK_M28=1 << 27, EMASK_M29=1 << 28,} cocci_id/* drivers/edac/i5400_edac.c 143 */;
	struct pci_driver cocci_id/* drivers/edac/i5400_edac.c 1422 */;
	const struct pci_device_id cocci_id/* drivers/edac/i5400_edac.c 1411 */[];
	const struct pci_device_id *cocci_id/* drivers/edac/i5400_edac.c 1366 */;
	struct edac_mc_layer cocci_id/* drivers/edac/i5400_edac.c 1256 */[3];
	struct dimm_info *cocci_id/* drivers/edac/i5400_edac.c 1167 */;
	long unsigned int cocci_id/* drivers/edac/i5400_edac.c 1067 */;
}
