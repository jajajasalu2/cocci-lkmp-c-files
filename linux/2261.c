cocci_test_suite() {
	struct thermal_mmio *cocci_id/* drivers/thermal/thermal_mmio.c 94 */;
	struct platform_device *cocci_id/* drivers/thermal/thermal_mmio.c 93 */;
	int cocci_id/* drivers/thermal/thermal_mmio.c 93 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/thermal_mmio.c 47 */;
	int (*cocci_id/* drivers/thermal/thermal_mmio.c 45 */)(struct platform_device *pdev,
							       struct thermal_mmio *sensor);
	struct resource *cocci_id/* drivers/thermal/thermal_mmio.c 43 */;
	struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/thermal_mmio.c 37 */;
	int *cocci_id/* drivers/thermal/thermal_mmio.c 23 */;
	void *cocci_id/* drivers/thermal/thermal_mmio.c 23 */;
	u32 cocci_id/* drivers/thermal/thermal_mmio.c 18 */;
	void __iomem *cocci_id/* drivers/thermal/thermal_mmio.c 18 */;
	struct thermal_mmio {
		void __iomem *mmio_base;
		u32 (*read_mmio)(void __iomem *mmio_base);
		u32 mask;
		int factor;
	} cocci_id/* drivers/thermal/thermal_mmio.c 11 */;
	struct platform_driver cocci_id/* drivers/thermal/thermal_mmio.c 109 */;
	const struct of_device_id cocci_id/* drivers/thermal/thermal_mmio.c 103 */[];
}
