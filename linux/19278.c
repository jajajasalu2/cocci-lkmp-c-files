cocci_test_suite() {
	unsigned int *cocci_id/* arch/arc/kernel/intc-arcv2.c 46 */;
	struct aux_irq_ctrl {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int res3:18,save_idx_regs:1,res2:1,save_u_to_u:1,save_lp_regs:1,save_blink:1,res:4,save_nr_gpr_pairs:5;
#else
		unsigned int save_nr_gpr_pairs:5,res:4,save_blink:1,save_lp_regs:1,save_u_to_u:1,res2:1,save_idx_regs:1,res3:18;
#endif
	} cocci_id/* arch/arc/kernel/intc-arcv2.c 34 */;
	struct bcr_irq_arcv2 cocci_id/* arch/arc/kernel/intc-arcv2.c 32 */;
	unsigned int cocci_id/* arch/arc/kernel/intc-arcv2.c 31 */;
	void cocci_id/* arch/arc/kernel/intc-arcv2.c 29 */;
	struct device_node *cocci_id/* arch/arc/kernel/intc-arcv2.c 161 */;
	int __init cocci_id/* arch/arc/kernel/intc-arcv2.c 160 */;
	const struct irq_domain_ops cocci_id/* arch/arc/kernel/intc-arcv2.c 154 */;
	struct bcr_irq_arcv2 {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int pad:3,firq:1,prio:4,exts:8,irqs:8,ver:8;
#else
		unsigned int ver:8,irqs:8,exts:8,prio:4,firq:1,pad:3;
#endif
	} cocci_id/* arch/arc/kernel/intc-arcv2.c 15 */;
	irq_hw_number_t cocci_id/* arch/arc/kernel/intc-arcv2.c 133 */;
	struct irq_domain *cocci_id/* arch/arc/kernel/intc-arcv2.c 132 */;
	int cocci_id/* arch/arc/kernel/intc-arcv2.c 132 */;
	struct irq_chip cocci_id/* arch/arc/kernel/intc-arcv2.c 125 */;
	struct irq_data *cocci_id/* arch/arc/kernel/intc-arcv2.c 111 */;
}
