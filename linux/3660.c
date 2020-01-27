cocci_test_suite() {
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 62 */;
	struct generic_pm_domain **cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 61 */;
	struct genpd_onecell_data *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 60 */;
	struct device_node *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 58 */;
	struct device *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 57 */;
	struct scmi_device *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 54 */;
	const struct scmi_power_ops *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 28 */;
	struct scmi_pm_domain *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 27 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 26 */;
	bool cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 23 */;
	struct generic_pm_domain *cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 23 */;
	int cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 23 */;
	struct scmi_pm_domain cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 21 */;
	struct scmi_pm_domain {
		struct generic_pm_domain genpd;
		const struct scmi_handle *handle;
		const char *name;
		u32 domain;
	} cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 14 */;
	struct scmi_driver cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 120 */;
	const struct scmi_device_id cocci_id/* drivers/firmware/arm_scmi/scmi_pm_domain.c 114 */[];
}
