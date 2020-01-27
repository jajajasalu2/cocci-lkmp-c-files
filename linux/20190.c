cocci_test_suite() {
	int cocci_id/* arch/c6x/platforms/emif.c 47 */;
	u32 cocci_id/* arch/c6x/platforms/emif.c 46 */;
	const __be32 *cocci_id/* arch/c6x/platforms/emif.c 45 */;
	struct device_node *cocci_id/* arch/c6x/platforms/emif.c 44 */;
	struct emifa_regs __iomem *cocci_id/* arch/c6x/platforms/emif.c 43 */;
	int __init cocci_id/* arch/c6x/platforms/emif.c 41 */;
	void cocci_id/* arch/c6x/platforms/emif.c 41 */;
	struct of_device_id cocci_id/* arch/c6x/platforms/emif.c 32 */[]__initdata;
	struct emifa_regs {
		u32 midr;
		u32 stat;
		u32 reserved1[6];
		u32 bprio;
		u32 reserved2[23];
		u32 cecfg[NUM_EMIFA_CHIP_ENABLES];
		u32 reserved3[4];
		u32 awcc;
		u32 reserved4[7];
		u32 intraw;
		u32 intmsk;
		u32 intmskset;
		u32 intmskclr;
	} cocci_id/* arch/c6x/platforms/emif.c 16 */;
}
