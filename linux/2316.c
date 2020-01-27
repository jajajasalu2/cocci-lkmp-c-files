cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/thermal/armada_thermal.c 960 */;
	struct armada_drvdata *cocci_id/* drivers/thermal/armada_thermal.c 952 */;
	struct armada_thermal_sensor cocci_id/* drivers/thermal/armada_thermal.c 916 */;
	struct armada_thermal_data {
		void (*init)(struct platform_device *pdev,
			     struct armada_thermal_priv *priv);
		s64 coef_b;
		s64 coef_m;
		u32 coef_div;
		bool inverted;
		bool signed_sample;
		unsigned int temp_shift;
		unsigned int temp_mask;
		unsigned int thresh_shift;
		unsigned int hyst_shift;
		unsigned int hyst_mask;
		u32 is_valid_bit;
		unsigned int syscon_control0_off;
		unsigned int syscon_control1_off;
		unsigned int syscon_status_off;
		unsigned int dfx_irq_cause_off;
		unsigned int dfx_irq_mask_off;
		unsigned int dfx_overheat_irq;
		unsigned int dfx_server_irq_mask_off;
		unsigned int dfx_server_irq_en;
		unsigned int cpu_nr;
	} cocci_id/* drivers/thermal/armada_thermal.c 84 */;
	const struct of_device_id *cocci_id/* drivers/thermal/armada_thermal.c 821 */;
	const struct thermal_trip *cocci_id/* drivers/thermal/armada_thermal.c 787 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/armada_thermal.c 783 */;
	int cocci_id/* drivers/thermal/armada_thermal.c 782 */;
	char *cocci_id/* drivers/thermal/armada_thermal.c 747 */;
	const char *cocci_id/* drivers/thermal/armada_thermal.c 746 */;
	unsigned long cocci_id/* drivers/thermal/armada_thermal.c 727 */;
	void __iomem *cocci_id/* drivers/thermal/armada_thermal.c 712 */;
	struct resource *cocci_id/* drivers/thermal/armada_thermal.c 711 */;
	const struct regmap_config cocci_id/* drivers/thermal/armada_thermal.c 700 */;
	struct armada_thermal_priv {
		struct device *dev;
		struct regmap *syscon;
		char zone_name[THERMAL_NAME_LENGTH];
		struct mutex update_lock;
		struct armada_thermal_data *data;
		struct thermal_zone_device *overheat_sensor;
		int interrupt_source;
		int current_channel;
		long current_threshold;
		long current_hysteresis;
	} cocci_id/* drivers/thermal/armada_thermal.c 70 */;
	struct armada_thermal_data cocci_id/* drivers/thermal/armada_thermal.c 67 */;
	const struct of_device_id cocci_id/* drivers/thermal/armada_thermal.c 669 */[];
	const struct armada_thermal_data cocci_id/* drivers/thermal/armada_thermal.c 584 */;
	irqreturn_t cocci_id/* drivers/thermal/armada_thermal.c 524 */;
	unsigned int cocci_id/* drivers/thermal/armada_thermal.c 480 */;
	unsigned int cocci_id/* drivers/thermal/armada_thermal.c 478 */[];
	s64 cocci_id/* drivers/thermal/armada_thermal.c 459 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/armada_thermal.c 452 */;
	struct armada_thermal_sensor *cocci_id/* drivers/thermal/armada_thermal.c 424 */;
	int *cocci_id/* drivers/thermal/armada_thermal.c 422 */;
	void *cocci_id/* drivers/thermal/armada_thermal.c 422 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/armada_thermal.c 418 */;
	void __maybe_unused cocci_id/* drivers/thermal/armada_thermal.c 310 */;
	bool cocci_id/* drivers/thermal/armada_thermal.c 274 */;
	u32 cocci_id/* drivers/thermal/armada_thermal.c 168 */;
	struct armada_thermal_data *cocci_id/* drivers/thermal/armada_thermal.c 167 */;
	struct armada_thermal_priv *cocci_id/* drivers/thermal/armada_thermal.c 165 */;
	struct platform_device *cocci_id/* drivers/thermal/armada_thermal.c 164 */;
	void cocci_id/* drivers/thermal/armada_thermal.c 164 */;
	struct armada_thermal_sensor {
		struct armada_thermal_priv *priv;
		int id;
	} cocci_id/* drivers/thermal/armada_thermal.c 135 */;
	struct armada_drvdata {
		enum drvtype{LEGACY, SYSCON,} type;
		union {
			struct armada_thermal_priv *priv;
			struct thermal_zone_device *tz;
		} data;
	} cocci_id/* drivers/thermal/armada_thermal.c 118 */;
}
