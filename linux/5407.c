cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/atmel-quadspi.c 617 */;
	const struct of_device_id cocci_id/* drivers/spi/atmel-quadspi.c 603 */[];
	const struct atmel_qspi_caps cocci_id/* drivers/spi/atmel-quadspi.c 598 */;
	struct device *cocci_id/* drivers/spi/atmel-quadspi.c 578 */;
	int __maybe_unused cocci_id/* drivers/spi/atmel-quadspi.c 578 */;
	struct resource *cocci_id/* drivers/spi/atmel-quadspi.c 445 */;
	struct spi_controller *cocci_id/* drivers/spi/atmel-quadspi.c 443 */;
	struct platform_device *cocci_id/* drivers/spi/atmel-quadspi.c 441 */;
	irqreturn_t cocci_id/* drivers/spi/atmel-quadspi.c 422 */;
	void *cocci_id/* drivers/spi/atmel-quadspi.c 422 */;
	unsigned long cocci_id/* drivers/spi/atmel-quadspi.c 385 */;
	struct spi_device *cocci_id/* drivers/spi/atmel-quadspi.c 381 */;
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/atmel-quadspi.c 375 */;
	const char *cocci_id/* drivers/spi/atmel-quadspi.c 370 */;
	void cocci_id/* drivers/spi/atmel-quadspi.c 339 */;
	u32 cocci_id/* drivers/spi/atmel-quadspi.c 329 */;
	struct atmel_qspi *cocci_id/* drivers/spi/atmel-quadspi.c 328 */;
	const struct spi_mem_op *cocci_id/* drivers/spi/atmel-quadspi.c 326 */;
	struct spi_mem *cocci_id/* drivers/spi/atmel-quadspi.c 326 */;
	int cocci_id/* drivers/spi/atmel-quadspi.c 326 */;
	u32 *cocci_id/* drivers/spi/atmel-quadspi.c 216 */;
	const struct atmel_qspi_mode *cocci_id/* drivers/spi/atmel-quadspi.c 176 */;
	bool cocci_id/* drivers/spi/atmel-quadspi.c 175 */;
	const struct atmel_qspi_mode cocci_id/* drivers/spi/atmel-quadspi.c 165 */[];
	struct atmel_qspi_mode {
		u8 cmd_buswidth;
		u8 addr_buswidth;
		u8 data_buswidth;
		u32 config;
	} cocci_id/* drivers/spi/atmel-quadspi.c 158 */;
	struct atmel_qspi {
		void __iomem *regs;
		void __iomem *mem;
		struct clk *pclk;
		struct clk *qspick;
		struct platform_device *pdev;
		const struct atmel_qspi_caps *caps;
		u32 pending;
		u32 mr;
		u32 scr;
		struct completion cmd_completion;
	} cocci_id/* drivers/spi/atmel-quadspi.c 145 */;
	struct atmel_qspi_caps {
		bool has_qspick;
		bool has_ricr;
	} cocci_id/* drivers/spi/atmel-quadspi.c 140 */;
}
