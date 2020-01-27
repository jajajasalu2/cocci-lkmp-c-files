cocci_test_suite() {
	irqreturn_t cocci_id/* arch/m68k/mac/iop.c 564 */;
	void *cocci_id/* arch/m68k/mac/iop.c 564 */;
	__u16 cocci_id/* arch/m68k/mac/iop.c 545 */;
	uint cocci_id/* arch/m68k/mac/iop.c 544 */;
	__u8 *cocci_id/* arch/m68k/mac/iop.c 544 */;
	struct iop_msg *cocci_id/* arch/m68k/mac/iop.c 351 */;
	const char *cocci_id/* arch/m68k/mac/iop.c 335 */;
	void (*cocci_id/* arch/m68k/mac/iop.c 334 */)(struct iop_msg *);
	void __init cocci_id/* arch/m68k/mac/iop.c 271 */;
	struct mac_iop *cocci_id/* arch/m68k/mac/iop.c 243 */;
	unsigned long cocci_id/* arch/m68k/mac/iop.c 216 */;
	volatile struct mac_iop *cocci_id/* arch/m68k/mac/iop.c 204 */;
	int cocci_id/* arch/m68k/mac/iop.c 204 */;
	void cocci_id/* arch/m68k/mac/iop.c 194 */;
	__u8 cocci_id/* arch/m68k/mac/iop.c 170 */;
	irqreturn_t cocci_id/* arch/m68k/mac/iop.c 158 */(int, void *);
	struct listener cocci_id/* arch/m68k/mac/iop.c 156 */[NUM_IOPS][NUM_IOP_CHAN];
	struct iop_msg *cocci_id/* arch/m68k/mac/iop.c 155 */[NUM_IOPS][NUM_IOP_CHAN];
	struct iop_msg cocci_id/* arch/m68k/mac/iop.c 154 */[NUM_IOP_MSGS];
	volatile struct mac_iop *cocci_id/* arch/m68k/mac/iop.c 148 */[NUM_IOPS];
	struct listener {
		const char *devname;
		void (*handler)(struct iop_msg *);
	} cocci_id/* arch/m68k/mac/iop.c 136 */;
	KERN_CONT cocci_id/* arch/m68k/mac/iop.c 122 */;
}
