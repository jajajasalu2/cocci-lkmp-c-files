cocci_test_suite() {
	struct hs_timing cocci_id/* drivers/mmc/host/dw_mmc-k3.c 74 */[TIMING_MODE][TIMING_CFG_NUM];
	struct hs_timing {
		u32 drv_phase;
		u32 smpl_dly;
		u32 smpl_phase_max;
		u32 smpl_phase_min;
	} cocci_id/* drivers/mmc/host/dw_mmc-k3.c 67 */;
	unsigned long cocci_id/* drivers/mmc/host/dw_mmc-k3.c 61 */[];
	struct k3_priv {
		int ctrl_id;
		u32 cur_speed;
		struct regmap *reg;
	} cocci_id/* drivers/mmc/host/dw_mmc-k3.c 55 */;
	struct platform_driver cocci_id/* drivers/mmc/host/dw_mmc-k3.c 471 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 455 */;
	const struct dw_mci_drv_data *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 454 */;
	struct platform_device *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 452 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/dw_mmc-k3.c 444 */[];
	const struct dw_mci_drv_data cocci_id/* drivers/mmc/host/dw_mmc-k3.c 436 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 371 */;
	struct dw_mci *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 370 */;
	u32 cocci_id/* drivers/mmc/host/dw_mmc-k3.c 367 */;
	struct dw_mci_slot *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 367 */;
	unsigned int cocci_id/* drivers/mmc/host/dw_mmc-k3.c 321 */;
	int cocci_id/* drivers/mmc/host/dw_mmc-k3.c 321 */;
	struct k3_priv *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 302 */;
	unsigned long cocci_id/* drivers/mmc/host/dw_mmc-k3.c 300 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/dw_mmc-k3.c 297 */;
	void cocci_id/* drivers/mmc/host/dw_mmc-k3.c 297 */;
	bool cocci_id/* drivers/mmc/host/dw_mmc-k3.c 278 */;
}
