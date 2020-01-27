cocci_test_suite() {
	u32 cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 88 */;
	struct wkup_m3_rproc *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 85 */;
	u64 cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 83 */;
	struct rproc *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 83 */;
	void *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 83 */;
	struct wkup_m3_rproc {
		struct rproc *rproc;
		struct platform_device *pdev;
		struct wkup_m3_mem mem[WKUPM3_MEM_MAX];
	} cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 47 */;
	struct wkup_m3_mem {
		void __iomem *cpu_addr;
		phys_addr_t bus_addr;
		u32 dev_addr;
		size_t size;
	} cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 34 */;
	struct platform_driver cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 238 */;
	const struct dev_pm_ops cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 234 */;
	struct device *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 228 */;
	int cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 228 */;
	const __be32 *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 129 */;
	struct resource *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 128 */;
	const char *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 126 */;
	const char *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 124 */[WKUPM3_MEM_MAX];
	struct wkup_m3_platform_data *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 122 */;
	struct platform_device *cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 119 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 112 */[];
	const struct rproc_ops cocci_id/* drivers/remoteproc/wkup_m3_rproc.c 106 */;
}
