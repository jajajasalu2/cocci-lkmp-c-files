cocci_test_suite() {
	struct rcar_gen3_thermal_priv {
		struct rcar_gen3_thermal_tsc *tscs[TSC_MAX_NUM];
		unsigned int num_tscs;
		void (*thermal_init)(struct rcar_gen3_thermal_tsc *tsc);
	} cocci_id/* drivers/thermal/rcar_gen3_thermal.c 90 */;
	struct rcar_gen3_thermal_tsc {
		void __iomem *base;
		struct thermal_zone_device *zone;
		struct equation_coefs coef;
		int low;
		int high;
		int tj_t;
		int id;
	} cocci_id/* drivers/thermal/rcar_gen3_thermal.c 80 */;
	struct equation_coefs {
		int a1;
		int b1;
		int a2;
		int b2;
	} cocci_id/* drivers/thermal/rcar_gen3_thermal.c 73 */;
	const int cocci_id/* drivers/thermal/rcar_gen3_thermal.c 66 */[TSC_MAX_NUM][3];
	struct platform_driver cocci_id/* drivers/thermal/rcar_gen3_thermal.c 508 */;
	unsigned int cocci_id/* drivers/thermal/rcar_gen3_thermal.c 491 */;
	int __maybe_unused cocci_id/* drivers/thermal/rcar_gen3_thermal.c 488 */;
	int cocci_id/* drivers/thermal/rcar_gen3_thermal.c 373 */[3];
	char *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 369 */;
	struct resource *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 366 */;
	struct device *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 364 */;
	struct platform_device *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 361 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 356 */;
	void *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 354 */;
	void cocci_id/* drivers/thermal/rcar_gen3_thermal.c 354 */;
	const struct of_device_id cocci_id/* drivers/thermal/rcar_gen3_thermal.c 312 */[];
	const int cocci_id/* drivers/thermal/rcar_gen3_thermal.c 310 */;
	const struct soc_device_attribute cocci_id/* drivers/thermal/rcar_gen3_thermal.c 259 */[];
	struct rcar_gen3_thermal_priv *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 244 */;
	irqreturn_t cocci_id/* drivers/thermal/rcar_gen3_thermal.c 242 */;
	bool cocci_id/* drivers/thermal/rcar_gen3_thermal.c 233 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/rcar_gen3_thermal.c 228 */;
	u32 cocci_id/* drivers/thermal/rcar_gen3_thermal.c 172 */;
	int cocci_id/* drivers/thermal/rcar_gen3_thermal.c 138 */;
	const int *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 137 */;
	int *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 137 */;
	struct rcar_gen3_thermal_tsc *cocci_id/* drivers/thermal/rcar_gen3_thermal.c 136 */;
}
