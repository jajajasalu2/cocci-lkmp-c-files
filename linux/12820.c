cocci_test_suite() {
	struct debug_drvdata {
		void __iomem *base;
		struct device *dev;
		int cpu;
		bool edpcsr_present;
		bool edcidsr_present;
		bool edvidsr_present;
		bool pc_has_offset;
		u32 edpcsr;
		u32 edpcsr_hi;
		u32 edprsr;
		u32 edvidsr;
		u32 edcidsr;
	} cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 85 */;
	struct amba_driver cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 668 */;
	const struct amba_id cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 658 */[];
	const struct amba_cs_uci_id cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 649 */[];
	struct resource *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 563 */;
	void __iomem *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 560 */;
	const struct amba_id *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 558 */;
	struct amba_device *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 558 */;
	const struct file_operations cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 520 */;
	char cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 510 */[3];
	loff_t *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 507 */;
	char __user *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 507 */;
	size_t cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 507 */;
	struct file *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 506 */;
	ssize_t cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 506 */;
	u8 cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 475 */;
	const char __user *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 473 */;
	void cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 449 */;
	cpumask_t cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 414 */;
	struct notifier_block cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 406 */;
	struct notifier_block *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 376 */;
	u32 cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 320 */;
	void *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 306 */;
	struct device *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 287 */;
	unsigned long cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 245 */;
	bool cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 131 */;
	struct debug_drvdata *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 131 */;
	struct dentry *cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 105 */;
	int cocci_id/* drivers/hwtracing/coresight/coresight-cpu-debug.c 104 */;
	__typeof__(struct debug_drvdata *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
