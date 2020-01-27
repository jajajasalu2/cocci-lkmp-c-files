cocci_test_suite() {
	time64_t cocci_id/* arch/powerpc/sysdev/mpic_timer.c 93 */;
	u64 *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 93 */;
	int cocci_id/* arch/powerpc/sysdev/mpic_timer.c 92 */;
	u64 cocci_id/* arch/powerpc/sysdev/mpic_timer.c 88 */;
	const u64 cocci_id/* arch/powerpc/sysdev/mpic_timer.c 86 */;
	time64_t *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 86 */;
	struct timer_group_priv *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 85 */;
	void cocci_id/* arch/powerpc/sysdev/mpic_timer.c 85 */;
	struct cascade_priv cocci_id/* arch/powerpc/sysdev/mpic_timer.c 74 */[];
	struct timer_group_priv {
		struct timer_regs __iomem *regs;
		struct mpic_timer timer[TIMERS_PER_GROUP];
		struct list_head node;
		unsigned int timerfreq;
		unsigned int idle;
		unsigned int flags;
		spinlock_t lock;
		void __iomem *group_tcr;
	} cocci_id/* arch/powerpc/sysdev/mpic_timer.c 63 */;
	struct cascade_priv {
		u32 tcr_value;
		unsigned int cascade_map;
		unsigned int timer_num;
	} cocci_id/* arch/powerpc/sysdev/mpic_timer.c 57 */;
	struct device_node *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 545 */;
	int __init cocci_id/* arch/powerpc/sysdev/mpic_timer.c 543 */;
	struct syscore_ops cocci_id/* arch/powerpc/sysdev/mpic_timer.c 539 */;
	const struct of_device_id cocci_id/* arch/powerpc/sysdev/mpic_timer.c 534 */[];
	struct timer_regs {
		u32 gtccr;
		u32 res0[3];
		u32 gtbcr;
		u32 res1[3];
		u32 gtvpr;
		u32 res2[3];
		u32 gtdr;
		u32 res3[3];
	} cocci_id/* arch/powerpc/sysdev/mpic_timer.c 46 */;
	const u32 *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 418 */;
	const u32 cocci_id/* arch/powerpc/sysdev/mpic_timer.c 417 */[];
	irq_handler_t cocci_id/* arch/powerpc/sysdev/mpic_timer.c 358 */;
	void *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 358 */;
	u32 cocci_id/* arch/powerpc/sysdev/mpic_timer.c 336 */;
	struct timer_group_priv cocci_id/* arch/powerpc/sysdev/mpic_timer.c 323 */;
	unsigned long cocci_id/* arch/powerpc/sysdev/mpic_timer.c 116 */;
	unsigned int cocci_id/* arch/powerpc/sysdev/mpic_timer.c 112 */;
	struct cascade_priv *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 111 */;
	struct mpic_timer *cocci_id/* arch/powerpc/sysdev/mpic_timer.c 108 */;
}
