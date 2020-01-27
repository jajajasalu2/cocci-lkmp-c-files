cocci_test_suite() {
	struct da8xx_rproc {
		struct rproc *rproc;
		struct da8xx_rproc_mem *mem;
		int num_mems;
		struct clk *dsp_clk;
		struct reset_control *dsp_reset;
		void (*ack_fxn)(struct irq_data *data);
		struct irq_data *irq_data;
		void __iomem *chipsig;
		void __iomem *bootreg;
		int irq;
	} cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 66 */;
	struct da8xx_rproc_mem {
		void __iomem *cpu_addr;
		phys_addr_t bus_addr;
		u32 dev_addr;
		size_t size;
	} cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 47 */;
	struct platform_driver cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 387 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 381 */[]__maybe_unused;
	void __iomem *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 246 */;
	struct reset_control *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 245 */;
	struct clk *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 244 */;
	struct irq_data *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 241 */;
	char *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 23 */;
	struct resource *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 204 */;
	struct device *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 203 */;
	const char *constcocci_id/* drivers/remoteproc/da8xx_remoteproc.c 201 */[];
	struct platform_device *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 198 */;
	const struct rproc_ops cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 192 */;
	void cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 184 */;
	u32 cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 109 */;
	struct da8xx_rproc *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 108 */;
	struct rproc *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 107 */;
	irqreturn_t cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 105 */;
	void *cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 105 */;
	int cocci_id/* drivers/remoteproc/da8xx_remoteproc.c 105 */;
}
