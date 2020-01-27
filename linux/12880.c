cocci_test_suite() {
	u16 cocci_id/* drivers/edac/i5000_edac.c 965 */;
	struct pci_dev *cocci_id/* drivers/edac/i5000_edac.c 783 */;
	struct i5000_error_info cocci_id/* drivers/edac/i5000_edac.c 767 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/i5000_edac.c 765 */;
	char cocci_id/* drivers/edac/i5000_edac.c 545 */[EDAC_MC_LABEL_LEN + 1 + 170];
	char cocci_id/* drivers/edac/i5000_edac.c 464 */[EDAC_MC_LABEL_LEN + 1 + 160];
	struct i5000_error_info *cocci_id/* drivers/edac/i5000_edac.c 386 */;
	struct edac_pci_ctl_info *cocci_id/* drivers/edac/i5000_edac.c 378 */;
	struct i5000_error_info {
		u32 ferr_fat_fbd;
		u32 nerr_fat_fbd;
		u32 ferr_nf_fbd;
		u32 nerr_nf_fbd;
		u32 redmemb;
		u16 recmema;
		u32 recmemb;
		u16 nrecmema;
		u32 nrecmemb;
	} cocci_id/* drivers/edac/i5000_edac.c 358 */;
	struct i5000_pvt {
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
		u16 mir0,mir1,mir2;
		u16 b0_mtr[NUM_MTRS];
		u16 b0_ambpresent0;
		u16 b0_ambpresent1;
		u16 b1_mtr[NUM_MTRS];
		u16 b1_ambpresent0;
		u16 b1_ambpresent1;
		struct i5000_dimm_info dimm_info[MAX_CSROWS][MAX_CHANNELS];
		int maxch;
		int maxdimmperch;
	} cocci_id/* drivers/edac/i5000_edac.c 323 */;
	struct i5000_dimm_info {
		int megabytes;
		int dual_rank;
	} cocci_id/* drivers/edac/i5000_edac.c 314 */;
	const struct i5000_dev_info cocci_id/* drivers/edac/i5000_edac.c 307 */[];
	struct i5000_dev_info {
		const char *ctl_name;
		u16 fsb_mapping_errors;
	} cocci_id/* drivers/edac/i5000_edac.c 301 */;
	enum i5000_chips{I5000P=0, I5000V=1, I5000X=2,} cocci_id/* drivers/edac/i5000_edac.c 294 */;
	void __exit cocci_id/* drivers/edac/i5000_edac.c 1566 */;
	int __init cocci_id/* drivers/edac/i5000_edac.c 1548 */;
	struct pci_driver cocci_id/* drivers/edac/i5000_edac.c 1537 */;
	const struct pci_device_id cocci_id/* drivers/edac/i5000_edac.c 1524 */[];
	const struct pci_device_id *cocci_id/* drivers/edac/i5000_edac.c 1483 */;
	struct edac_mc_layer cocci_id/* drivers/edac/i5000_edac.c 1357 */[3];
	u8 cocci_id/* drivers/edac/i5000_edac.c 1335 */;
	int *cocci_id/* drivers/edac/i5000_edac.c 1332 */;
	u32 cocci_id/* drivers/edac/i5000_edac.c 1310 */;
	struct dimm_info *cocci_id/* drivers/edac/i5000_edac.c 1250 */;
	long unsigned int cocci_id/* drivers/edac/i5000_edac.c 1147 */;
	char *cocci_id/* drivers/edac/i5000_edac.c 1038 */;
	int cocci_id/* drivers/edac/i5000_edac.c 1037 */;
	struct i5000_dimm_info *cocci_id/* drivers/edac/i5000_edac.c 1036 */;
	struct i5000_pvt *cocci_id/* drivers/edac/i5000_edac.c 1034 */;
	void cocci_id/* drivers/edac/i5000_edac.c 1034 */;
}
