cocci_test_suite() {
	struct pci_dev *cocci_id/* drivers/edac/i7300_edac.c 937 */;
	struct i7300_pvt {
		struct pci_dev *pci_dev_16_0_fsb_ctlr;
		struct pci_dev *pci_dev_16_1_fsb_addr_map;
		struct pci_dev *pci_dev_16_2_fsb_err_regs;
		struct pci_dev *pci_dev_2x_0_fbd_branch[MAX_BRANCHES];
		u16 tolm;
		u64 ambase;
		u32 mc_settings;
		u32 mc_settings_a;
		u16 mir[MAX_MIR];
		u16 mtr[MAX_SLOTS][MAX_BRANCHES];
		u16 ambpresent[MAX_CHANNELS];
		struct i7300_dimm_info dimm_info[MAX_SLOTS][MAX_CHANNELS];
		char *tmp_prt_buffer;
	} cocci_id/* drivers/edac/i7300_edac.c 91 */;
	struct i7300_dimm_info {
		int megabytes;
	} cocci_id/* drivers/edac/i7300_edac.c 86 */;
	long unsigned int cocci_id/* drivers/edac/i7300_edac.c 849 */;
	u32 *cocci_id/* drivers/edac/i7300_edac.c 847 */;
	u16 cocci_id/* drivers/edac/i7300_edac.c 822 */[MAX_MIR];
	int cocci_id/* drivers/edac/i7300_edac.c 822 */;
	void cocci_id/* drivers/edac/i7300_edac.c 822 */;
	const struct i7300_dev_info cocci_id/* drivers/edac/i7300_edac.c 79 */[];
	struct i7300_dev_info {
		const char *ctl_name;
		u16 fsb_mapping_errors;
	} cocci_id/* drivers/edac/i7300_edac.c 73 */;
	struct dimm_info *cocci_id/* drivers/edac/i7300_edac.c 588 */;
	struct i7300_dimm_info *cocci_id/* drivers/edac/i7300_edac.c 587 */;
	struct i7300_pvt *cocci_id/* drivers/edac/i7300_edac.c 585 */;
	u32 cocci_id/* drivers/edac/i7300_edac.c 522 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/i7300_edac.c 509 */;
	unsigned cocci_id/* drivers/edac/i7300_edac.c 411 */;
	u16 cocci_id/* drivers/edac/i7300_edac.c 410 */;
	bool cocci_id/* drivers/edac/i7300_edac.c 357 */;
	unsigned long cocci_id/* drivers/edac/i7300_edac.c 355 */;
	const char *cocci_id/* drivers/edac/i7300_edac.c 331 */;
	const char *cocci_id/* drivers/edac/i7300_edac.c 191 */[];
	const u16 cocci_id/* drivers/edac/i7300_edac.c 163 */[MAX_SLOTS];
	void __exit cocci_id/* drivers/edac/i7300_edac.c 1198 */;
	int __init cocci_id/* drivers/edac/i7300_edac.c 1181 */;
	struct pci_driver cocci_id/* drivers/edac/i7300_edac.c 1171 */;
	const struct pci_device_id cocci_id/* drivers/edac/i7300_edac.c 1161 */[];
	struct edac_pci_ctl_info *cocci_id/* drivers/edac/i7300_edac.c 116 */;
	char *cocci_id/* drivers/edac/i7300_edac.c 1136 */;
	struct edac_mc_layer cocci_id/* drivers/edac/i7300_edac.c 1024 */[3];
	const struct pci_device_id *cocci_id/* drivers/edac/i7300_edac.c 1021 */;
}
