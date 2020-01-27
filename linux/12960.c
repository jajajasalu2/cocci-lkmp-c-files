cocci_test_suite() {
	const struct ti_sci_handle *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 91 */;
	struct ti_sci_pm_domain *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 80 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 79 */;
	struct ti_sci_genpd_dev_data *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 65 */;
	struct generic_pm_domain_data *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 64 */;
	u8 cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 62 */;
	struct device *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 62 */;
	int cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 54 */;
	struct ti_sci_pm_domain cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 46 */;
	struct ti_sci_pm_domain {
		const struct ti_sci_handle *ti_sci;
		struct device *dev;
		struct generic_pm_domain pd;
	} cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 40 */;
	struct ti_sci_genpd_dev_data {
		int idx;
		u8 exclusive;
	} cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 28 */;
	struct platform_driver cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 205 */;
	struct platform_device *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 173 */;
	const struct of_device_id cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 167 */[];
	void cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 157 */;
	struct of_phandle_args cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 116 */;
	struct device_node *cocci_id/* drivers/soc/ti/ti_sci_pm_domains.c 115 */;
}
