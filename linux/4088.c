cocci_test_suite() {
	void __iomem *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 98 */;
	u32 cocci_id/* drivers/devfreq/event/rockchip-dfi.c 96 */;
	void cocci_id/* drivers/devfreq/event/rockchip-dfi.c 60 */;
	struct rockchip_dfi {
		struct devfreq_event_dev *edev;
		struct devfreq_event_desc *desc;
		struct dmc_usage ch_usage[RK3399_DMC_NUM_CH];
		struct device *dev;
		void __iomem *regs;
		struct regmap *regmap_pmu;
		struct clk *clk;
	} cocci_id/* drivers/devfreq/event/rockchip-dfi.c 50 */;
	struct dmc_usage {
		u32 access;
		u32 total;
	} cocci_id/* drivers/devfreq/event/rockchip-dfi.c 40 */;
	struct platform_driver cocci_id/* drivers/devfreq/event/rockchip-dfi.c 229 */;
	struct rockchip_dfi cocci_id/* drivers/devfreq/event/rockchip-dfi.c 184 */;
	struct device_node *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 182 */;
	struct devfreq_event_desc *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 181 */;
	struct resource *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 180 */;
	struct device *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 178 */;
	struct platform_device *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 176 */;
	const struct of_device_id cocci_id/* drivers/devfreq/event/rockchip-dfi.c 170 */[];
	const struct devfreq_event_ops cocci_id/* drivers/devfreq/event/rockchip-dfi.c 163 */;
	struct devfreq_event_data *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 150 */;
	struct rockchip_dfi *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 121 */;
	struct devfreq_event_dev *cocci_id/* drivers/devfreq/event/rockchip-dfi.c 119 */;
	int cocci_id/* drivers/devfreq/event/rockchip-dfi.c 119 */;
}
