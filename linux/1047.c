cocci_test_suite() {
	u8 cocci_id/* drivers/mtd/maps/amd76xrom.c 72 */;
	struct amd76xrom_map_info *cocci_id/* drivers/mtd/maps/amd76xrom.c 71 */;
	struct amd76xrom_window *cocci_id/* drivers/mtd/maps/amd76xrom.c 69 */;
	void cocci_id/* drivers/mtd/maps/amd76xrom.c 69 */;
	struct amd76xrom_window cocci_id/* drivers/mtd/maps/amd76xrom.c 65 */;
	uint cocci_id/* drivers/mtd/maps/amd76xrom.c 62 */;
	struct amd76xrom_map_info {
		struct list_head list;
		struct map_info map;
		struct mtd_info *mtd;
		struct resource rsrc;
		char map_name[sizeof(MOD_NAME) + 2 + ADDRESS_NAME_LEN];
	} cocci_id/* drivers/mtd/maps/amd76xrom.c 40 */;
	void __exit cocci_id/* drivers/mtd/maps/amd76xrom.c 340 */;
	int __init cocci_id/* drivers/mtd/maps/amd76xrom.c 320 */;
	struct amd76xrom_window {
		void __iomem *virt;
		unsigned long phys;
		unsigned long size;
		struct list_head maps;
		struct resource rsrc;
		struct pci_dev *pdev;
	} cocci_id/* drivers/mtd/maps/amd76xrom.c 31 */;
	const struct pci_device_id cocci_id/* drivers/mtd/maps/amd76xrom.c 300 */[];
	char **cocci_id/* drivers/mtd/maps/amd76xrom.c 213 */;
	unsigned long long cocci_id/* drivers/mtd/maps/amd76xrom.c 207 */;
	void __iomem *cocci_id/* drivers/mtd/maps/amd76xrom.c 202 */;
	struct cfi_private *cocci_id/* drivers/mtd/maps/amd76xrom.c 186 */;
	unsigned long cocci_id/* drivers/mtd/maps/amd76xrom.c 111 */;
	char *cocci_id/* drivers/mtd/maps/amd76xrom.c 107 */[];
	const struct pci_device_id *cocci_id/* drivers/mtd/maps/amd76xrom.c 105 */;
	struct pci_dev *cocci_id/* drivers/mtd/maps/amd76xrom.c 104 */;
	int cocci_id/* drivers/mtd/maps/amd76xrom.c 104 */;
}
