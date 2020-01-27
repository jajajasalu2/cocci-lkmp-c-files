cocci_test_suite() {
	long cocci_id/* drivers/edac/i7core_edac.c 919 */;
	u64 cocci_id/* drivers/edac/i7core_edac.c 917 */;
	char *cocci_id/* drivers/edac/i7core_edac.c 781 */;
	struct device_attribute *cocci_id/* drivers/edac/i7core_edac.c 780 */;
	ssize_t cocci_id/* drivers/edac/i7core_edac.c 779 */;
	const char *cocci_id/* drivers/edac/i7core_edac.c 761 */;
	size_t cocci_id/* drivers/edac/i7core_edac.c 761 */;
	struct i7core_pvt *cocci_id/* drivers/edac/i7core_edac.c 662 */;
	const struct mem_ctl_info *cocci_id/* drivers/edac/i7core_edac.c 660 */;
	int cocci_id/* drivers/edac/i7core_edac.c 660 */;
	struct mem_ctl_info cocci_id/* drivers/edac/i7core_edac.c 651 */;
	struct dimm_info *cocci_id/* drivers/edac/i7core_edac.c 494 */;
	enum mem_type cocci_id/* drivers/edac/i7core_edac.c 493 */;
	enum edac_type cocci_id/* drivers/edac/i7core_edac.c 492 */;
	struct pci_dev *cocci_id/* drivers/edac/i7core_edac.c 490 */;
	const struct pci_id_table *cocci_id/* drivers/edac/i7core_edac.c 454 */;
	u8 cocci_id/* drivers/edac/i7core_edac.c 453 */;
	struct i7core_dev *cocci_id/* drivers/edac/i7core_edac.c 453 */;
	const int cocci_id/* drivers/edac/i7core_edac.c 418 */[];
	const struct pci_device_id cocci_id/* drivers/edac/i7core_edac.c 385 */[];
	const struct pci_id_table cocci_id/* drivers/edac/i7core_edac.c 375 */[];
	const struct pci_id_descr cocci_id/* drivers/edac/i7core_edac.c 284 */[];
	struct i7core_pvt {
		struct device *addrmatch_dev,*chancounts_dev;
		struct pci_dev *pci_noncore;
		struct pci_dev *pci_mcr[MAX_MCR_FUNC + 1];
		struct pci_dev *pci_ch[NUM_CHANS][MAX_CHAN_FUNC + 1];
		struct i7core_dev *i7core_dev;
		struct i7core_info info;
		struct i7core_inject inject;
		struct i7core_channel channel[NUM_CHANS];
		int ce_count_available;
		unsigned long udimm_ce_count[MAX_DIMMS];
		int udimm_last_ce_count[MAX_DIMMS];
		unsigned long rdimm_ce_count[NUM_CHANS][MAX_DIMMS];
		int rdimm_last_ce_count[NUM_CHANS][MAX_DIMMS];
		bool is_registered,enable_scrub;
		int dclk_freq;
		struct edac_pci_ctl_info *i7core_pci;
	} cocci_id/* drivers/edac/i7core_edac.c 248 */;
	struct i7core_dev {
		struct list_head list;
		u8 socket;
		struct pci_dev **pdev;
		int n_devs;
		struct mem_ctl_info *mci;
	} cocci_id/* drivers/edac/i7core_edac.c 240 */;
	void __exit cocci_id/* drivers/edac/i7core_edac.c 2381 */;
	int __init cocci_id/* drivers/edac/i7core_edac.c 2352 */;
	struct pci_id_table {
		const struct pci_id_descr *descr;
		int n_devs;
	} cocci_id/* drivers/edac/i7core_edac.c 235 */;
	struct pci_driver cocci_id/* drivers/edac/i7core_edac.c 2341 */;
	struct pci_id_descr {
		int dev;
		int func;
		int dev_id;
		int optional;
	} cocci_id/* drivers/edac/i7core_edac.c 228 */;
	const struct pci_device_id *cocci_id/* drivers/edac/i7core_edac.c 2241 */;
	struct i7core_channel {
		bool is_3dimms_present;
		bool is_single_4rank;
		bool has_4rank;
		u32 dimms;
	} cocci_id/* drivers/edac/i7core_edac.c 221 */;
	struct edac_mc_layer cocci_id/* drivers/edac/i7core_edac.c 2133 */[2];
	struct i7core_inject {
		int enable;
		u32 section;
		u32 type;
		u32 eccmask;
		int channel,dimm,rank,bank,page,col;
	} cocci_id/* drivers/edac/i7core_edac.c 210 */;
	u32 cocci_id/* drivers/edac/i7core_edac.c 2065 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/i7core_edac.c 2062 */;
	unsigned long long cocci_id/* drivers/edac/i7core_edac.c 2024 */;
	const u32 cocci_id/* drivers/edac/i7core_edac.c 2022 */;
	struct i7core_info {
		u32 mc_control;
		u32 mc_status;
		u32 max_dod;
		u32 ch_map;
	} cocci_id/* drivers/edac/i7core_edac.c 202 */;
	unsigned long cocci_id/* drivers/edac/i7core_edac.c 1887 */;
	struct memdev_dmi_entry *cocci_id/* drivers/edac/i7core_edac.c 1885 */;
	u16 cocci_id/* drivers/edac/i7core_edac.c 1879 */;
	int *cocci_id/* drivers/edac/i7core_edac.c 1878 */;
	const struct dmi_header *cocci_id/* drivers/edac/i7core_edac.c 1876 */;
	void *cocci_id/* drivers/edac/i7core_edac.c 1876 */;
	struct memdev_dmi_entry {
		u8 type;
		u8 length;
		u16 handle;
		u16 phys_mem_array_handle;
		u16 mem_err_info_handle;
		u16 total_width;
		u16 data_width;
		u16 size;
		u8 form;
		u8 device_set;
		u8 device_locator;
		u8 bank_locator;
		u8 memory_type;
		u16 type_detail;
		u16 speed;
		u8 manufacturer;
		u8 serial_number;
		u8 asset_tag;
		u8 part_number;
		u8 attributes;
		u32 extended_size;
		u16 conf_mem_clk_speed;
	}__attribute__((__packed__)) cocci_id/* drivers/edac/i7core_edac.c 1845 */;
	struct notifier_block cocci_id/* drivers/edac/i7core_edac.c 1840 */;
	struct notifier_block *cocci_id/* drivers/edac/i7core_edac.c 1810 */;
	struct mce *cocci_id/* drivers/edac/i7core_edac.c 1791 */;
	bool cocci_id/* drivers/edac/i7core_edac.c 1701 */;
	enum hw_event_mc_err_type cocci_id/* drivers/edac/i7core_edac.c 1699 */;
	const struct mce *cocci_id/* drivers/edac/i7core_edac.c 1695 */;
	u32 cocci_id/* drivers/edac/i7core_edac.c 1585 */[3][2];
	const int cocci_id/* drivers/edac/i7core_edac.c 1533 */;
	const struct pci_id_descr *cocci_id/* drivers/edac/i7core_edac.c 1310 */;
	const unsigned cocci_id/* drivers/edac/i7core_edac.c 1306 */;
	struct pci_dev **cocci_id/* drivers/edac/i7core_edac.c 1304 */;
	struct pci_bus *cocci_id/* drivers/edac/i7core_edac.c 1284 */;
	unsigned cocci_id/* drivers/edac/i7core_edac.c 1281 */;
	void __init cocci_id/* drivers/edac/i7core_edac.c 1260 */;
	const struct device_type cocci_id/* drivers/edac/i7core_edac.c 1094 */;
	struct device *cocci_id/* drivers/edac/i7core_edac.c 1088 */;
	void cocci_id/* drivers/edac/i7core_edac.c 1088 */;
	const struct attribute_group *cocci_id/* drivers/edac/i7core_edac.c 1083 */[];
	const struct attribute_group cocci_id/* drivers/edac/i7core_edac.c 1079 */;
	struct attribute *cocci_id/* drivers/edac/i7core_edac.c 1069 */[];
}
