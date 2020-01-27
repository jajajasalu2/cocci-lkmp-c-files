cocci_test_suite() {
	struct rpmhpd_desc {
		struct rpmhpd **rpmhpds;
		size_t num_pds;
	} cocci_id/* drivers/soc/qcom/rpmhpd.c 53 */;
	int __init cocci_id/* drivers/soc/qcom/rpmhpd.c 402 */;
	void cocci_id/* drivers/soc/qcom/rpmhpd.c 402 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/rpmhpd.c 393 */;
	struct rpmhpd {
		struct device *dev;
		struct generic_pm_domain pd;
		struct generic_pm_domain *parent;
		struct rpmhpd *peer;
		const bool active_only;
		unsigned int corner;
		unsigned int active_corner;
		u32 level[RPMH_ARC_MAX_LEVELS];
		size_t level_count;
		bool enabled;
		const char *res_name;
		u32 addr;
	} cocci_id/* drivers/soc/qcom/rpmhpd.c 38 */;
	const struct rpmhpd_desc *cocci_id/* drivers/soc/qcom/rpmhpd.c 328 */;
	struct rpmhpd **cocci_id/* drivers/soc/qcom/rpmhpd.c 327 */;
	struct genpd_onecell_data *cocci_id/* drivers/soc/qcom/rpmhpd.c 326 */;
	struct device *cocci_id/* drivers/soc/qcom/rpmhpd.c 325 */;
	size_t cocci_id/* drivers/soc/qcom/rpmhpd.c 324 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/rpmhpd.c 321 */;
	const u16 *cocci_id/* drivers/soc/qcom/rpmhpd.c 291 */;
	struct dev_pm_opp *cocci_id/* drivers/soc/qcom/rpmhpd.c 283 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/qcom/rpmhpd.c 282 */;
	struct rpmhpd *cocci_id/* drivers/soc/qcom/rpmhpd.c 175 */;
	unsigned int cocci_id/* drivers/soc/qcom/rpmhpd.c 175 */;
	int cocci_id/* drivers/soc/qcom/rpmhpd.c 175 */;
	unsigned int *cocci_id/* drivers/soc/qcom/rpmhpd.c 156 */;
	struct tcs_cmd cocci_id/* drivers/soc/qcom/rpmhpd.c 140 */;
	bool cocci_id/* drivers/soc/qcom/rpmhpd.c 138 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/rpmhpd.c 132 */[];
	const struct rpmhpd_desc cocci_id/* drivers/soc/qcom/rpmhpd.c 127 */;
	struct rpmhpd *cocci_id/* drivers/soc/qcom/rpmhpd.c 115 */[];
	struct rpmhpd cocci_id/* drivers/soc/qcom/rpmhpd.c 101 */;
}
