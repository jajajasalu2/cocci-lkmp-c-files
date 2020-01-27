cocci_test_suite() {
	const char *cocci_id/* drivers/soc/samsung/pm_domains.c 95 */;
	const struct of_device_id cocci_id/* drivers/soc/samsung/pm_domains.c 84 */[]__initconst;
	const struct exynos_pm_domain_config cocci_id/* drivers/soc/samsung/pm_domains.c 76 */;
	struct exynos_pm_domain cocci_id/* drivers/soc/samsung/pm_domains.c 43 */;
	char *cocci_id/* drivers/soc/samsung/pm_domains.c 41 */;
	u32 cocci_id/* drivers/soc/samsung/pm_domains.c 40 */;
	void __iomem *cocci_id/* drivers/soc/samsung/pm_domains.c 39 */;
	bool cocci_id/* drivers/soc/samsung/pm_domains.c 36 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/samsung/pm_domains.c 36 */;
	struct exynos_pm_domain {
		void __iomem *base;
		bool is_off;
		struct generic_pm_domain pd;
		u32 local_pwr_cfg;
	} cocci_id/* drivers/soc/samsung/pm_domains.c 29 */;
	struct exynos_pm_domain_config {
		u32 local_pwr_cfg;
	} cocci_id/* drivers/soc/samsung/pm_domains.c 21 */;
	struct of_phandle_args cocci_id/* drivers/soc/samsung/pm_domains.c 148 */;
	struct exynos_pm_domain *cocci_id/* drivers/soc/samsung/pm_domains.c 111 */;
	const struct exynos_pm_domain_config *cocci_id/* drivers/soc/samsung/pm_domains.c 110 */;
	const struct of_device_id *cocci_id/* drivers/soc/samsung/pm_domains.c 107 */;
	struct device_node *cocci_id/* drivers/soc/samsung/pm_domains.c 106 */;
	int cocci_id/* drivers/soc/samsung/pm_domains.c 104 */;
	void cocci_id/* drivers/soc/samsung/pm_domains.c 104 */;
}
