cocci_test_suite() {
	u32 cocci_id/* drivers/mtd/maps/pci.c 90 */;
	const struct map_info cocci_id/* drivers/mtd/maps/pci.c 77 */;
	const void *cocci_id/* drivers/mtd/maps/pci.c 71 */;
	struct map_info *cocci_id/* drivers/mtd/maps/pci.c 53 */;
	void *cocci_id/* drivers/mtd/maps/pci.c 53 */;
	ssize_t cocci_id/* drivers/mtd/maps/pci.c 53 */;
	map_word cocci_id/* drivers/mtd/maps/pci.c 45 */;
	struct pci_driver cocci_id/* drivers/mtd/maps/pci.c 318 */;
	struct map_pci_info {
		struct map_info map;
		void __iomem *base;
		void (*exit)(struct pci_dev *dev, struct map_pci_info *map);
		unsigned long (*translate)(struct map_pci_info *map,
					   unsigned long ofs);
		struct pci_dev *dev;
	} cocci_id/* drivers/mtd/maps/pci.c 29 */;
	struct mtd_info *cocci_id/* drivers/mtd/maps/pci.c 256 */;
	struct mtd_pci_info *cocci_id/* drivers/mtd/maps/pci.c 254 */;
	const struct pci_device_id *cocci_id/* drivers/mtd/maps/pci.c 252 */;
	const struct pci_device_id cocci_id/* drivers/mtd/maps/pci.c 228 */[];
	struct mtd_pci_info {
		int (*init)(struct pci_dev *dev, struct map_pci_info *map);
		void (*exit)(struct pci_dev *dev, struct map_pci_info *map);
		unsigned long (*translate)(struct map_pci_info *map,
					   unsigned long ofs);
		const char *map_name;
	} cocci_id/* drivers/mtd/maps/pci.c 22 */;
	struct mtd_pci_info cocci_id/* drivers/mtd/maps/pci.c 217 */;
	struct pci_dev *cocci_id/* drivers/mtd/maps/pci.c 200 */;
	struct map_pci_info *cocci_id/* drivers/mtd/maps/pci.c 200 */;
	struct map_pci_info cocci_id/* drivers/mtd/maps/pci.c 20 */;
	void cocci_id/* drivers/mtd/maps/pci.c 199 */;
	unsigned long cocci_id/* drivers/mtd/maps/pci.c 158 */;
	int cocci_id/* drivers/mtd/maps/pci.c 155 */;
}
