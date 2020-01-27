cocci_test_suite() {
	struct socinfo {
		__le32 fmt;
		__le32 id;
		__le32 ver;
		char build_id[SMEM_SOCINFO_BUILD_ID_LENGTH];
		__le32 raw_id;
		__le32 raw_ver;
		__le32 hw_plat;
		__le32 plat_ver;
		__le32 accessory_chip;
		__le32 hw_plat_subtype;
		__le32 pmic_model;
		__le32 pmic_die_rev;
		__le32 pmic_model_1;
		__le32 pmic_die_rev_1;
		__le32 pmic_model_2;
		__le32 pmic_die_rev_2;
		__le32 foundry_id;
		__le32 serial_num;
		__le32 num_pmics;
		__le32 pmic_array_offset;
		__le32 chip_family;
		__le32 raw_device_family;
		__le32 raw_device_num;
	} cocci_id/* drivers/soc/qcom/socinfo.c 89 */;
	const char *constcocci_id/* drivers/soc/qcom/socinfo.c 68 */[];
	struct platform_driver cocci_id/* drivers/soc/qcom/socinfo.c 466 */;
	struct socinfo cocci_id/* drivers/soc/qcom/socinfo.c 436 */;
	size_t cocci_id/* drivers/soc/qcom/socinfo.c 417 */;
	struct qcom_socinfo *cocci_id/* drivers/soc/qcom/socinfo.c 415 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/socinfo.c 413 */;
	void cocci_id/* drivers/soc/qcom/socinfo.c 401 */;
	struct dentry *cocci_id/* drivers/soc/qcom/socinfo.c 303 */;
	struct smem_image_version *cocci_id/* drivers/soc/qcom/socinfo.c 302 */;
	struct socinfo *cocci_id/* drivers/soc/qcom/socinfo.c 240 */;
	struct seq_file *cocci_id/* drivers/soc/qcom/socinfo.c 238 */;
	void *cocci_id/* drivers/soc/qcom/socinfo.c 238 */;
	int cocci_id/* drivers/soc/qcom/socinfo.c 238 */;
	const char *cocci_id/* drivers/soc/qcom/socinfo.c 205 */;
	struct device *cocci_id/* drivers/soc/qcom/socinfo.c 205 */;
	unsigned int cocci_id/* drivers/soc/qcom/socinfo.c 205 */;
	const struct soc_id cocci_id/* drivers/soc/qcom/socinfo.c 162 */[];
	struct soc_id {
		unsigned int id;
		const char *name;
	} cocci_id/* drivers/soc/qcom/socinfo.c 157 */;
	struct qcom_socinfo {
		struct soc_device *soc_dev;
		struct soc_device_attribute attr;
#ifdef CONFIG_DEBUG_FS
		struct dentry *dbg_root;
		struct socinfo_params info;
#endif
	} cocci_id/* drivers/soc/qcom/socinfo.c 148 */;
	struct smem_image_version {
		char name[SMEM_IMAGE_VERSION_NAME_SIZE];
		char variant[SMEM_IMAGE_VERSION_VARIANT_SIZE];
		char pad;
		char oem[SMEM_IMAGE_VERSION_OEM_SIZE];
	} cocci_id/* drivers/soc/qcom/socinfo.c 140 */;
	struct socinfo_params {
		u32 raw_device_family;
		u32 hw_plat_subtype;
		u32 accessory_chip;
		u32 raw_device_num;
		u32 chip_family;
		u32 foundry_id;
		u32 plat_ver;
		u32 raw_ver;
		u32 hw_plat;
		u32 fmt;
	} cocci_id/* drivers/soc/qcom/socinfo.c 127 */;
}
