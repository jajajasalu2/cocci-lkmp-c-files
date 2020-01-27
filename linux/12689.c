cocci_test_suite() {
	int __init cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 977 */;
	void cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 977 */;
	struct platform_driver cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 967 */;
	const struct of_device_id cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 960 */[];
	struct resource cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 866 */;
	struct mc_version cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 865 */;
	u32 cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 864 */;
	phys_addr_t cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 863 */;
	struct fsl_mc_io *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 861 */;
	struct fsl_mc *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 859 */;
	struct fsl_mc_obj_desc cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 857 */;
	struct platform_device *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 855 */;
	bool cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 84 */;
	struct fsl_mc_addr_translation_range *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 834 */;
	struct fsl_mc_addr_translation_range cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 827 */;
	struct fsl_mc_device *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 82 */;
	const struct fsl_mc_device_id *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 81 */;
	const __be32 *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 804 */;
	u8 *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 797 */;
	struct fsl_mc_addr_translation_range **cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 795 */;
	struct device_driver *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 79 */;
	struct device *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 79 */;
	__be32 cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 785 */;
	struct device_node *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 758 */;
	const __be32 **cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 752 */;
	int *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 749 */;
	struct dprc_endpoint cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 719 */;
	struct mc_version {
		u32 major;
		u32 minor;
		u32 revision;
	} cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 65 */;
	struct fsl_mc_bus *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 573 */;
	struct fsl_mc_device **cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 569 */;
	struct fsl_mc_obj_desc *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 566 */;
	struct fsl_mc_addr_translation_range {
		enum dprc_region_type mc_region_type;
		u64 start_mc_offset;
		u64 end_mc_offset;
		phys_addr_t start_phys_addr;
	} cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 50 */;
	struct dprc_region_desc cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 488 */;
	enum dprc_region_type cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 466 */;
	struct resource *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 463 */;
	u64 cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 425 */;
	phys_addr_t *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 425 */;
	u16 *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 411 */;
	struct dprc_attributes cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 395 */;
	u16 cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 386 */;
	struct dprc_attributes *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 384 */;
	struct device **cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 370 */;
	struct fsl_mc {
		struct fsl_mc_device *root_mc_bus_dev;
		u8 num_translation_ranges;
		struct fsl_mc_addr_translation_range *translation_ranges;
	} cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 35 */;
	struct dpmng_rsp_get_version *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 344 */;
	struct fsl_mc_command cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 343 */;
	struct mc_version *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 341 */;
	struct module *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 293 */;
	struct fsl_mc_driver *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 292 */;
	int cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 292 */;
	const struct {
		struct device_type *dev_type;
		const char *type;
	} cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 218 */[];
	const char *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 216 */;
	struct device_type *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 216 */;
	struct device_type cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 186 */;
	struct bus_type cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 157 */;
	struct attribute *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 150 */[];
	char *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 141 */;
	struct device_attribute *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 140 */;
	ssize_t cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 140 */;
	struct kobj_uevent_env *cocci_id/* drivers/bus/fsl-mc/fsl-mc-bus.c 118 */;
}