cocci_test_suite() {
	void __init cocci_id/* arch/ia64/kernel/iosapic.c 932 */;
	const char *const cocci_id/* arch/ia64/kernel/iosapic.c 860 */[];
	u16 cocci_id/* arch/ia64/kernel/iosapic.c 857 */;
	int __init cocci_id/* arch/ia64/kernel/iosapic.c 855 */;
	struct irq_desc *cocci_id/* arch/ia64/kernel/iosapic.c 720 */;
	u32 cocci_id/* arch/ia64/kernel/iosapic.c 718 */;
	unsigned char cocci_id/* arch/ia64/kernel/iosapic.c 696 */;
	void cocci_id/* arch/ia64/kernel/iosapic.c 696 */;
	const struct cpumask *cocci_id/* arch/ia64/kernel/iosapic.c 651 */;
	cpumask_t cocci_id/* arch/ia64/kernel/iosapic.c 622 */;
	struct irq_chip *cocci_id/* arch/ia64/kernel/iosapic.c 541 */;
	struct iosapic_intr_info cocci_id/* arch/ia64/kernel/iosapic.c 525 */;
	struct irq_chip cocci_id/* arch/ia64/kernel/iosapic.c 455 */;
	struct irq_data *cocci_id/* arch/ia64/kernel/iosapic.c 446 */;
	ia64_vector cocci_id/* arch/ia64/kernel/iosapic.c 392 */;
	struct iosapic *cocci_id/* arch/ia64/kernel/iosapic.c 333 */;
	bool cocci_id/* arch/ia64/kernel/iosapic.c 325 */;
	char cocci_id/* arch/ia64/kernel/iosapic.c 219 */;
	unsigned long cocci_id/* arch/ia64/kernel/iosapic.c 194 */;
	struct iosapic_rte_info *cocci_id/* arch/ia64/kernel/iosapic.c 180 */;
	struct iosapic_intr_info *cocci_id/* arch/ia64/kernel/iosapic.c 179 */;
	unsigned int cocci_id/* arch/ia64/kernel/iosapic.c 176 */;
	int cocci_id/* arch/ia64/kernel/iosapic.c 176 */;
	unsigned cocci_id/* arch/ia64/kernel/iosapic.c 168 */;
	struct iosapic_intr_info {
		struct list_head rtes;
		int count;
		u32 low32;
		unsigned int dest;
		unsigned char dmode:3;
		unsigned char polarity:1;
		unsigned char trigger:1;
	} cocci_id/* arch/ia64/kernel/iosapic.c 134 */[NR_IRQS];
	struct iosapic_rte_info {
		struct list_head rte_list;
		char rte_index;
		int refcnt;
		struct iosapic *iosapic;
	}____cacheline_aligned cocci_id/* arch/ia64/kernel/iosapic.c 127 */;
	struct iosapic {
		char __iomem *addr;
		unsigned int gsi_base;
		unsigned short num_rte;
		int rtes_inuse;
#ifdef CONFIG_NUMA
		unsigned short node;
#endif
		spinlock_t lock;
	} cocci_id/* arch/ia64/kernel/iosapic.c 116 */[NR_IOSAPICS];
	char __iomem *cocci_id/* arch/ia64/kernel/iosapic.c 1032 */;
}
