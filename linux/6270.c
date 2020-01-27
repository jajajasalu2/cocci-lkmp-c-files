cocci_test_suite() {
	struct regmap_irq_chip cocci_id/* drivers/mfd/motorola-cpcap.c 92 */[CPCAP_NR_IRQ_CHIPS];
	u16 cocci_id/* drivers/mfd/motorola-cpcap.c 63 */;
	struct cpcap_ddata *cocci_id/* drivers/mfd/motorola-cpcap.c 61 */;
	int cocci_id/* drivers/mfd/motorola-cpcap.c 61 */;
	struct regmap_irq_chip_data *cocci_id/* drivers/mfd/motorola-cpcap.c 54 */;
	struct regmap *cocci_id/* drivers/mfd/motorola-cpcap.c 35 */;
	struct spi_driver cocci_id/* drivers/mfd/motorola-cpcap.c 312 */;
	struct cpcap_ddata {
		struct spi_device *spi;
		struct regmap_irq *irqs;
		struct regmap_irq_chip_data *irqdata[CPCAP_NR_IRQ_CHIPS];
		const struct regmap_config *regmap_conf;
		struct regmap *regmap;
	} cocci_id/* drivers/mfd/motorola-cpcap.c 27 */;
	const struct of_device_id *cocci_id/* drivers/mfd/motorola-cpcap.c 266 */;
	struct spi_device *cocci_id/* drivers/mfd/motorola-cpcap.c 264 */;
	const struct mfd_cell cocci_id/* drivers/mfd/motorola-cpcap.c 217 */[];
	const struct regmap_config cocci_id/* drivers/mfd/motorola-cpcap.c 205 */;
	const struct of_device_id cocci_id/* drivers/mfd/motorola-cpcap.c 198 */[];
	struct regmap_irq *cocci_id/* drivers/mfd/motorola-cpcap.c 147 */;
	struct regmap_irq_chip *cocci_id/* drivers/mfd/motorola-cpcap.c 143 */;
	unsigned int cocci_id/* drivers/mfd/motorola-cpcap.c 126 */;
	void cocci_id/* drivers/mfd/motorola-cpcap.c 122 */;
}
