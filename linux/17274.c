cocci_test_suite() {
	struct ps3_private {
		struct ps3_bmp bmp __attribute__((aligned(PS3_BMP_MINALIGN)));
		spinlock_t bmp_lock;
		u64 ppe_id;
		u64 thread_id;
		unsigned long ipi_debug_brk_mask;
		unsigned long ipi_mask;
	} cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 76 */;
	void __init cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 739 */;
	const struct irq_domain_ops cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 676 */;
	enum irq_domain_bus_token cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 670 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 669 */;
	irq_hw_number_t cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 659 */;
	struct irq_domain *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 658 */;
	u64 *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 640 */;
	unsigned long cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 636 */;
	struct ps3_private *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 634 */;
	const u64 *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 627 */;
	unsigned cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 627 */;
	int cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 627 */;
	const char *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 626 */;
	void __maybe_unused cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 626 */;
	void cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 617 */;
	struct ps3_bmp {
		struct {
			u64 status;
			u64 unused_1[3];
			unsigned long mask;
			u64 unused_2[3];
		};
	} cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 57 */;
	void *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 522 */;
	struct ps3_system_bus_device *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 420 */;
	unsigned int cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 350 */;
	u64 cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 323 */;
	enum ps3_cpu_binding cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 320 */;
	unsigned int *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 320 */;
	struct irq_chip cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 150 */;
	const struct ps3_private *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 138 */;
	struct irq_data *cocci_id/* arch/powerpc/platforms/ps3/interrupt.c 136 */;
	__typeof__(struct ps3_private) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
