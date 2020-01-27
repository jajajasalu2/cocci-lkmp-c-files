cocci_test_suite() {
	struct aspeed_p2a_user {
		struct file *file;
		struct aspeed_p2a_ctrl *parent;
		u32 read;
		u32 readwrite[P2A_REGION_COUNT];
	} cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 72 */;
	struct aspeed_p2a_ctrl {
		struct miscdevice miscdev;
		struct regmap *regmap;
		const struct aspeed_p2a_model_data *config;
		struct mutex tracking;
		u32 readers;
		u32 readerwriters[P2A_REGION_COUNT];
		phys_addr_t mem_base;
		resource_size_t mem_size;
	} cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 55 */;
	struct aspeed_p2a_model_data {
		struct region regions[P2A_REGION_COUNT];
	} cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 50 */;
	struct region {
		u64 min;
		u64 max;
		u32 bit;
	} cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 44 */;
	struct platform_driver cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 430 */;
	const struct of_device_id cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 422 */[];
	const struct aspeed_p2a_model_data cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 400 */;
	struct device_node *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 337 */;
	struct resource cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 336 */;
	struct device *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 335 */;
	struct aspeed_p2a_ctrl *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 334 */;
	struct platform_device *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 332 */;
	int cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 332 */;
	u32 cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 321 */;
	void cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 318 */;
	const struct file_operations cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 309 */;
	struct inode *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 237 */;
	struct aspeed_p2a_ctrl_mapping cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 178 */;
	void __user *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 177 */;
	struct aspeed_p2a_user *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 175 */;
	unsigned long cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 173 */;
	struct file *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 172 */;
	unsigned int cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 172 */;
	long cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 172 */;
	const struct region *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 140 */;
	u64 cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 132 */;
	struct aspeed_p2a_ctrl_mapping *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 129 */;
	bool cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 127 */;
	pgprot_t cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 103 */;
	struct vm_area_struct *cocci_id/* drivers/soc/aspeed/aspeed-p2a-ctrl.c 100 */;
}
