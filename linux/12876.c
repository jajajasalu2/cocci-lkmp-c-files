cocci_test_suite() {
	struct i3200_priv {
		void __iomem *window;
	} cocci_id/* drivers/edac/i3200_edac.c 99 */;
	void __exit cocci_id/* drivers/edac/i3200_edac.c 527 */;
	int __init cocci_id/* drivers/edac/i3200_edac.c 485 */;
	struct pci_driver cocci_id/* drivers/edac/i3200_edac.c 478 */;
	const struct pci_device_id cocci_id/* drivers/edac/i3200_edac.c 467 */[];
	const struct pci_device_id *cocci_id/* drivers/edac/i3200_edac.c 432 */;
	struct dimm_info *cocci_id/* drivers/edac/i3200_edac.c 395 */;
	struct i3200_priv cocci_id/* drivers/edac/i3200_edac.c 363 */;
	struct edac_mc_layer cocci_id/* drivers/edac/i3200_edac.c 341 */[2];
	int cocci_id/* drivers/edac/i3200_edac.c 318 */;
	bool cocci_id/* drivers/edac/i3200_edac.c 317 */;
	u16 cocci_id/* drivers/edac/i3200_edac.c 317 */[I3200_CHANNELS][I3200_RANKS_PER_CHANNEL];
	unsigned long cocci_id/* drivers/edac/i3200_edac.c 316 */;
	u16 cocci_id/* drivers/edac/i3200_edac.c 308 */;
	unsigned long long cocci_id/* drivers/edac/i3200_edac.c 279 */;
	resource_size_t cocci_id/* drivers/edac/i3200_edac.c 276 */;
	union {
		u64 mchbar;
		struct {
			u32 mchbar_low;
			u32 mchbar_high;
		};
	} cocci_id/* drivers/edac/i3200_edac.c 263 */;
	struct i3200_error_info cocci_id/* drivers/edac/i3200_edac.c 254 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/i3200_edac.c 252 */;
	void cocci_id/* drivers/edac/i3200_edac.c 252 */;
	void __iomem *cocci_id/* drivers/edac/i3200_edac.c 185 */;
	struct i3200_priv *cocci_id/* drivers/edac/i3200_edac.c 184 */;
	struct i3200_error_info *cocci_id/* drivers/edac/i3200_edac.c 181 */;
	const struct i3200_dev_info cocci_id/* drivers/edac/i3200_edac.c 156 */[];
	struct i3200_error_info {
		u16 errsts;
		u16 errsts2;
		u64 eccerrlog[I3200_CHANNELS];
	} cocci_id/* drivers/edac/i3200_edac.c 150 */;
	struct i3200_dev_info {
		const char *ctl_name;
	} cocci_id/* drivers/edac/i3200_edac.c 146 */;
	enum i3200_chips{I3200=0,} cocci_id/* drivers/edac/i3200_edac.c 142 */;
	u64 cocci_id/* drivers/edac/i3200_edac.c 135 */;
	unsigned char cocci_id/* drivers/edac/i3200_edac.c 109 */;
	struct pci_dev *cocci_id/* drivers/edac/i3200_edac.c 105 */;
}
