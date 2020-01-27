cocci_test_suite() {
	const struct spm_reg_data cocci_id/* drivers/soc/qcom/spm.c 98 */;
	const u8 cocci_id/* drivers/soc/qcom/spm.c 88 */[SPM_REG_NR];
	struct spm_driver_data {
		void __iomem *reg_base;
		const struct spm_reg_data *reg_data;
	} cocci_id/* drivers/soc/qcom/spm.c 64 */;
	struct spm_reg_data {
		const u8 *reg_offset;
		u32 spm_cfg;
		u32 spm_dly;
		u32 pmic_dly;
		u32 pmic_data[MAX_PMIC_DATA];
		u8 seq[MAX_SEQ_DATA];
		u8 start_index[PM_SLEEP_MODE_NR];
	} cocci_id/* drivers/soc/qcom/spm.c 54 */;
	enum spm_reg{SPM_REG_CFG, SPM_REG_SPM_CTL, SPM_REG_DLY, SPM_REG_PMIC_DLY, SPM_REG_PMIC_DATA_0, SPM_REG_PMIC_DATA_1, SPM_REG_VCTL, SPM_REG_SEQ_ENTRY, SPM_REG_SPM_STS, SPM_REG_PMIC_STS, SPM_REG_NR,} cocci_id/* drivers/soc/qcom/spm.c 40 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/spm.c 370 */;
	void __iomem *cocci_id/* drivers/soc/qcom/spm.c 325 */;
	struct resource *cocci_id/* drivers/soc/qcom/spm.c 323 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/spm.c 320 */;
	enum pm_sleep_mode{PM_SLEEP_MODE_STBY, PM_SLEEP_MODE_RET, PM_SLEEP_MODE_SPC, PM_SLEEP_MODE_PC, PM_SLEEP_MODE_NR,} cocci_id/* drivers/soc/qcom/spm.c 32 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/spm.c 310 */[];
	int *cocci_id/* drivers/soc/qcom/spm.c 282 */;
	const struct cpuidle_ops cocci_id/* drivers/soc/qcom/spm.c 273 */;
	bool cocci_id/* drivers/soc/qcom/spm.c 212 */;
	cpumask_t cocci_id/* drivers/soc/qcom/spm.c 211 */;
	idle_fn *cocci_id/* drivers/soc/qcom/spm.c 210 */;
	idle_fn cocci_id/* drivers/soc/qcom/spm.c 209 */[CPUIDLE_STATE_MAX];
	const struct of_device_id *cocci_id/* drivers/soc/qcom/spm.c 205 */;
	struct device_node *cocci_id/* drivers/soc/qcom/spm.c 203 */;
	int __init cocci_id/* drivers/soc/qcom/spm.c 203 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/spm.c 198 */[]__initconst;
	unsigned long cocci_id/* drivers/soc/qcom/spm.c 193 */;
	struct spm_driver_data *cocci_id/* drivers/soc/qcom/spm.c 178 */;
	int cocci_id/* drivers/soc/qcom/spm.c 175 */;
	void cocci_id/* drivers/soc/qcom/spm.c 175 */;
	unsigned long int cocci_id/* drivers/soc/qcom/spm.c 164 */;
	enum pm_sleep_mode cocci_id/* drivers/soc/qcom/spm.c 150 */;
	enum spm_reg cocci_id/* drivers/soc/qcom/spm.c 144 */;
	u32 cocci_id/* drivers/soc/qcom/spm.c 143 */;
	int (*cocci_id/* drivers/soc/qcom/spm.c 112 */)(void);
	__typeof__(idle_fn *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct spm_driver_data *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
