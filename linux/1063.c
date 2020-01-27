cocci_test_suite() {
	u8 cocci_id/* drivers/mtd/maps/ichxrom.c 97 */;
	unsigned long cocci_id/* drivers/mtd/maps/ichxrom.c 96 */;
	char *cocci_id/* drivers/mtd/maps/ichxrom.c 93 */[];
	const struct pci_device_id *cocci_id/* drivers/mtd/maps/ichxrom.c 91 */;
	struct pci_dev *cocci_id/* drivers/mtd/maps/ichxrom.c 90 */;
	int __init cocci_id/* drivers/mtd/maps/ichxrom.c 90 */;
	int cocci_id/* drivers/mtd/maps/ichxrom.c 61 */;
	u16 cocci_id/* drivers/mtd/maps/ichxrom.c 60 */;
	struct ichxrom_map_info *cocci_id/* drivers/mtd/maps/ichxrom.c 59 */;
	struct ichxrom_window *cocci_id/* drivers/mtd/maps/ichxrom.c 57 */;
	struct ichxrom_window cocci_id/* drivers/mtd/maps/ichxrom.c 53 */;
	struct ichxrom_map_info {
		struct list_head list;
		struct map_info map;
		struct mtd_info *mtd;
		struct resource rsrc;
		char map_name[sizeof(MOD_NAME) + 2 + ADDRESS_NAME_LEN];
	} cocci_id/* drivers/mtd/maps/ichxrom.c 45 */;
	void __exit cocci_id/* drivers/mtd/maps/ichxrom.c 373 */;
	void cocci_id/* drivers/mtd/maps/ichxrom.c 373 */;
	struct ichxrom_window {
		void __iomem *virt;
		unsigned long phys;
		unsigned long size;
		struct list_head maps;
		struct resource rsrc;
		struct pci_dev *pdev;
	} cocci_id/* drivers/mtd/maps/ichxrom.c 36 */;
	const struct pci_device_id cocci_id/* drivers/mtd/maps/ichxrom.c 327 */[];
	char **cocci_id/* drivers/mtd/maps/ichxrom.c 240 */;
	unsigned long long cocci_id/* drivers/mtd/maps/ichxrom.c 231 */;
	void __iomem *cocci_id/* drivers/mtd/maps/ichxrom.c 226 */;
	struct cfi_private *cocci_id/* drivers/mtd/maps/ichxrom.c 210 */;
}
