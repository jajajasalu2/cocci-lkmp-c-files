cocci_test_suite() {
	enum soctherm_throttle_id cocci_id/* drivers/thermal/tegra/soctherm.c 980 */;
	const struct tegra_tsensor_group *cocci_id/* drivers/thermal/tegra/soctherm.c 770 */;
	enum thermal_trip_type cocci_id/* drivers/thermal/tegra/soctherm.c 725 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/tegra/soctherm.c 722 */;
	int *cocci_id/* drivers/thermal/tegra/soctherm.c 722 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/tegra/soctherm.c 715 */;
	enum thermal_trend *cocci_id/* drivers/thermal/tegra/soctherm.c 636 */;
	const char *cocci_id/* drivers/thermal/tegra/soctherm.c 555 */;
	struct soctherm_throt_cfg *cocci_id/* drivers/thermal/tegra/soctherm.c 554 */;
	struct device *cocci_id/* drivers/thermal/tegra/soctherm.c 446 */;
	int cocci_id/* drivers/thermal/tegra/soctherm.c 446 */;
	void __iomem *cocci_id/* drivers/thermal/tegra/soctherm.c 388 */;
	const struct tegra_tsensor *cocci_id/* drivers/thermal/tegra/soctherm.c 387 */;
	unsigned int cocci_id/* drivers/thermal/tegra/soctherm.c 385 */;
	u32 cocci_id/* drivers/thermal/tegra/soctherm.c 380 */;
	struct tegra_soctherm *cocci_id/* drivers/thermal/tegra/soctherm.c 380 */;
	void cocci_id/* drivers/thermal/tegra/soctherm.c 368 */;
	struct soctherm_oc_irq_chip_data cocci_id/* drivers/thermal/tegra/soctherm.c 358 */;
	struct soctherm_oc_irq_chip_data {
		struct mutex irq_lock;
		struct irq_chip irq_chip;
		struct irq_domain *domain;
		int irq_enable;
	} cocci_id/* drivers/thermal/tegra/soctherm.c 351 */;
	struct tegra_soctherm {
		struct reset_control *reset;
		struct clk *clock_tsensor;
		struct clk *clock_soctherm;
		void __iomem *regs;
		void __iomem *clk_regs;
		void __iomem *ccroc_regs;
		int thermal_irq;
		int edp_irq;
		u32 *calib;
		struct thermal_zone_device **thermctl_tzs;
		struct tegra_soctherm_soc *soc;
		struct soctherm_throt_cfg throt_cfgs[THROTTLE_SIZE];
		struct dentry *debugfs_dir;
		struct mutex thermctl_lock;
	} cocci_id/* drivers/thermal/tegra/soctherm.c 329 */;
	struct soctherm_throt_cfg {
		const char *name;
		unsigned int id;
		u8 priority;
		u8 cpu_throt_level;
		u32 cpu_throt_depth;
		u32 gpu_throt_level;
		struct soctherm_oc_cfg oc_cfg;
		struct thermal_cooling_device *cdev;
		bool init;
	} cocci_id/* drivers/thermal/tegra/soctherm.c 317 */;
	struct soctherm_oc_cfg {
		u32 active_low;
		u32 throt_period;
		u32 alarm_cnt_thresh;
		u32 alarm_filter;
		u32 mode;
		bool intr_en;
	} cocci_id/* drivers/thermal/tegra/soctherm.c 308 */;
	struct tegra_thermctl_zone {
		void __iomem *reg;
		struct device *dev;
		struct tegra_soctherm *ts;
		struct thermal_zone_device *tz;
		const struct tegra_tsensor_group *sg;
	} cocci_id/* drivers/thermal/tegra/soctherm.c 300 */;
	struct tegra_soctherm cocci_id/* drivers/thermal/tegra/soctherm.c 299 */;
	const char *constcocci_id/* drivers/thermal/tegra/soctherm.c 289 */[];
	enum soctherm_throttle_dev_id{THROTTLE_DEV_CPU=0, THROTTLE_DEV_GPU, THROTTLE_DEV_SIZE,} cocci_id/* drivers/thermal/tegra/soctherm.c 283 */;
	enum soctherm_oc_irq_id{TEGRA_SOC_OC_IRQ_1, TEGRA_SOC_OC_IRQ_2, TEGRA_SOC_OC_IRQ_3, TEGRA_SOC_OC_IRQ_4, TEGRA_SOC_OC_IRQ_5, TEGRA_SOC_OC_IRQ_MAX,} cocci_id/* drivers/thermal/tegra/soctherm.c 274 */;
	enum soctherm_throttle_id{THROTTLE_LIGHT=0, THROTTLE_HEAVY, THROTTLE_OC1, THROTTLE_OC2, THROTTLE_OC3, THROTTLE_OC4, THROTTLE_OC5, THROTTLE_SIZE,} cocci_id/* drivers/thermal/tegra/soctherm.c 263 */;
	const int cocci_id/* drivers/thermal/tegra/soctherm.c 261 */;
	struct platform_driver cocci_id/* drivers/thermal/tegra/soctherm.c 2309 */;
	struct tegra_soctherm_soc *cocci_id/* drivers/thermal/tegra/soctherm.c 2280 */;
	int __maybe_unused cocci_id/* drivers/thermal/tegra/soctherm.c 2276 */;
	struct tegra_thermctl_zone *cocci_id/* drivers/thermal/tegra/soctherm.c 2213 */;
	struct resource *cocci_id/* drivers/thermal/tegra/soctherm.c 2110 */;
	struct tsensor_shared_calib cocci_id/* drivers/thermal/tegra/soctherm.c 2109 */;
	const struct of_device_id *cocci_id/* drivers/thermal/tegra/soctherm.c 2106 */;
	const struct of_device_id cocci_id/* drivers/thermal/tegra/soctherm.c 2081 */[];
	struct soctherm_throt_cfg cocci_id/* drivers/thermal/tegra/soctherm.c 1930 */;
	struct soctherm_oc_cfg *cocci_id/* drivers/thermal/tegra/soctherm.c 1901 */;
	u8 cocci_id/* drivers/thermal/tegra/soctherm.c 1765 */;
	char *cocci_id/* drivers/thermal/tegra/soctherm.c 1735 */;
	struct thermal_cooling_device *cocci_id/* drivers/thermal/tegra/soctherm.c 1708 */;
	struct device_node *cocci_id/* drivers/thermal/tegra/soctherm.c 1689 */;
	u32 *cocci_id/* drivers/thermal/tegra/soctherm.c 1573 */;
	struct tsensor_group_thermtrips *cocci_id/* drivers/thermal/tegra/soctherm.c 1571 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/thermal/tegra/soctherm.c 1561 */;
	unsigned long cocci_id/* drivers/thermal/tegra/soctherm.c 1556 */;
	unsigned long *cocci_id/* drivers/thermal/tegra/soctherm.c 1541 */;
	bool cocci_id/* drivers/thermal/tegra/soctherm.c 1500 */;
	struct dentry *cocci_id/* drivers/thermal/tegra/soctherm.c 1488 */;
	u16 cocci_id/* drivers/thermal/tegra/soctherm.c 1373 */;
	s32 cocci_id/* drivers/thermal/tegra/soctherm.c 1371 */;
	s16 cocci_id/* drivers/thermal/tegra/soctherm.c 1345 */;
	const struct tegra_tsensor_group **cocci_id/* drivers/thermal/tegra/soctherm.c 1292 */;
	struct platform_device *cocci_id/* drivers/thermal/tegra/soctherm.c 1289 */;
	struct seq_file *cocci_id/* drivers/thermal/tegra/soctherm.c 1287 */;
	void *cocci_id/* drivers/thermal/tegra/soctherm.c 1287 */;
	const struct irq_domain_ops cocci_id/* drivers/thermal/tegra/soctherm.c 1237 */;
	irq_hw_number_t *cocci_id/* drivers/thermal/tegra/soctherm.c 1223 */;
	unsigned int *cocci_id/* drivers/thermal/tegra/soctherm.c 1223 */;
	const u32 *cocci_id/* drivers/thermal/tegra/soctherm.c 1222 */;
	struct irq_domain *cocci_id/* drivers/thermal/tegra/soctherm.c 1221 */;
	irq_hw_number_t cocci_id/* drivers/thermal/tegra/soctherm.c 1196 */;
	struct soctherm_oc_irq_chip_data *cocci_id/* drivers/thermal/tegra/soctherm.c 1168 */;
	struct irq_data *cocci_id/* drivers/thermal/tegra/soctherm.c 1166 */;
	irqreturn_t cocci_id/* drivers/thermal/tegra/soctherm.c 1100 */;
}
