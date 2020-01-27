cocci_test_suite() {
	struct esb2rom_window {
		void __iomem *virt;
		unsigned long phys;
		unsigned long size;
		struct list_head maps;
		struct resource rsrc;
		struct pci_dev *pdev;
	} cocci_id/* drivers/mtd/maps/esb2rom.c 97 */;
	void __exit cocci_id/* drivers/mtd/maps/esb2rom.c 443 */;
	void cocci_id/* drivers/mtd/maps/esb2rom.c 443 */;
	const struct pci_device_id cocci_id/* drivers/mtd/maps/esb2rom.c 388 */[];
	char **cocci_id/* drivers/mtd/maps/esb2rom.c 304 */;
	unsigned long long cocci_id/* drivers/mtd/maps/esb2rom.c 296 */;
	void __iomem *cocci_id/* drivers/mtd/maps/esb2rom.c 291 */;
	int cocci_id/* drivers/mtd/maps/esb2rom.c 278 */;
	struct cfi_private *cocci_id/* drivers/mtd/maps/esb2rom.c 276 */;
	u16 cocci_id/* drivers/mtd/maps/esb2rom.c 156 */;
	unsigned long cocci_id/* drivers/mtd/maps/esb2rom.c 154 */;
	char *cocci_id/* drivers/mtd/maps/esb2rom.c 151 */[];
	const struct pci_device_id *cocci_id/* drivers/mtd/maps/esb2rom.c 149 */;
	struct pci_dev *cocci_id/* drivers/mtd/maps/esb2rom.c 148 */;
	int __init cocci_id/* drivers/mtd/maps/esb2rom.c 148 */;
	u8 cocci_id/* drivers/mtd/maps/esb2rom.c 121 */;
	struct esb2rom_map_info *cocci_id/* drivers/mtd/maps/esb2rom.c 120 */;
	struct esb2rom_window *cocci_id/* drivers/mtd/maps/esb2rom.c 118 */;
	struct esb2rom_window cocci_id/* drivers/mtd/maps/esb2rom.c 114 */;
	struct esb2rom_map_info {
		struct list_head list;
		struct map_info map;
		struct mtd_info *mtd;
		struct resource rsrc;
		char map_name[sizeof(MOD_NAME) + 2 + ADDRESS_NAME_LEN];
	} cocci_id/* drivers/mtd/maps/esb2rom.c 106 */;
}
