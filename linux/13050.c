cocci_test_suite() {
	struct clk_bulk_data cocci_id/* drivers/soc/qcom/ocmem.c 95 */[];
	struct ocmem {
		struct device *dev;
		const struct ocmem_config *config;
		struct resource *memory;
		void __iomem *mmio;
		unsigned int num_ports;
		unsigned int num_macros;
		bool interleaved;
		struct ocmem_region *regions;
		unsigned long active_allocations;
	} cocci_id/* drivers/soc/qcom/ocmem.c 52 */;
	struct ocmem_config {
		uint8_t num_regions;
		unsigned long macro_size;
	} cocci_id/* drivers/soc/qcom/ocmem.c 47 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/ocmem.c 421 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/ocmem.c 414 */[];
	const struct ocmem_config cocci_id/* drivers/soc/qcom/ocmem.c 409 */;
	struct ocmem_region {
		bool interleaved;
		enum region_mode mode;
		unsigned int num_macros;
		enum ocmem_macro_state macro_state[4];
		unsigned long macro_size;
		unsigned long region_size;
	} cocci_id/* drivers/soc/qcom/ocmem.c 38 */;
	struct ocmem_region *cocci_id/* drivers/soc/qcom/ocmem.c 370 */;
	struct ocmem_region cocci_id/* drivers/soc/qcom/ocmem.c 363 */;
	enum ocmem_macro_state{PASSTHROUGH=0, PERI_ON=1, CORE_ON=2, CLK_OFF=4,} cocci_id/* drivers/soc/qcom/ocmem.c 31 */;
	struct resource *cocci_id/* drivers/soc/qcom/ocmem.c 297 */;
	struct device *cocci_id/* drivers/soc/qcom/ocmem.c 294 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/ocmem.c 292 */;
	void cocci_id/* drivers/soc/qcom/ocmem.c 265 */;
	enum region_mode{WIDE_MODE=0x0, THIN_MODE, MODE_DEFAULT=WIDE_MODE,} cocci_id/* drivers/soc/qcom/ocmem.c 25 */;
	int cocci_id/* drivers/soc/qcom/ocmem.c 213 */;
	struct ocmem_buf *cocci_id/* drivers/soc/qcom/ocmem.c 209 */;
	struct device_node *cocci_id/* drivers/soc/qcom/ocmem.c 191 */;
	enum region_mode cocci_id/* drivers/soc/qcom/ocmem.c 165 */;
	enum ocmem_macro_state cocci_id/* drivers/soc/qcom/ocmem.c 165 */;
	enum ocmem_client cocci_id/* drivers/soc/qcom/ocmem.c 155 */;
	struct ocmem *cocci_id/* drivers/soc/qcom/ocmem.c 154 */;
	unsigned long cocci_id/* drivers/soc/qcom/ocmem.c 154 */;
	uint32_t cocci_id/* drivers/soc/qcom/ocmem.c 116 */;
	u32 cocci_id/* drivers/soc/qcom/ocmem.c 109 */;
}
