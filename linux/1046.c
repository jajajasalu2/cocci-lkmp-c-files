cocci_test_suite() {
	u8 cocci_id/* drivers/mtd/maps/ck804xrom.c 85 */;
	struct ck804xrom_map_info *cocci_id/* drivers/mtd/maps/ck804xrom.c 84 */;
	struct ck804xrom_window *cocci_id/* drivers/mtd/maps/ck804xrom.c 82 */;
	void cocci_id/* drivers/mtd/maps/ck804xrom.c 82 */;
	struct ck804xrom_window cocci_id/* drivers/mtd/maps/ck804xrom.c 78 */;
	uint cocci_id/* drivers/mtd/maps/ck804xrom.c 75 */;
	struct ck804xrom_map_info {
		struct list_head list;
		struct map_info map;
		struct mtd_info *mtd;
		struct resource rsrc;
		char map_name[sizeof(MOD_NAME) + 2 + ADDRESS_NAME_LEN];
	} cocci_id/* drivers/mtd/maps/ck804xrom.c 44 */;
	void __exit cocci_id/* drivers/mtd/maps/ck804xrom.c 377 */;
	struct ck804xrom_window {
		void __iomem *virt;
		unsigned long phys;
		unsigned long size;
		struct list_head maps;
		struct resource rsrc;
		struct pci_dev *pdev;
	} cocci_id/* drivers/mtd/maps/ck804xrom.c 35 */;
	const struct pci_device_id cocci_id/* drivers/mtd/maps/ck804xrom.c 330 */[];
	char **cocci_id/* drivers/mtd/maps/ck804xrom.c 243 */;
	unsigned long long cocci_id/* drivers/mtd/maps/ck804xrom.c 237 */;
	void __iomem *cocci_id/* drivers/mtd/maps/ck804xrom.c 232 */;
	int cocci_id/* drivers/mtd/maps/ck804xrom.c 218 */;
	struct cfi_private *cocci_id/* drivers/mtd/maps/ck804xrom.c 216 */;
	unsigned long cocci_id/* drivers/mtd/maps/ck804xrom.c 124 */;
	u16 cocci_id/* drivers/mtd/maps/ck804xrom.c 121 */;
	char *cocci_id/* drivers/mtd/maps/ck804xrom.c 119 */[];
	const struct pci_device_id *cocci_id/* drivers/mtd/maps/ck804xrom.c 117 */;
	struct pci_dev *cocci_id/* drivers/mtd/maps/ck804xrom.c 116 */;
	int __init cocci_id/* drivers/mtd/maps/ck804xrom.c 116 */;
}
