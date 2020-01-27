cocci_test_suite() {
	struct keystone_rproc {
		struct device *dev;
		struct rproc *rproc;
		struct keystone_rproc_mem *mem;
		int num_mems;
		struct regmap *dev_ctrl;
		struct reset_control *reset;
		u32 boot_offset;
		int irq_ring;
		int irq_fault;
		int kick_gpio;
		struct work_struct workqueue;
	} cocci_id/* drivers/remoteproc/keystone_remoteproc.c 55 */;
	struct platform_driver cocci_id/* drivers/remoteproc/keystone_remoteproc.c 501 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/keystone_remoteproc.c 492 */[];
	char *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 368 */;
	struct keystone_rproc_mem {
		void __iomem *cpu_addr;
		phys_addr_t bus_addr;
		u32 dev_addr;
		size_t size;
	} cocci_id/* drivers/remoteproc/keystone_remoteproc.c 34 */;
	struct device *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 337 */;
	struct device_node *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 336 */;
	struct platform_device *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 333 */;
	struct resource *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 300 */;
	const char *constcocci_id/* drivers/remoteproc/keystone_remoteproc.c 298 */[];
	const struct rproc_ops cocci_id/* drivers/remoteproc/keystone_remoteproc.c 288 */;
	size_t cocci_id/* drivers/remoteproc/keystone_remoteproc.c 255 */;
	u32 cocci_id/* drivers/remoteproc/keystone_remoteproc.c 254 */;
	phys_addr_t cocci_id/* drivers/remoteproc/keystone_remoteproc.c 253 */;
	void __iomem *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 252 */;
	u64 cocci_id/* drivers/remoteproc/keystone_remoteproc.c 249 */;
	struct rproc *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 249 */;
	void *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 249 */;
	int cocci_id/* drivers/remoteproc/keystone_remoteproc.c 249 */;
	struct keystone_rproc cocci_id/* drivers/remoteproc/keystone_remoteproc.c 144 */;
	struct keystone_rproc *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 143 */;
	struct work_struct *cocci_id/* drivers/remoteproc/keystone_remoteproc.c 141 */;
	void cocci_id/* drivers/remoteproc/keystone_remoteproc.c 141 */;
	irqreturn_t cocci_id/* drivers/remoteproc/keystone_remoteproc.c 109 */;
}
