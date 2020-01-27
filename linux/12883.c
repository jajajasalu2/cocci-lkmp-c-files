cocci_test_suite() {
	void __exit cocci_id/* drivers/edac/e7xxx_edac.c 591 */;
	int __init cocci_id/* drivers/edac/e7xxx_edac.c 583 */;
	struct pci_driver cocci_id/* drivers/edac/e7xxx_edac.c 576 */;
	const struct pci_device_id cocci_id/* drivers/edac/e7xxx_edac.c 556 */[];
	const struct pci_device_id *cocci_id/* drivers/edac/e7xxx_edac.c 529 */;
	struct edac_mc_layer cocci_id/* drivers/edac/e7xxx_edac.c 425 */[2];
	enum edac_type cocci_id/* drivers/edac/e7xxx_edac.c 364 */;
	struct dimm_info *cocci_id/* drivers/edac/e7xxx_edac.c 363 */;
	struct csrow_info *cocci_id/* drivers/edac/e7xxx_edac.c 362 */;
	u8 cocci_id/* drivers/edac/e7xxx_edac.c 359 */;
	struct pci_dev *cocci_id/* drivers/edac/e7xxx_edac.c 354 */;
	int cocci_id/* drivers/edac/e7xxx_edac.c 348 */;
	struct e7xxx_error_info cocci_id/* drivers/edac/e7xxx_edac.c 334 */;
	void cocci_id/* drivers/edac/e7xxx_edac.c 332 */;
	struct e7xxx_error_info *cocci_id/* drivers/edac/e7xxx_edac.c 257 */;
	struct e7xxx_pvt *cocci_id/* drivers/edac/e7xxx_edac.c 186 */;
	u32 cocci_id/* drivers/edac/e7xxx_edac.c 185 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/e7xxx_edac.c 182 */;
	unsigned long cocci_id/* drivers/edac/e7xxx_edac.c 182 */;
	u16 cocci_id/* drivers/edac/e7xxx_edac.c 166 */;
	const struct e7xxx_dev_info cocci_id/* drivers/edac/e7xxx_edac.c 150 */[];
	struct edac_pci_ctl_info *cocci_id/* drivers/edac/e7xxx_edac.c 148 */;
	struct e7xxx_error_info {
		u8 dram_ferr;
		u8 dram_nerr;
		u32 dram_celog_add;
		u16 dram_celog_syndrome;
		u32 dram_uelog_add;
	} cocci_id/* drivers/edac/e7xxx_edac.c 140 */;
	struct e7xxx_dev_info {
		u16 err_dev;
		const char *ctl_name;
	} cocci_id/* drivers/edac/e7xxx_edac.c 135 */;
	struct e7xxx_pvt {
		struct pci_dev *bridge_ck;
		u32 tolm;
		u32 remapbase;
		u32 remaplimit;
		const struct e7xxx_dev_info *dev_info;
	} cocci_id/* drivers/edac/e7xxx_edac.c 127 */;
	enum e7xxx_chips{E7500=0, E7501, E7505, E7205,} cocci_id/* drivers/edac/e7xxx_edac.c 120 */;
}
