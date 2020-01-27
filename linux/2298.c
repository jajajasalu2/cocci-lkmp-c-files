cocci_test_suite() {
	struct rcar_thermal_priv {
		void __iomem *base;
		struct rcar_thermal_common *common;
		struct thermal_zone_device *zone;
		const struct rcar_thermal_chip *chip;
		struct delayed_work work;
		struct mutex lock;
		struct list_head list;
		int id;
		u32 ctemp;
	} cocci_id/* drivers/thermal/rcar_thermal.c 89 */;
	const struct rcar_thermal_chip cocci_id/* drivers/thermal/rcar_thermal.c 67 */;
	struct platform_driver cocci_id/* drivers/thermal/rcar_thermal.c 662 */;
	typeof(*priv) cocci_id/* drivers/thermal/rcar_thermal.c 644 */;
	const struct rcar_thermal_chip *cocci_id/* drivers/thermal/rcar_thermal.c 496 */;
	struct resource *cocci_id/* drivers/thermal/rcar_thermal.c 495 */;
	struct platform_device *cocci_id/* drivers/thermal/rcar_thermal.c 490 */;
	struct rcar_thermal_chip {
		unsigned int use_of_thermal:1;
		unsigned int has_filonoff:1;
		unsigned int irq_per_ch:1;
		unsigned int needs_suspend_resume:1;
		unsigned int nirqs;
		unsigned int ctemp_bands;
	} cocci_id/* drivers/thermal/rcar_thermal.c 49 */;
	irqreturn_t cocci_id/* drivers/thermal/rcar_thermal.c 435 */;
	void *cocci_id/* drivers/thermal/rcar_thermal.c 435 */;
	struct rcar_thermal_common {
		void __iomem *base;
		struct device *dev;
		struct list_head head;
		spinlock_t lock;
	} cocci_id/* drivers/thermal/rcar_thermal.c 42 */;
	struct rcar_thermal_priv cocci_id/* drivers/thermal/rcar_thermal.c 398 */;
	struct work_struct *cocci_id/* drivers/thermal/rcar_thermal.c 392 */;
	unsigned long cocci_id/* drivers/thermal/rcar_thermal.c 379 */;
	int cocci_id/* drivers/thermal/rcar_thermal.c 376 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/rcar_thermal.c 364 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/rcar_thermal.c 360 */;
	enum thermal_trip_type cocci_id/* drivers/thermal/rcar_thermal.c 343 */;
	enum thermal_trip_type *cocci_id/* drivers/thermal/rcar_thermal.c 305 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/rcar_thermal.c 297 */;
	struct device *cocci_id/* drivers/thermal/rcar_thermal.c 279 */;
	int *cocci_id/* drivers/thermal/rcar_thermal.c 260 */;
	u32 cocci_id/* drivers/thermal/rcar_thermal.c 185 */;
	struct rcar_thermal_priv *cocci_id/* drivers/thermal/rcar_thermal.c 185 */;
	void cocci_id/* drivers/thermal/rcar_thermal.c 185 */;
	struct rcar_thermal_common *cocci_id/* drivers/thermal/rcar_thermal.c 160 */;
	const struct of_device_id cocci_id/* drivers/thermal/rcar_thermal.c 110 */[];
}
