cocci_test_suite() {
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/samsung/exynos_tmu.c 997 */;
	enum soc_type cocci_id/* drivers/thermal/samsung/exynos_tmu.c 894 */;
	struct resource cocci_id/* drivers/thermal/samsung/exynos_tmu.c 868 */;
	const void *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 835 */;
	const struct of_device_id cocci_id/* drivers/thermal/samsung/exynos_tmu.c 832 */[];
	irqreturn_t cocci_id/* drivers/thermal/samsung/exynos_tmu.c 822 */;
	u32 cocci_id/* drivers/thermal/samsung/exynos_tmu.c 794 */;
	unsigned int cocci_id/* drivers/thermal/samsung/exynos_tmu.c 793 */;
	void cocci_id/* drivers/thermal/samsung/exynos_tmu.c 791 */;
	struct work_struct *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 773 */;
	int *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 650 */;
	void *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 650 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 561 */;
	bool cocci_id/* drivers/thermal/samsung/exynos_tmu.c 558 */;
	struct platform_device *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 558 */;
	u8 cocci_id/* drivers/thermal/samsung/exynos_tmu.c 379 */;
	const struct thermal_trip *constcocci_id/* drivers/thermal/samsung/exynos_tmu.c 362 */;
	u16 cocci_id/* drivers/thermal/samsung/exynos_tmu.c 224 */;
	struct exynos_tmu_data *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 224 */;
	int cocci_id/* drivers/thermal/samsung/exynos_tmu.c 224 */;
	struct exynos_tmu_data {
		int id;
		void __iomem *base;
		void __iomem *base_second;
		int irq;
		enum soc_type soc;
		struct work_struct irq_work;
		struct mutex lock;
		struct clk *clk,*clk_sec,*sclk;
		u32 cal_type;
		u32 efuse_value;
		u32 min_efuse_value;
		u32 max_efuse_value;
		u16 temp_error1,temp_error2;
		u8 gain;
		u8 reference_voltage;
		struct regulator *regulator;
		struct thermal_zone_device *tzd;
		unsigned int ntrip;
		bool enabled;
		void (*tmu_set_trip_temp)(struct exynos_tmu_data *data,
					  int trip, u8 temp);
		void (*tmu_set_trip_hyst)(struct exynos_tmu_data *data,
					  int trip, u8 temp, u8 hyst);
		void (*tmu_initialize)(struct platform_device *pdev);
		void (*tmu_control)(struct platform_device *pdev, bool on);
		int (*tmu_read)(struct exynos_tmu_data *data);
		void (*tmu_set_emulation)(struct exynos_tmu_data *data,
					  int temp);
		void (*tmu_clear_irqs)(struct exynos_tmu_data *data);
	} cocci_id/* drivers/thermal/samsung/exynos_tmu.c 173 */;
	enum soc_type{SOC_ARCH_EXYNOS3250=1, SOC_ARCH_EXYNOS4210, SOC_ARCH_EXYNOS4412, SOC_ARCH_EXYNOS5250, SOC_ARCH_EXYNOS5260, SOC_ARCH_EXYNOS5420, SOC_ARCH_EXYNOS5420_TRIMINFO, SOC_ARCH_EXYNOS5433, SOC_ARCH_EXYNOS7,} cocci_id/* drivers/thermal/samsung/exynos_tmu.c 127 */;
	struct platform_driver cocci_id/* drivers/thermal/samsung/exynos_tmu.c 1174 */;
	struct device *cocci_id/* drivers/thermal/samsung/exynos_tmu.c 1157 */;
	struct exynos_tmu_data cocci_id/* drivers/thermal/samsung/exynos_tmu.c 1007 */;
}
