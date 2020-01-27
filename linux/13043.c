cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/soc/actions/owl-sps.c 99 */;
	struct platform_device *cocci_id/* drivers/soc/actions/owl-sps.c 97 */;
	struct owl_sps_domain *cocci_id/* drivers/soc/actions/owl-sps.c 77 */;
	struct owl_sps *cocci_id/* drivers/soc/actions/owl-sps.c 75 */;
	int cocci_id/* drivers/soc/actions/owl-sps.c 75 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/actions/owl-sps.c 66 */;
	u32 cocci_id/* drivers/soc/actions/owl-sps.c 49 */;
	bool cocci_id/* drivers/soc/actions/owl-sps.c 47 */;
	struct owl_sps_domain {
		struct generic_pm_domain genpd;
		const struct owl_sps_domain_info *info;
		struct owl_sps *sps;
	} cocci_id/* drivers/soc/actions/owl-sps.c 41 */;
	struct owl_sps_domain cocci_id/* drivers/soc/actions/owl-sps.c 39 */;
	int __init cocci_id/* drivers/soc/actions/owl-sps.c 316 */;
	void cocci_id/* drivers/soc/actions/owl-sps.c 316 */;
	struct owl_sps {
		struct device *dev;
		const struct owl_sps_info *info;
		void __iomem *base;
		struct genpd_onecell_data genpd_data;
		struct generic_pm_domain *domains[];
	} cocci_id/* drivers/soc/actions/owl-sps.c 31 */;
	struct platform_driver cocci_id/* drivers/soc/actions/owl-sps.c 307 */;
	const struct of_device_id cocci_id/* drivers/soc/actions/owl-sps.c 300 */[];
	struct owl_sps_info {
		unsigned num_domains;
		const struct owl_sps_domain_info *domains;
	} cocci_id/* drivers/soc/actions/owl-sps.c 26 */;
	const struct owl_sps_info cocci_id/* drivers/soc/actions/owl-sps.c 199 */;
	struct owl_sps_domain_info {
		const char *name;
		int pwr_bit;
		int ack_bit;
		unsigned int genpd_flags;
	} cocci_id/* drivers/soc/actions/owl-sps.c 19 */;
	const struct owl_sps_domain_info cocci_id/* drivers/soc/actions/owl-sps.c 149 */[];
	const struct owl_sps_info *cocci_id/* drivers/soc/actions/owl-sps.c 100 */;
}
