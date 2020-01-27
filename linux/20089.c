cocci_test_suite() {
	struct irq_chip *cocci_id/* arch/mips/vr41xx/common/irq.c 62 */;
	struct irq_data *cocci_id/* arch/mips/vr41xx/common/irq.c 61 */;
	struct irq_desc *cocci_id/* arch/mips/vr41xx/common/irq.c 60 */;
	irq_cascade_t *cocci_id/* arch/mips/vr41xx/common/irq.c 51 */;
	int (*cocci_id/* arch/mips/vr41xx/common/irq.c 26 */)(unsigned int);
	unsigned int cocci_id/* arch/mips/vr41xx/common/irq.c 26 */;
	int cocci_id/* arch/mips/vr41xx/common/irq.c 26 */;
	struct irqaction cocci_id/* arch/mips/vr41xx/common/irq.c 20 */;
	irq_cascade_t cocci_id/* arch/mips/vr41xx/common/irq.c 18 */[NR_IRQS]__cacheline_aligned;
	struct irq_cascade {
		int (*get_irq)(unsigned int);
	} cocci_id/* arch/mips/vr41xx/common/irq.c 14 */;
	void __init cocci_id/* arch/mips/vr41xx/common/irq.c 108 */;
	void cocci_id/* arch/mips/vr41xx/common/irq.c 108 */;
}
