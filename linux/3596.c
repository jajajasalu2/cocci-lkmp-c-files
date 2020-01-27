cocci_test_suite() {
	void __iomem *cocci_id/* drivers/firmware/meson/meson_sm.c 77 */;
	struct arm_smccc_res cocci_id/* drivers/firmware/meson/meson_sm.c 71 */;
	u32 cocci_id/* drivers/firmware/meson/meson_sm.c 68 */;
	const struct meson_sm_cmd *cocci_id/* drivers/firmware/meson/meson_sm.c 60 */;
	const struct meson_sm_chip *cocci_id/* drivers/firmware/meson/meson_sm.c 57 */;
	struct meson_sm_firmware {
		const struct meson_sm_chip *chip;
		void __iomem *sm_shmem_in_base;
		void __iomem *sm_shmem_out_base;
	} cocci_id/* drivers/firmware/meson/meson_sm.c 51 */;
	const struct meson_sm_chip cocci_id/* drivers/firmware/meson/meson_sm.c 38 */;
	struct platform_driver cocci_id/* drivers/firmware/meson/meson_sm.c 325 */;
	struct meson_sm_chip {
		unsigned int shmem_size;
		u32 cmd_shmem_in_base;
		u32 cmd_shmem_out_base;
		struct meson_sm_cmd cmd[];
	} cocci_id/* drivers/firmware/meson/meson_sm.c 31 */;
	struct device *cocci_id/* drivers/firmware/meson/meson_sm.c 284 */;
	int __init cocci_id/* drivers/firmware/meson/meson_sm.c 282 */;
	const struct of_device_id cocci_id/* drivers/firmware/meson/meson_sm.c 277 */[];
	const struct attribute_group cocci_id/* drivers/firmware/meson/meson_sm.c 273 */;
	struct attribute *cocci_id/* drivers/firmware/meson/meson_sm.c 268 */[];
	struct meson_sm_cmd {
		unsigned int index;
		u32 smc_id;
	} cocci_id/* drivers/firmware/meson/meson_sm.c 25 */;
	uint8_t *cocci_id/* drivers/firmware/meson/meson_sm.c 243 */;
	char *cocci_id/* drivers/firmware/meson/meson_sm.c 239 */;
	struct device_attribute *cocci_id/* drivers/firmware/meson/meson_sm.c 238 */;
	ssize_t cocci_id/* drivers/firmware/meson/meson_sm.c 238 */;
	struct platform_device *cocci_id/* drivers/firmware/meson/meson_sm.c 225 */;
	struct device_node *cocci_id/* drivers/firmware/meson/meson_sm.c 223 */;
	void *cocci_id/* drivers/firmware/meson/meson_sm.c 140 */;
	u32 *cocci_id/* drivers/firmware/meson/meson_sm.c 103 */;
	struct meson_sm_firmware *cocci_id/* drivers/firmware/meson/meson_sm.c 102 */;
	unsigned int cocci_id/* drivers/firmware/meson/meson_sm.c 102 */;
	int cocci_id/* drivers/firmware/meson/meson_sm.c 102 */;
}
