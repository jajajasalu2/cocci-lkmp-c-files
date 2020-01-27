cocci_test_suite() {
	struct ocotp_params {
		unsigned int nregs;
		unsigned int bank_address_words;
		void (*set_timing)(struct ocotp_priv *priv);
	} cocci_id/* drivers/nvmem/imx-ocotp.c 65 */;
	struct ocotp_priv {
		struct device *dev;
		struct clk *clk;
		void __iomem *base;
		const struct ocotp_params *params;
		struct nvmem_config *config;
	} cocci_id/* drivers/nvmem/imx-ocotp.c 57 */;
	struct platform_driver cocci_id/* drivers/nvmem/imx-ocotp.c 539 */;
	struct nvmem_device *cocci_id/* drivers/nvmem/imx-ocotp.c 508 */;
	struct ocotp_priv *cocci_id/* drivers/nvmem/imx-ocotp.c 507 */;
	struct device *cocci_id/* drivers/nvmem/imx-ocotp.c 506 */;
	struct platform_device *cocci_id/* drivers/nvmem/imx-ocotp.c 504 */;
	int cocci_id/* drivers/nvmem/imx-ocotp.c 504 */;
	const struct of_device_id cocci_id/* drivers/nvmem/imx-ocotp.c 488 */[];
	const struct ocotp_params cocci_id/* drivers/nvmem/imx-ocotp.c 423 */;
	struct nvmem_config cocci_id/* drivers/nvmem/imx-ocotp.c 414 */;
	u8 cocci_id/* drivers/nvmem/imx-ocotp.c 251 */;
	u64 cocci_id/* drivers/nvmem/imx-ocotp.c 225 */;
	unsigned long cocci_id/* drivers/nvmem/imx-ocotp.c 172 */;
	u32 *cocci_id/* drivers/nvmem/imx-ocotp.c 124 */;
	size_t cocci_id/* drivers/nvmem/imx-ocotp.c 120 */;
	void *cocci_id/* drivers/nvmem/imx-ocotp.c 119 */;
	unsigned int cocci_id/* drivers/nvmem/imx-ocotp.c 119 */;
	u32 cocci_id/* drivers/nvmem/imx-ocotp.c 110 */;
	void __iomem *cocci_id/* drivers/nvmem/imx-ocotp.c 108 */;
	void cocci_id/* drivers/nvmem/imx-ocotp.c 108 */;
}
