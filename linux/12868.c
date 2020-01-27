cocci_test_suite() {
	void __exit cocci_id/* drivers/edac/x38_edac.c 505 */;
	int __init cocci_id/* drivers/edac/x38_edac.c 463 */;
	struct pci_driver cocci_id/* drivers/edac/x38_edac.c 456 */;
	const struct pci_device_id cocci_id/* drivers/edac/x38_edac.c 445 */[];
	const struct pci_device_id *cocci_id/* drivers/edac/x38_edac.c 414 */;
	struct dimm_info *cocci_id/* drivers/edac/x38_edac.c 384 */;
	struct csrow_info *cocci_id/* drivers/edac/x38_edac.c 374 */;
	struct edac_mc_layer cocci_id/* drivers/edac/x38_edac.c 323 */[2];
	bool cocci_id/* drivers/edac/x38_edac.c 302 */;
	int cocci_id/* drivers/edac/x38_edac.c 302 */;
	u16 cocci_id/* drivers/edac/x38_edac.c 301 */[X38_CHANNELS][X38_RANKS_PER_CHANNEL];
	unsigned long cocci_id/* drivers/edac/x38_edac.c 300 */;
	u16 cocci_id/* drivers/edac/x38_edac.c 292 */;
	unsigned long long cocci_id/* drivers/edac/x38_edac.c 265 */;
	resource_size_t cocci_id/* drivers/edac/x38_edac.c 262 */;
	union {
		u64 mchbar;
		struct {
			u32 mchbar_low;
			u32 mchbar_high;
		};
	} cocci_id/* drivers/edac/x38_edac.c 248 */;
	struct x38_error_info cocci_id/* drivers/edac/x38_edac.c 239 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/x38_edac.c 237 */;
	void cocci_id/* drivers/edac/x38_edac.c 237 */;
	void __iomem *cocci_id/* drivers/edac/x38_edac.c 168 */;
	struct x38_error_info *cocci_id/* drivers/edac/x38_edac.c 165 */;
	const struct x38_dev_info cocci_id/* drivers/edac/x38_edac.c 141 */[];
	struct x38_error_info {
		u16 errsts;
		u16 errsts2;
		u64 eccerrlog[X38_CHANNELS];
	} cocci_id/* drivers/edac/x38_edac.c 135 */;
	struct x38_dev_info {
		const char *ctl_name;
	} cocci_id/* drivers/edac/x38_edac.c 131 */;
	enum x38_chips{X38=0,} cocci_id/* drivers/edac/x38_edac.c 127 */;
	u64 cocci_id/* drivers/edac/x38_edac.c 121 */;
	unsigned char cocci_id/* drivers/edac/x38_edac.c 102 */;
	struct pci_dev *cocci_id/* drivers/edac/x38_edac.c 100 */;
}
