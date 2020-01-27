cocci_test_suite() {
	enum interrupt_sysfs_attribute_type{ATTR_INTERRUPT_COUNTS,} cocci_id/* drivers/staging/gasket/gasket_interrupt.c 70 */;
	const struct gasket_driver_desc *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 319 */;
	struct gasket_sysfs_attribute cocci_id/* drivers/staging/gasket/gasket_interrupt.c 309 */[];
	enum interrupt_sysfs_attribute_type cocci_id/* drivers/staging/gasket/gasket_interrupt.c 267 */;
	struct gasket_sysfs_attribute *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 266 */;
	struct device_attribute *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 260 */;
	char *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 260 */;
	struct device *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 259 */;
	ssize_t cocci_id/* drivers/staging/gasket/gasket_interrupt.c 259 */;
	u32 cocci_id/* drivers/staging/gasket/gasket_interrupt.c 243 */;
	ulong cocci_id/* drivers/staging/gasket/gasket_interrupt.c 241 */;
	int cocci_id/* drivers/staging/gasket/gasket_interrupt.c 235 */;
	struct gasket_dev *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 233 */;
	void cocci_id/* drivers/staging/gasket/gasket_interrupt.c 233 */;
	struct gasket_interrupt_data {
		const char *name;
		int type;
		struct pci_dev *pci_dev;
		int msix_configured;
		int num_interrupts;
		const struct gasket_interrupt_desc *interrupts;
		int interrupt_bar_index;
		int pack_width;
		int num_configured;
		struct msix_entry *msix_entries;
		struct eventfd_ctx **eventfd_ctxs;
		ulong *interrupt_counts;
		int irq;
	} cocci_id/* drivers/staging/gasket/gasket_interrupt.c 22 */;
	irqreturn_t cocci_id/* drivers/staging/gasket/gasket_interrupt.c 155 */;
	void *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 155 */;
	struct eventfd_ctx *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 145 */;
	struct gasket_interrupt_data *cocci_id/* drivers/staging/gasket/gasket_interrupt.c 142 */;
}
