cocci_test_suite() {
	int cocci_id/* drivers/watchdog/mlx_wdt.c 59 */;
	u32 cocci_id/* drivers/watchdog/mlx_wdt.c 58 */;
	struct mlxreg_core_data *cocci_id/* drivers/watchdog/mlx_wdt.c 57 */;
	struct mlxreg_wdt *cocci_id/* drivers/watchdog/mlx_wdt.c 55 */;
	void cocci_id/* drivers/watchdog/mlx_wdt.c 55 */;
	struct mlxreg_wdt {
		struct watchdog_device wdd;
		struct mlxreg_core_platform_data *pdata;
		void *regmap;
		int action_idx;
		int timeout_idx;
		int tleft_idx;
		int ping_idx;
		int reset_idx;
		enum mlxreg_wdt_type wdt_type;
	} cocci_id/* drivers/watchdog/mlx_wdt.c 43 */;
	struct platform_driver cocci_id/* drivers/watchdog/mlx_wdt.c 278 */;
	struct device *cocci_id/* drivers/watchdog/mlx_wdt.c 236 */;
	struct platform_device *cocci_id/* drivers/watchdog/mlx_wdt.c 234 */;
	struct mlxreg_core_platform_data *cocci_id/* drivers/watchdog/mlx_wdt.c 188 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/mlx_wdt.c 181 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/mlx_wdt.c 158 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/mlx_wdt.c 146 */;
	unsigned int cocci_id/* drivers/watchdog/mlx_wdt.c 146 */;
}
