cocci_test_suite() {
	struct megamod_cascade_data *cocci_id/* arch/c6x/platforms/megamod-pic.c 95 */;
	struct irq_desc *cocci_id/* arch/c6x/platforms/megamod-pic.c 93 */;
	struct irq_chip cocci_id/* arch/c6x/platforms/megamod-pic.c 87 */;
	u32 __iomem *cocci_id/* arch/c6x/platforms/megamod-pic.c 69 */;
	struct megamod_cascade_data cocci_id/* arch/c6x/platforms/megamod-pic.c 63 */[NR_COMBINERS];
	struct megamod_cascade_data {
		struct megamod_pic *pic;
		int index;
	} cocci_id/* arch/c6x/platforms/megamod-pic.c 58 */;
	struct megamod_pic {
		struct irq_domain *irqhost;
		struct megamod_regs __iomem *regs;
		raw_spinlock_t lock;
		unsigned int output_to_irq[NR_MUX_OUTPUTS];
	} cocci_id/* arch/c6x/platforms/megamod-pic.c 47 */;
	void __init cocci_id/* arch/c6x/platforms/megamod-pic.c 329 */;
	unsigned int cocci_id/* arch/c6x/platforms/megamod-pic.c 324 */;
	void cocci_id/* arch/c6x/platforms/megamod-pic.c 324 */;
	u32 cocci_id/* arch/c6x/platforms/megamod-pic.c 311 */;
	int cocci_id/* arch/c6x/platforms/megamod-pic.c 308 */;
	struct megamod_regs {
		u32 evtflag[8];
		u32 evtset[8];
		u32 evtclr[8];
		u32 reserved0[8];
		u32 evtmask[8];
		u32 mevtflag[8];
		u32 expmask[8];
		u32 mexpflag[8];
		u32 intmux_unused;
		u32 intmux[7];
		u32 reserved1[8];
		u32 aegmux[2];
		u32 reserved2[14];
		u32 intxstat;
		u32 intxclr;
		u32 intdmask;
		u32 reserved3[13];
		u32 evtasrt;
	} cocci_id/* arch/c6x/platforms/megamod-pic.c 26 */;
	irq_hw_number_t cocci_id/* arch/c6x/platforms/megamod-pic.c 245 */;
	struct irq_data *cocci_id/* arch/c6x/platforms/megamod-pic.c 244 */;
	struct megamod_pic cocci_id/* arch/c6x/platforms/megamod-pic.c 206 */;
	int cocci_id/* arch/c6x/platforms/megamod-pic.c 202 */[NR_MUX_OUTPUTS];
	struct megamod_pic *cocci_id/* arch/c6x/platforms/megamod-pic.c 200 */;
	struct megamod_pic *__initcocci_id/* arch/c6x/platforms/megamod-pic.c 198 */;
	struct device_node *cocci_id/* arch/c6x/platforms/megamod-pic.c 198 */;
	const __be32 *cocci_id/* arch/c6x/platforms/megamod-pic.c 179 */;
	int *cocci_id/* arch/c6x/platforms/megamod-pic.c 176 */;
	const struct irq_domain_ops cocci_id/* arch/c6x/platforms/megamod-pic.c 137 */;
	struct irq_domain *cocci_id/* arch/c6x/platforms/megamod-pic.c 117 */;
}
