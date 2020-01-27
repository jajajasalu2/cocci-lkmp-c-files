cocci_test_suite() {
	enum devm_ioremap_type{DEVM_IOREMAP=0, DEVM_IOREMAP_NC, DEVM_IOREMAP_UC, DEVM_IOREMAP_WC,} cocci_id/* lib/devres.c 9 */;
	void __iomem *const*cocci_id/* lib/devres.c 412 */;
	const char *cocci_id/* lib/devres.c 410 */;
	struct pci_dev *cocci_id/* lib/devres.c 361 */;
	struct pcim_iomap_devres *cocci_id/* lib/devres.c 315 */;
	struct pcim_iomap_devres {
		void __iomem *table[PCIM_IOMAP_MAX];
	} cocci_id/* lib/devres.c 308 */;
	void __iomem **cocci_id/* lib/devres.c 30 */;
	enum devm_ioremap_type cocci_id/* lib/devres.c 28 */;
	unsigned int cocci_id/* lib/devres.c 266 */;
	unsigned long cocci_id/* lib/devres.c 265 */;
	resource_size_t cocci_id/* lib/devres.c 26 */;
	struct device *cocci_id/* lib/devres.c 26 */;
	void __iomem *cocci_id/* lib/devres.c 26 */;
	void **cocci_id/* lib/devres.c 253 */;
	void *cocci_id/* lib/devres.c 250 */;
	int cocci_id/* lib/devres.c 250 */;
	void cocci_id/* lib/devres.c 245 */;
	struct resource cocci_id/* lib/devres.c 231 */;
	resource_size_t *cocci_id/* lib/devres.c 229 */;
	struct device_node *cocci_id/* lib/devres.c 228 */;
	const struct resource *cocci_id/* lib/devres.c 137 */;
}
