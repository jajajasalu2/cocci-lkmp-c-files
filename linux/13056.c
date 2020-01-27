cocci_test_suite() {
	struct rpmpd {
		struct generic_pm_domain pd;
		struct rpmpd *peer;
		const bool active_only;
		unsigned int corner;
		bool enabled;
		const char *res_name;
		const int res_type;
		const int res_id;
		struct qcom_smd_rpm *rpm;
		unsigned int max_state;
		__le32 key;
	} cocci_id/* drivers/soc/qcom/rpmpd.c 96 */;
	struct rpmpd_req {
		__le32 key;
		__le32 nbytes;
		__le32 value;
	} cocci_id/* drivers/soc/qcom/rpmpd.c 90 */;
	int __init cocci_id/* drivers/soc/qcom/rpmpd.c 420 */;
	void cocci_id/* drivers/soc/qcom/rpmpd.c 420 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/rpmpd.c 411 */;
	const struct rpmpd_desc *cocci_id/* drivers/soc/qcom/rpmpd.c 367 */;
	struct rpmpd **cocci_id/* drivers/soc/qcom/rpmpd.c 366 */;
	struct qcom_smd_rpm *cocci_id/* drivers/soc/qcom/rpmpd.c 365 */;
	struct genpd_onecell_data *cocci_id/* drivers/soc/qcom/rpmpd.c 364 */;
	size_t cocci_id/* drivers/soc/qcom/rpmpd.c 363 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/rpmpd.c 360 */;
	struct dev_pm_opp *cocci_id/* drivers/soc/qcom/rpmpd.c 355 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/qcom/rpmpd.c 354 */;
	unsigned int cocci_id/* drivers/soc/qcom/rpmpd.c 269 */;
	struct rpmpd *cocci_id/* drivers/soc/qcom/rpmpd.c 265 */;
	int cocci_id/* drivers/soc/qcom/rpmpd.c 265 */;
	unsigned int *cocci_id/* drivers/soc/qcom/rpmpd.c 255 */;
	struct rpmpd_req cocci_id/* drivers/soc/qcom/rpmpd.c 244 */;
	bool cocci_id/* drivers/soc/qcom/rpmpd.c 230 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/rpmpd.c 222 */[];
	struct rpmpd cocci_id/* drivers/soc/qcom/rpmpd.c 17 */;
	const struct rpmpd_desc cocci_id/* drivers/soc/qcom/rpmpd.c 134 */;
	struct rpmpd *cocci_id/* drivers/soc/qcom/rpmpd.c 125 */[];
	struct rpmpd_desc {
		struct rpmpd **rpmpds;
		size_t num_pds;
		unsigned int max_state;
	} cocci_id/* drivers/soc/qcom/rpmpd.c 110 */;
}
