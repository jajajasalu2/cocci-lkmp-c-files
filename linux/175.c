cocci_test_suite() {
	struct irq_devres *cocci_id/* kernel/irq/devres.c 27 */;
	u32 cocci_id/* kernel/irq/devres.c 263 */;
	enum irq_gc_flags cocci_id/* kernel/irq/devres.c 263 */;
	struct irq_generic_chip_devres *cocci_id/* kernel/irq/devres.c 242 */;
	struct irq_generic_chip_devres {
		struct irq_chip_generic *gc;
		u32 msk;
		unsigned int clr;
		unsigned int set;
	} cocci_id/* kernel/irq/devres.c 233 */;
	irq_flow_handler_t cocci_id/* kernel/irq/devres.c 220 */;
	void __iomem *cocci_id/* kernel/irq/devres.c 219 */;
	const char *cocci_id/* kernel/irq/devres.c 218 */;
	struct irq_chip_generic *cocci_id/* kernel/irq/devres.c 217 */;
	struct irq_desc_devres *cocci_id/* kernel/irq/devres.c 182 */;
	const struct irq_affinity_desc *cocci_id/* kernel/irq/devres.c 180 */;
	struct module *cocci_id/* kernel/irq/devres.c 179 */;
	struct device *cocci_id/* kernel/irq/devres.c 178 */;
	unsigned int cocci_id/* kernel/irq/devres.c 178 */;
	int cocci_id/* kernel/irq/devres.c 178 */;
	struct irq_desc_devres {
		unsigned int from;
		unsigned int cnt;
	} cocci_id/* kernel/irq/devres.c 149 */;
	struct irq_devres cocci_id/* kernel/irq/devres.c 141 */;
	void *cocci_id/* kernel/irq/devres.c 139 */;
	void cocci_id/* kernel/irq/devres.c 139 */;
	struct irq_devres {
		unsigned int irq;
		void *dev_id;
	} cocci_id/* kernel/irq/devres.c 13 */;
	irq_handler_t cocci_id/* kernel/irq/devres.c 100 */;
	unsigned long cocci_id/* kernel/irq/devres.c 100 */;
}
