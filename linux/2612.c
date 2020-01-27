cocci_test_suite() {
	struct vf610_ocotp {
		void __iomem *base;
		struct clk *clk;
		struct device *dev;
		struct nvmem_device *nvmem;
		int timing;
	} cocci_id/* drivers/nvmem/vf610-ocotp.c 89 */;
	const int cocci_id/* drivers/nvmem/vf610-ocotp.c 56 */[][2];
	struct platform_driver cocci_id/* drivers/nvmem/vf610-ocotp.c 245 */;
	struct vf610_ocotp cocci_id/* drivers/nvmem/vf610-ocotp.c 218 */;
	struct resource *cocci_id/* drivers/nvmem/vf610-ocotp.c 215 */;
	struct device *cocci_id/* drivers/nvmem/vf610-ocotp.c 214 */;
	struct platform_device *cocci_id/* drivers/nvmem/vf610-ocotp.c 212 */;
	const struct of_device_id cocci_id/* drivers/nvmem/vf610-ocotp.c 206 */[];
	struct nvmem_config cocci_id/* drivers/nvmem/vf610-ocotp.c 199 */;
	void __iomem *cocci_id/* drivers/nvmem/vf610-ocotp.c 150 */;
	size_t cocci_id/* drivers/nvmem/vf610-ocotp.c 147 */;
	void *cocci_id/* drivers/nvmem/vf610-ocotp.c 146 */;
	unsigned int cocci_id/* drivers/nvmem/vf610-ocotp.c 146 */;
	int cocci_id/* drivers/nvmem/vf610-ocotp.c 134 */;
	u32 cocci_id/* drivers/nvmem/vf610-ocotp.c 116 */;
	struct vf610_ocotp *cocci_id/* drivers/nvmem/vf610-ocotp.c 114 */;
}
