cocci_test_suite() {
	struct phy_mdm6600 {
		struct device *dev;
		struct phy *generic_phy;
		struct phy_provider *phy_provider;
		struct gpio_desc *ctrl_gpios[PHY_MDM6600_NR_CTRL_LINES];
		struct gpio_descs *mode_gpios;
		struct gpio_descs *status_gpios;
		struct gpio_descs *cmd_gpios;
		struct delayed_work bootup_work;
		struct delayed_work status_work;
		struct delayed_work modem_wake_work;
		struct completion ack;
		bool enabled;
		bool running;
		bool awake;
		int status;
	} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 89 */;
	const char *const cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 83 */[];
	enum phy_mdm6600_status{PHY_MDM6600_STATUS_PANIC, PHY_MDM6600_STATUS_PANIC_BUSY_WAIT, PHY_MDM6600_STATUS_QC_DLOAD, PHY_MDM6600_STATUS_RAM_DOWNLOADER, PHY_MDM6600_STATUS_PHONE_CODE_AWAKE, PHY_MDM6600_STATUS_PHONE_CODE_ASLEEP, PHY_MDM6600_STATUS_SHUTDOWN_ACK, PHY_MDM6600_STATUS_UNDEFINED,} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 72 */;
	struct platform_driver cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 642 */;
	enum phy_mdm6600_cmd{PHY_MDM6600_CMD_BP_PANIC_ACK, PHY_MDM6600_CMD_DATA_ONLY_BYPASS, PHY_MDM6600_CMD_FULL_BYPASS, PHY_MDM6600_CMD_NO_BYPASS, PHY_MDM6600_CMD_BP_SHUTDOWN_REQ, PHY_MDM6600_CMD_BP_UNKNOWN_5, PHY_MDM6600_CMD_BP_UNKNOWN_6, PHY_MDM6600_CMD_UNDEFINED,} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 57 */;
	struct platform_device *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 539 */;
	const struct of_device_id cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 533 */[];
	const struct dev_pm_ops cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 528 */;
	int __maybe_unused cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 518 */;
	struct phy_mdm6600 cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 470 */;
	struct work_struct *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 465 */;
	enum phy_mdm6600_status_lines{PHY_MDM6600_STATUS0, PHY_MDM6600_STATUS1, PHY_MDM6600_STATUS2, PHY_MDM6600_NR_STATUS_LINES,} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 46 */;
	struct gpio_desc *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 446 */;
	enum phy_mdm6600_cmd_lines{PHY_MDM6600_CMD0, PHY_MDM6600_CMD1, PHY_MDM6600_CMD2, PHY_MDM6600_NR_CMD_LINES,} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 39 */;
	enum phy_mdm6600_bootmode_lines{PHY_MDM6600_MODE0, PHY_MDM6600_MODE1, PHY_MDM6600_NR_MODE_LINES,} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 33 */;
	struct gpio_desc **cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 314 */;
	const struct phy_mdm6600_map *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 312 */;
	const struct phy_mdm6600_map cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 294 */[PHY_MDM6600_NR_CTRL_LINES];
	struct phy_mdm6600_map {
		const char *name;
		int direction;
	} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 289 */;
	struct device *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 265 */;
	enum phy_mdm6600_ctrl_lines{PHY_MDM6600_ENABLE, PHY_MDM6600_POWER, PHY_MDM6600_RESET, PHY_MDM6600_NR_CTRL_LINES,} cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 26 */;
	irqreturn_t cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 228 */;
	void *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 228 */;
	struct phy_mdm6600 *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 183 */;
	int cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 183 */;
	void cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 183 */;
	const struct phy_ops cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 170 */;
	struct phy *cocci_id/* drivers/phy/motorola/phy-mapphone-mdm6600.c 107 */;
}
