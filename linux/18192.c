cocci_test_suite() {
	struct ve_spc_opp {
		unsigned long freq;
		unsigned long u_volt;
	} cocci_id/* arch/arm/mach-vexpress/spc.c 97 */;
	bool cocci_id/* arch/arm/mach-vexpress/spc.c 556 */[MAX_CLUSTERS];
	struct clk *cocci_id/* arch/arm/mach-vexpress/spc.c 555 */;
	int __init cocci_id/* arch/arm/mach-vexpress/spc.c 552 */;
	void cocci_id/* arch/arm/mach-vexpress/spc.c 552 */;
	struct clk_init_data cocci_id/* arch/arm/mach-vexpress/spc.c 532 */;
	struct clk_ops cocci_id/* arch/arm/mach-vexpress/spc.c 524 */;
	int cocci_id/* arch/arm/mach-vexpress/spc.c 516 */;
	unsigned long *cocci_id/* arch/arm/mach-vexpress/spc.c 509 */;
	long cocci_id/* arch/arm/mach-vexpress/spc.c 508 */;
	struct clk_spc *cocci_id/* arch/arm/mach-vexpress/spc.c 499 */;
	struct clk_hw *cocci_id/* arch/arm/mach-vexpress/spc.c 496 */;
	unsigned long cocci_id/* arch/arm/mach-vexpress/spc.c 496 */;
	struct clk_spc cocci_id/* arch/arm/mach-vexpress/spc.c 495 */;
	struct clk_spc {
		struct clk_hw hw;
		int cluster;
	} cocci_id/* arch/arm/mach-vexpress/spc.c 490 */;
	void __iomem *cocci_id/* arch/arm/mach-vexpress/spc.c 450 */;
	struct ve_spc_opp *cocci_id/* arch/arm/mach-vexpress/spc.c 431 */;
	struct device *cocci_id/* arch/arm/mach-vexpress/spc.c 427 */;
	uint32_t cocci_id/* arch/arm/mach-vexpress/spc.c 381 */;
	irqreturn_t cocci_id/* arch/arm/mach-vexpress/spc.c 378 */;
	void *cocci_id/* arch/arm/mach-vexpress/spc.c 378 */;
	uint32_t *cocci_id/* arch/arm/mach-vexpress/spc.c 355 */;
	u32 *cocci_id/* arch/arm/mach-vexpress/spc.c 258 */;
	u32 cocci_id/* arch/arm/mach-vexpress/spc.c 119 */;
	bool cocci_id/* arch/arm/mach-vexpress/spc.c 119 */;
	struct ve_spc_drvdata *cocci_id/* arch/arm/mach-vexpress/spc.c 117 */;
	struct ve_spc_drvdata {
		void __iomem *baseaddr;
		u32 a15_clusid;
		uint32_t cur_rsp_mask;
		uint32_t cur_rsp_stat;
		struct semaphore sem;
		struct completion done;
		struct ve_spc_opp *opps[MAX_CLUSTERS];
		int num_opps[MAX_CLUSTERS];
	} cocci_id/* arch/arm/mach-vexpress/spc.c 102 */;
}
