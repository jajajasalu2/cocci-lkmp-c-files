cocci_test_suite() {
	u8 cocci_id/* drivers/nfc/st-nci/spi.c 80 */[ST_NCI_SPI_MAX_SIZE + NCI_DATA_HDR_SIZE + ST_NCI_FRAME_HEADROOM + ST_NCI_FRAME_TAILROOM];
	void cocci_id/* drivers/nfc/st-nci/spi.c 61 */;
	struct st_nci_spi_phy {
		struct spi_device *spi_dev;
		struct llt_ndlc *ndlc;
		bool irq_active;
		struct gpio_desc *gpiod_reset;
		struct st_nci_se_status se_status;
	} cocci_id/* drivers/nfc/st-nci/spi.c 33 */;
	struct spi_driver cocci_id/* drivers/nfc/st-nci/spi.c 305 */;
	const struct of_device_id cocci_id/* drivers/nfc/st-nci/spi.c 299 */[];
	const struct acpi_device_id cocci_id/* drivers/nfc/st-nci/spi.c 293 */[];
	struct spi_device_id cocci_id/* drivers/nfc/st-nci/spi.c 287 */[];
	struct st_nci_spi_phy cocci_id/* drivers/nfc/st-nci/spi.c 232 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/nfc/st-nci/spi.c 212 */[];
	const struct acpi_gpio_params cocci_id/* drivers/nfc/st-nci/spi.c 210 */;
	struct nfc_phy_ops cocci_id/* drivers/nfc/st-nci/spi.c 204 */;
	struct sk_buff *cocci_id/* drivers/nfc/st-nci/spi.c 176 */;
	struct spi_device *cocci_id/* drivers/nfc/st-nci/spi.c 175 */;
	struct st_nci_spi_phy *cocci_id/* drivers/nfc/st-nci/spi.c 174 */;
	irqreturn_t cocci_id/* drivers/nfc/st-nci/spi.c 172 */;
	void *cocci_id/* drivers/nfc/st-nci/spi.c 172 */;
	int cocci_id/* drivers/nfc/st-nci/spi.c 172 */;
	__be16 *cocci_id/* drivers/nfc/st-nci/spi.c 136 */;
	struct spi_transfer cocci_id/* drivers/nfc/st-nci/spi.c 127 */;
	u8 cocci_id/* drivers/nfc/st-nci/spi.c 125 */[ST_NCI_SPI_MAX_SIZE];
	u8 cocci_id/* drivers/nfc/st-nci/spi.c 124 */;
	struct sk_buff **cocci_id/* drivers/nfc/st-nci/spi.c 121 */;
}
