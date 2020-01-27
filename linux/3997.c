cocci_test_suite() {
	unsigned long cocci_id/* drivers/irqchip/irq-gic.c 954 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-gic.c 806 */;
	struct notifier_block cocci_id/* drivers/irqchip/irq-gic.c 765 */;
	struct notifier_block *cocci_id/* drivers/irqchip/irq-gic.c 734 */;
	u32 *cocci_id/* drivers/irqchip/irq-gic.c 695 */;
	union gic_base {
		void __iomem *common_base;
		void __percpu *__iomem*percpu_base;
	} cocci_id/* drivers/irqchip/irq-gic.c 63 */;
	u32 cocci_id/* drivers/irqchip/irq-gic.c 463 */;
	u8 cocci_id/* drivers/irqchip/irq-gic.c 442 */;
	unsigned int cocci_id/* drivers/irqchip/irq-gic.c 435 */;
	const struct irq_chip cocci_id/* drivers/irqchip/irq-gic.c 423 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-gic.c 399 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-gic.c 396 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-gic.c 358 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-gic.c 358 */;
	enum irqchip_irq_state cocci_id/* drivers/irqchip/irq-gic.c 268 */;
	bool *cocci_id/* drivers/irqchip/irq-gic.c 268 */;
	void *cocci_id/* drivers/irqchip/irq-gic.c 178 */;
	bool cocci_id/* drivers/irqchip/irq-gic.c 176 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-gic.c 176 */;
	struct acpi_madt_generic_distributor *cocci_id/* drivers/irqchip/irq-gic.c 1599 */;
	struct acpi_subtable_header *cocci_id/* drivers/irqchip/irq-gic.c 1596 */;
	struct resource *cocci_id/* drivers/irqchip/irq-gic.c 1566 */;
	void __init cocci_id/* drivers/irqchip/irq-gic.c 1563 */;
	struct acpi_probe_entry *cocci_id/* drivers/irqchip/irq-gic.c 1548 */;
	bool __init cocci_id/* drivers/irqchip/irq-gic.c 1541 */;
	void cocci_id/* drivers/irqchip/irq-gic.c 1541 */;
	const unsigned long cocci_id/* drivers/irqchip/irq-gic.c 1536 */;
	union acpi_subtable_headers *cocci_id/* drivers/irqchip/irq-gic.c 1535 */;
	phys_addr_t cocci_id/* drivers/irqchip/irq-gic.c 1507 */;
	struct acpi_madt_generic_interrupt *cocci_id/* drivers/irqchip/irq-gic.c 1506 */;
	int __init cocci_id/* drivers/irqchip/irq-gic.c 1502 */;
	struct {
		phys_addr_t cpu_phys_base;
		u32 maint_irq;
		int maint_irq_mode;
		phys_addr_t vctrl_base;
		phys_addr_t vcpu_base;
	} cocci_id/* drivers/irqchip/irq-gic.c 1493 */;
	void __iomem *(*cocci_id/* drivers/irqchip/irq-gic.c 149 */)(union gic_base *);
	struct gic_chip_data **cocci_id/* drivers/irqchip/irq-gic.c 1377 */;
	union gic_base *cocci_id/* drivers/irqchip/irq-gic.c 133 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-gic.c 1284 */;
	struct resource cocci_id/* drivers/irqchip/irq-gic.c 1277 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-gic.c 1275 */;
	void __iomem **cocci_id/* drivers/irqchip/irq-gic.c 1275 */;
	struct gic_kvm_info cocci_id/* drivers/irqchip/irq-gic.c 125 */;
	struct gic_chip_data cocci_id/* drivers/irqchip/irq-gic.c 123 */[CONFIG_ARM_GIC_MAX_NR]__read_mostly;
	int cocci_id/* drivers/irqchip/irq-gic.c 1198 */;
	char *cocci_id/* drivers/irqchip/irq-gic.c 1197 */;
	struct fwnode_handle *cocci_id/* drivers/irqchip/irq-gic.c 1195 */;
	struct gic_chip_data *cocci_id/* drivers/irqchip/irq-gic.c 1194 */;
	int __init cocci_id/* drivers/irqchip/irq-gic.c 1194 */;
	u8 cocci_id/* drivers/irqchip/irq-gic.c 119 */[NR_GIC_CPU_IF]__read_mostly;
	const char *cocci_id/* drivers/irqchip/irq-gic.c 1078 */;
	struct device *cocci_id/* drivers/irqchip/irq-gic.c 1077 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-gic.c 1066 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-gic.c 1051 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-gic.c 1049 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-gic.c 1045 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-gic.c 1002 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-gic.c 1001 */;
	struct gic_chip_data {
		struct irq_chip chip;
		union gic_base dist_base;
		union gic_base cpu_base;
		void __iomem *raw_dist_base;
		void __iomem *raw_cpu_base;
		u32 percpu_offset;
#if defined(CONFIG_CPU_PM) || defined(CONFIG_ARM_GIC_PM)
		u32 saved_spi_enable[DIV_ROUND_UP(1020, 32)];
		u32 saved_spi_active[DIV_ROUND_UP(1020, 32)];
		u32 saved_spi_conf[DIV_ROUND_UP(1020, 16)];
		u32 saved_spi_target[DIV_ROUND_UP(1020, 4)];
		u32 __percpu *saved_ppi_enable;
		u32 __percpu *saved_ppi_active;
		u32 __percpu *saved_ppi_conf;
#endif
		struct irq_domain *domain;
		unsigned int gic_irqs;
#ifdef CONFIG_GIC_NON_BANKED
		void __iomem *(*get_base)(union gic_base *);
#endif
	} cocci_id/*  1 */;
}
