cocci_test_suite() {
	struct scpi_ops *cocci_id/* drivers/firmware/scpi_pm_domain.c 72 */;
	struct generic_pm_domain **cocci_id/* drivers/firmware/scpi_pm_domain.c 71 */;
	struct genpd_onecell_data *cocci_id/* drivers/firmware/scpi_pm_domain.c 70 */;
	struct device_node *cocci_id/* drivers/firmware/scpi_pm_domain.c 68 */;
	struct device *cocci_id/* drivers/firmware/scpi_pm_domain.c 67 */;
	struct platform_device *cocci_id/* drivers/firmware/scpi_pm_domain.c 65 */;
	struct generic_pm_domain *cocci_id/* drivers/firmware/scpi_pm_domain.c 58 */;
	enum scpi_power_domain_state cocci_id/* drivers/firmware/scpi_pm_domain.c 37 */;
	bool cocci_id/* drivers/firmware/scpi_pm_domain.c 34 */;
	struct scpi_pm_domain *cocci_id/* drivers/firmware/scpi_pm_domain.c 34 */;
	int cocci_id/* drivers/firmware/scpi_pm_domain.c 34 */;
	struct scpi_pm_domain cocci_id/* drivers/firmware/scpi_pm_domain.c 32 */;
	enum scpi_power_domain_state{SCPI_PD_STATE_ON=0, SCPI_PD_STATE_OFF=3,} cocci_id/* drivers/firmware/scpi_pm_domain.c 27 */;
	struct scpi_pm_domain {
		struct generic_pm_domain genpd;
		struct scpi_ops *ops;
		u32 domain;
		char name[30];
	} cocci_id/* drivers/firmware/scpi_pm_domain.c 15 */;
	struct platform_driver cocci_id/* drivers/firmware/scpi_pm_domain.c 141 */;
	const struct of_device_id cocci_id/* drivers/firmware/scpi_pm_domain.c 135 */[];
}
