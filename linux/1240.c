cocci_test_suite() {
	u32 cocci_id/* drivers/usb/host/pci-quirks.c 854 */;
	void __iomem *cocci_id/* drivers/usb/host/pci-quirks.c 853 */;
	struct pci_dev *cocci_id/* drivers/usb/host/pci-quirks.c 852 */;
	void cocci_id/* drivers/usb/host/pci-quirks.c 852 */;
	const struct dmi_system_id cocci_id/* drivers/usb/host/pci-quirks.c 819 */[];
	bool cocci_id/* drivers/usb/host/pci-quirks.c 751 */;
	unsigned long cocci_id/* drivers/usb/host/pci-quirks.c 725 */;
	u16 cocci_id/* drivers/usb/host/pci-quirks.c 716 */;
	unsigned int cocci_id/* drivers/usb/host/pci-quirks.c 714 */;
	unsigned char cocci_id/* drivers/usb/host/pci-quirks.c 549 */;
	struct amd_chipset_info cocci_id/* drivers/usb/host/pci-quirks.c 207 */;
	struct device *cocci_id/* drivers/usb/host/pci-quirks.c 191 */;
	u8 cocci_id/* drivers/usb/host/pci-quirks.c 150 */;
	struct amd_chipset_info *cocci_id/* drivers/usb/host/pci-quirks.c 148 */;
	int cocci_id/* drivers/usb/host/pci-quirks.c 148 */;
	struct amd_chipset_info {
		struct pci_dev *nb_dev;
		struct pci_dev *smbus_dev;
		int nb_type;
		struct amd_chipset_type sb_type;
		int isoc_reqs;
		int probe_count;
		bool need_pll_quirk;
	} cocci_id/* drivers/usb/host/pci-quirks.c 128 */;
	struct amd_chipset_type {
		enum amd_chipset_gen gen;
		u8 rev;
	} cocci_id/* drivers/usb/host/pci-quirks.c 123 */;
	enum amd_chipset_gen{NOT_AMD_CHIPSET=0, AMD_CHIPSET_SB600, AMD_CHIPSET_SB700, AMD_CHIPSET_SB800, AMD_CHIPSET_HUDSON2, AMD_CHIPSET_BOLTON, AMD_CHIPSET_YANGTZE, AMD_CHIPSET_TAISHAN, AMD_CHIPSET_UNKNOWN,} cocci_id/* drivers/usb/host/pci-quirks.c 111 */;
}
