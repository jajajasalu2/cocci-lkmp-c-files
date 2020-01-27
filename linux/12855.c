cocci_test_suite() {
	void __exit cocci_id/* drivers/edac/ie31200_edac.c 603 */;
	int __init cocci_id/* drivers/edac/ie31200_edac.c 594 */;
	struct pci_driver cocci_id/* drivers/edac/ie31200_edac.c 587 */;
	const struct pci_device_id cocci_id/* drivers/edac/ie31200_edac.c 563 */[];
	const struct pci_device_id *cocci_id/* drivers/edac/ie31200_edac.c 539 */;
	unsigned long cocci_id/* drivers/edac/ie31200_edac.c 485 */;
	struct dimm_info *cocci_id/* drivers/edac/ie31200_edac.c 484 */;
	struct ie31200_priv cocci_id/* drivers/edac/ie31200_edac.c 426 */;
	struct dimm_data cocci_id/* drivers/edac/ie31200_edac.c 400 */[IE31200_CHANNELS][IE31200_DIMMS_PER_CHANNEL];
	struct edac_mc_layer cocci_id/* drivers/edac/ie31200_edac.c 399 */[2];
	int cocci_id/* drivers/edac/ie31200_edac.c 378 */;
	u32 cocci_id/* drivers/edac/ie31200_edac.c 377 */;
	struct dimm_data *cocci_id/* drivers/edac/ie31200_edac.c 377 */;
	void cocci_id/* drivers/edac/ie31200_edac.c 377 */;
	unsigned long long cocci_id/* drivers/edac/ie31200_edac.c 356 */;
	resource_size_t cocci_id/* drivers/edac/ie31200_edac.c 354 */;
	union {
		u64 mchbar;
		struct {
			u32 mchbar_low;
			u32 mchbar_high;
		};
	} cocci_id/* drivers/edac/ie31200_edac.c 341 */;
	void __iomem *cocci_id/* drivers/edac/ie31200_edac.c 339 */;
	struct ie31200_error_info cocci_id/* drivers/edac/ie31200_edac.c 332 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/ie31200_edac.c 330 */;
	struct ie31200_priv *cocci_id/* drivers/edac/ie31200_edac.c 261 */;
	struct ie31200_error_info *cocci_id/* drivers/edac/ie31200_edac.c 258 */;
	u64 cocci_id/* drivers/edac/ie31200_edac.c 241 */;
	unsigned char cocci_id/* drivers/edac/ie31200_edac.c 233 */;
	bool cocci_id/* drivers/edac/ie31200_edac.c 231 */;
	struct pci_dev *cocci_id/* drivers/edac/ie31200_edac.c 231 */;
	struct dimm_data {
		u8 size;
		u8 dual_rank:1,x16_width:2;
	} cocci_id/* drivers/edac/ie31200_edac.c 200 */;
	const struct ie31200_dev_info cocci_id/* drivers/edac/ie31200_edac.c 194 */[];
	struct ie31200_error_info {
		u16 errsts;
		u16 errsts2;
		u64 eccerrlog[IE31200_CHANNELS];
	} cocci_id/* drivers/edac/ie31200_edac.c 188 */;
	struct ie31200_dev_info {
		const char *ctl_name;
	} cocci_id/* drivers/edac/ie31200_edac.c 184 */;
	enum ie31200_chips{IE31200=0,} cocci_id/* drivers/edac/ie31200_edac.c 180 */;
	struct ie31200_priv {
		void __iomem *window;
		void __iomem *c0errlog;
		void __iomem *c1errlog;
	} cocci_id/* drivers/edac/ie31200_edac.c 174 */;
}
