cocci_test_suite() {
	u8 *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 99 */;
	struct qcom_cpufreq_drv *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 96 */;
	struct nvmem_cell *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 95 */;
	struct device *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 94 */;
	enum _msm_id cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 78 */;
	u32 *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 68 */;
	size_t cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 67 */;
	enum _msm8996_version cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 65 */;
	struct qcom_cpufreq_drv {
		struct opp_table **opp_tables;
		struct opp_table **genpd_opp_tables;
		u32 versions;
		const struct qcom_cpufreq_match_data *data;
	} cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 56 */;
	struct qcom_cpufreq_match_data {
		int (*get_version)(struct device *cpu_dev,
				   struct nvmem_cell *speedbin_nvmem,
				   struct qcom_cpufreq_drv *drv);
		const char **genpd_names;
	} cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 49 */;
	struct qcom_cpufreq_drv cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 47 */;
	enum _msm8996_version{MSM8996_V3, MSM8996_SG, NUM_OF_MSM8996_VERSIONS,} cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 41 */;
	void __exit cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 344 */;
	void cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 344 */;
	enum _msm_id{MSM8996V3=0xF6ul, APQ8096V3=0x123ul, MSM8996SG=0x131ul, APQ8096SG=0x138ul,} cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 34 */;
	int cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 319 */;
	const struct of_device_id *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 318 */;
	struct device_node *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 317 */;
	int __init cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 315 */;
	const struct of_device_id cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 302 */[]__initconst;
	struct platform_driver cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 294 */;
	unsigned cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 144 */;
	struct platform_device *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 138 */;
	const char *cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 132 */[];
	const struct qcom_cpufreq_match_data cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 128 */;
	unsigned int cocci_id/* drivers/cpufreq/qcom-cpufreq-nvmem.c 114 */;
}
