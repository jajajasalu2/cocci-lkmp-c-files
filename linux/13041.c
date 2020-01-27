cocci_test_suite() {
	struct rpi_power_domain *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 83 */;
	const char *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 81 */;
	int cocci_id/* drivers/soc/bcm/raspberrypi-power.c 81 */;
	struct rpi_power_domains *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 80 */;
	void cocci_id/* drivers/soc/bcm/raspberrypi-power.c 80 */;
	struct rpi_power_domain cocci_id/* drivers/soc/bcm/raspberrypi-power.c 67 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 64 */;
	struct rpi_power_domain_packet cocci_id/* drivers/soc/bcm/raspberrypi-power.c 53 */;
	bool cocci_id/* drivers/soc/bcm/raspberrypi-power.c 51 */;
	struct rpi_power_domain_packet {
		u32 domain;
		u32 on;
	} cocci_id/* drivers/soc/bcm/raspberrypi-power.c 42 */;
	struct rpi_power_domains {
		bool has_new_interface;
		struct genpd_onecell_data xlate;
		struct rpi_firmware *fw;
		struct rpi_power_domain domains[RPI_POWER_DOMAIN_COUNT];
	} cocci_id/* drivers/soc/bcm/raspberrypi-power.c 31 */;
	struct platform_driver cocci_id/* drivers/soc/bcm/raspberrypi-power.c 234 */;
	struct rpi_power_domain {
		u32 domain;
		bool enabled;
		bool old_interface;
		struct generic_pm_domain base;
		struct rpi_firmware *fw;
	} cocci_id/* drivers/soc/bcm/raspberrypi-power.c 23 */;
	const struct of_device_id cocci_id/* drivers/soc/bcm/raspberrypi-power.c 228 */[];
	struct device *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 157 */;
	struct device_node *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 156 */;
	struct platform_device *cocci_id/* drivers/soc/bcm/raspberrypi-power.c 154 */;
}
