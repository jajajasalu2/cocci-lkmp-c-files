cocci_test_suite() {
	struct otpc_priv {
		struct device *dev;
		void __iomem *base;
		const struct otpc_map *map;
		struct nvmem_config *config;
	} cocci_id/* drivers/nvmem/bcm-ocotp.c 81 */;
	struct otpc_map cocci_id/* drivers/nvmem/bcm-ocotp.c 69 */;
	struct otpc_map {
		u32 otpc_row_size;
		u16 data_r_offset[4];
		u16 data_w_offset[4];
	} cocci_id/* drivers/nvmem/bcm-ocotp.c 60 */;
	struct platform_driver cocci_id/* drivers/nvmem/bcm-ocotp.c 315 */;
	u32 cocci_id/* drivers/nvmem/bcm-ocotp.c 261 */;
	struct nvmem_device *cocci_id/* drivers/nvmem/bcm-ocotp.c 259 */;
	struct otpc_priv *cocci_id/* drivers/nvmem/bcm-ocotp.c 258 */;
	struct resource *cocci_id/* drivers/nvmem/bcm-ocotp.c 257 */;
	struct device *cocci_id/* drivers/nvmem/bcm-ocotp.c 256 */;
	struct platform_device *cocci_id/* drivers/nvmem/bcm-ocotp.c 254 */;
	int cocci_id/* drivers/nvmem/bcm-ocotp.c 254 */;
	const struct acpi_device_id cocci_id/* drivers/nvmem/bcm-ocotp.c 247 */[];
	const struct of_device_id cocci_id/* drivers/nvmem/bcm-ocotp.c 240 */[];
	struct nvmem_config cocci_id/* drivers/nvmem/bcm-ocotp.c 231 */;
	u32 *cocci_id/* drivers/nvmem/bcm-ocotp.c 166 */;
	size_t cocci_id/* drivers/nvmem/bcm-ocotp.c 163 */;
	void *cocci_id/* drivers/nvmem/bcm-ocotp.c 162 */;
	unsigned int cocci_id/* drivers/nvmem/bcm-ocotp.c 162 */;
	void __iomem *cocci_id/* drivers/nvmem/bcm-ocotp.c 150 */;
	const u32 cocci_id/* drivers/nvmem/bcm-ocotp.c 132 */[];
	void cocci_id/* drivers/nvmem/bcm-ocotp.c 103 */;
}
