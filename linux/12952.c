cocci_test_suite() {
	void *cocci_id/* drivers/soc/rockchip/pm_domains.c 982 */;
	const struct of_device_id cocci_id/* drivers/soc/rockchip/pm_domains.c 979 */[];
	struct rockchip_pm_domain cocci_id/* drivers/soc/rockchip/pm_domains.c 86 */;
	const struct rockchip_pmu_info cocci_id/* drivers/soc/rockchip/pm_domains.c 844 */;
	struct rockchip_pmu {
		struct device *dev;
		struct regmap *regmap;
		const struct rockchip_pmu_info *info;
		struct mutex mutex;
		struct genpd_onecell_data genpd_data;
		struct generic_pm_domain *domains[];
	} cocci_id/* drivers/soc/rockchip/pm_domains.c 77 */;
	const struct rockchip_domain_info cocci_id/* drivers/soc/rockchip/pm_domains.c 718 */[];
	struct rockchip_pm_domain {
		struct generic_pm_domain genpd;
		const struct rockchip_domain_info *info;
		struct rockchip_pmu *pmu;
		int num_qos;
		struct regmap **qos_regmap;
		u32 *qos_save_regs[MAX_QOS_REGS_NUM];
		int num_clks;
		struct clk_bulk_data *clks;
	} cocci_id/* drivers/soc/rockchip/pm_domains.c 66 */;
	const struct rockchip_pmu_info *cocci_id/* drivers/soc/rockchip/pm_domains.c 627 */;
	const struct of_device_id *cocci_id/* drivers/soc/rockchip/pm_domains.c 626 */;
	struct platform_device *cocci_id/* drivers/soc/rockchip/pm_domains.c 619 */;
	unsigned int cocci_id/* drivers/soc/rockchip/pm_domains.c 556 */;
	u32 cocci_id/* drivers/soc/rockchip/pm_domains.c 555 */;
	struct rockchip_pmu *cocci_id/* drivers/soc/rockchip/pm_domains.c 554 */;
	void cocci_id/* drivers/soc/rockchip/pm_domains.c 554 */;
	struct rockchip_pmu_info {
		u32 pwr_offset;
		u32 status_offset;
		u32 req_offset;
		u32 idle_offset;
		u32 ack_offset;
		u32 core_pwrcnt_offset;
		u32 gpu_pwrcnt_offset;
		unsigned int core_power_transition_time;
		unsigned int gpu_power_transition_time;
		int num_domains;
		const struct rockchip_domain_info *domain_info;
	} cocci_id/* drivers/soc/rockchip/pm_domains.c 42 */;
	const struct rockchip_domain_info *cocci_id/* drivers/soc/rockchip/pm_domains.c 384 */;
	struct device_node *cocci_id/* drivers/soc/rockchip/pm_domains.c 382 */;
	struct clk *cocci_id/* drivers/soc/rockchip/pm_domains.c 346 */;
	struct device *cocci_id/* drivers/soc/rockchip/pm_domains.c 344 */;
	int cocci_id/* drivers/soc/rockchip/pm_domains.c 343 */;
	struct rockchip_domain_info {
		int pwr_mask;
		int status_mask;
		int req_mask;
		int idle_mask;
		int ack_mask;
		bool active_wakeup;
		int pwr_w_mask;
		int req_w_mask;
	} cocci_id/* drivers/soc/rockchip/pm_domains.c 31 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/rockchip/pm_domains.c 267 */;
	bool cocci_id/* drivers/soc/rockchip/pm_domains.c 264 */;
	struct rockchip_pm_domain *cocci_id/* drivers/soc/rockchip/pm_domains.c 263 */;
	int __init cocci_id/* drivers/soc/rockchip/pm_domains.c 1041 */;
	struct platform_driver cocci_id/* drivers/soc/rockchip/pm_domains.c 1027 */;
}
