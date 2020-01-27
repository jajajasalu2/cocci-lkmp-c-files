cocci_test_suite() {
	const struct dev_pm_ops cocci_id/* drivers/soc/fsl/rcpm.c 98 */;
	u32 cocci_id/* drivers/soc/fsl/rcpm.c 79 */;
	u32 cocci_id/* drivers/soc/fsl/rcpm.c 39 */[RCPM_WAKEUP_CELL_MAX_SIZE];
	u32 cocci_id/* drivers/soc/fsl/rcpm.c 38 */[RCPM_WAKEUP_CELL_MAX_SIZE + 1];
	struct device_node *cocci_id/* drivers/soc/fsl/rcpm.c 37 */;
	struct rcpm *cocci_id/* drivers/soc/fsl/rcpm.c 36 */;
	struct wakeup_source *cocci_id/* drivers/soc/fsl/rcpm.c 35 */;
	void __iomem *cocci_id/* drivers/soc/fsl/rcpm.c 34 */;
	struct device *cocci_id/* drivers/soc/fsl/rcpm.c 31 */;
	int cocci_id/* drivers/soc/fsl/rcpm.c 31 */;
	struct rcpm {
		unsigned int wakeup_cells;
		void __iomem *ippdexpcr_base;
		bool little_endian;
	} cocci_id/* drivers/soc/fsl/rcpm.c 19 */;
	struct platform_driver cocci_id/* drivers/soc/fsl/rcpm.c 142 */;
	const struct of_device_id cocci_id/* drivers/soc/fsl/rcpm.c 136 */[];
	struct resource *cocci_id/* drivers/soc/fsl/rcpm.c 105 */;
	struct platform_device *cocci_id/* drivers/soc/fsl/rcpm.c 102 */;
}
