cocci_test_suite() {
	struct rockchip_tsadc_chip {
		int chn_id[SOC_MAX_SENSORS];
		int chn_num;
		int tshut_temp;
		enum tshut_mode tshut_mode;
		enum tshut_polarity tshut_polarity;
		void (*initialize)(struct regmap *grf, void __iomem *reg,
				   enum tshut_polarity p);
		void (*irq_ack)(void __iomem *reg);
		void (*control)(void __iomem *reg, bool on);
		int (*get_temp)(const struct chip_tsadc_table *table, int chn,
				void __iomem *reg, int *temp);
		int (*set_alarm_temp)(const struct chip_tsadc_table *table,
				      int chn, void __iomem *reg, int temp);
		int (*set_tshut_temp)(const struct chip_tsadc_table *table,
				      int chn, void __iomem *reg, int temp);
		void (*set_tshut_mode)(int chn, void __iomem *reg,
				       enum tshut_mode m);
		struct chip_tsadc_table table;
	} cocci_id/* drivers/thermal/rockchip_thermal.c 96 */;
	const struct rockchip_tsadc_chip cocci_id/* drivers/thermal/rockchip_thermal.c 824 */;
	enum tshut_mode cocci_id/* drivers/thermal/rockchip_thermal.c 808 */;
	u32 cocci_id/* drivers/thermal/rockchip_thermal.c 757 */;
	void __iomem *cocci_id/* drivers/thermal/rockchip_thermal.c 755 */;
	const struct chip_tsadc_table *cocci_id/* drivers/thermal/rockchip_thermal.c 754 */;
	int cocci_id/* drivers/thermal/rockchip_thermal.c 754 */;
	struct chip_tsadc_table {
		const struct tsadc_table *id;
		unsigned int length;
		u32 data_mask;
		enum adc_sort_mode mode;
	} cocci_id/* drivers/thermal/rockchip_thermal.c 74 */;
	bool cocci_id/* drivers/thermal/rockchip_thermal.c 711 */;
	void cocci_id/* drivers/thermal/rockchip_thermal.c 711 */;
	enum tshut_polarity cocci_id/* drivers/thermal/rockchip_thermal.c 607 */;
	struct regmap *cocci_id/* drivers/thermal/rockchip_thermal.c 606 */;
	enum adc_sort_mode{ADC_DECREMENT=0, ADC_INCREMENT,} cocci_id/* drivers/thermal/rockchip_thermal.c 56 */;
	unsigned long cocci_id/* drivers/thermal/rockchip_thermal.c 533 */;
	unsigned int cocci_id/* drivers/thermal/rockchip_thermal.c 529 */;
	int *cocci_id/* drivers/thermal/rockchip_thermal.c 527 */;
	enum sensor_id{SENSOR_CPU=0, SENSOR_GPU,} cocci_id/* drivers/thermal/rockchip_thermal.c 46 */;
	enum tshut_polarity{TSHUT_LOW_ACTIVE=0, TSHUT_HIGH_ACTIVE,} cocci_id/* drivers/thermal/rockchip_thermal.c 37 */;
	const struct tsadc_table cocci_id/* drivers/thermal/rockchip_thermal.c 280 */[];
	enum tshut_mode{TSHUT_MODE_CRU=0, TSHUT_MODE_GPIO,} cocci_id/* drivers/thermal/rockchip_thermal.c 27 */;
	struct tsadc_table {
		u32 code;
		int temp;
	} cocci_id/* drivers/thermal/rockchip_thermal.c 236 */;
	struct rockchip_thermal_data {
		const struct rockchip_tsadc_chip *chip;
		struct platform_device *pdev;
		struct reset_control *reset;
		struct rockchip_thermal_sensor sensors[SOC_MAX_SENSORS];
		struct clk *clk;
		struct clk *pclk;
		struct regmap *grf;
		void __iomem *regs;
		int tshut_temp;
		enum tshut_mode tshut_mode;
		enum tshut_polarity tshut_polarity;
	} cocci_id/* drivers/thermal/rockchip_thermal.c 151 */;
	struct platform_driver cocci_id/* drivers/thermal/rockchip_thermal.c 1424 */;
	int __maybe_unused cocci_id/* drivers/thermal/rockchip_thermal.c 1376 */;
	struct rockchip_thermal_sensor {
		struct rockchip_thermal_data *thermal;
		struct thermal_zone_device *tzd;
		int id;
	} cocci_id/* drivers/thermal/rockchip_thermal.c 131 */;
	struct rockchip_thermal_data cocci_id/* drivers/thermal/rockchip_thermal.c 1237 */;
	struct resource *cocci_id/* drivers/thermal/rockchip_thermal.c 1222 */;
	const struct of_device_id *cocci_id/* drivers/thermal/rockchip_thermal.c 1221 */;
	struct platform_device *cocci_id/* drivers/thermal/rockchip_thermal.c 1217 */;
	struct reset_control *cocci_id/* drivers/thermal/rockchip_thermal.c 1210 */;
	struct rockchip_thermal_data *cocci_id/* drivers/thermal/rockchip_thermal.c 1115 */;
	struct device_node *cocci_id/* drivers/thermal/rockchip_thermal.c 1114 */;
	struct device *cocci_id/* drivers/thermal/rockchip_thermal.c 1113 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/rockchip_thermal.c 1108 */;
	const struct rockchip_tsadc_chip *cocci_id/* drivers/thermal/rockchip_thermal.c 1097 */;
	struct rockchip_thermal_sensor *cocci_id/* drivers/thermal/rockchip_thermal.c 1095 */;
	irqreturn_t cocci_id/* drivers/thermal/rockchip_thermal.c 1064 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/rockchip_thermal.c 1058 */;
	void *cocci_id/* drivers/thermal/rockchip_thermal.c 1021 */;
	const struct of_device_id cocci_id/* drivers/thermal/rockchip_thermal.c 1019 */[];
}
