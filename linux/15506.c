cocci_test_suite() {
	struct nfcmrvl_private *cocci_id/* drivers/nfc/nfcmrvl/spi.c 74 */;
	struct sk_buff *cocci_id/* drivers/nfc/nfcmrvl/spi.c 44 */;
	struct nfcmrvl_spi_drv_data *cocci_id/* drivers/nfc/nfcmrvl/spi.c 43 */;
	irqreturn_t cocci_id/* drivers/nfc/nfcmrvl/spi.c 41 */;
	void *cocci_id/* drivers/nfc/nfcmrvl/spi.c 41 */;
	int cocci_id/* drivers/nfc/nfcmrvl/spi.c 41 */;
	struct nfcmrvl_spi_drv_data {
		unsigned long flags;
		struct spi_device *spi;
		struct nci_spi *nci_spi;
		struct completion handshake_completion;
		struct nfcmrvl_private *priv;
	} cocci_id/* drivers/nfc/nfcmrvl/spi.c 33 */;
	struct spi_driver cocci_id/* drivers/nfc/nfcmrvl/spi.c 211 */;
	const struct spi_device_id cocci_id/* drivers/nfc/nfcmrvl/spi.c 205 */[];
	const struct of_device_id cocci_id/* drivers/nfc/nfcmrvl/spi.c 199 */[];
	struct nfcmrvl_platform_data cocci_id/* drivers/nfc/nfcmrvl/spi.c 144 */;
	struct spi_device *cocci_id/* drivers/nfc/nfcmrvl/spi.c 141 */;
	struct nfcmrvl_platform_data *cocci_id/* drivers/nfc/nfcmrvl/spi.c 121 */;
	struct device_node *cocci_id/* drivers/nfc/nfcmrvl/spi.c 120 */;
	struct nfcmrvl_if_ops cocci_id/* drivers/nfc/nfcmrvl/spi.c 113 */;
	const struct nfcmrvl_fw_spi_config *cocci_id/* drivers/nfc/nfcmrvl/spi.c 108 */;
	const void *cocci_id/* drivers/nfc/nfcmrvl/spi.c 105 */;
	void cocci_id/* drivers/nfc/nfcmrvl/spi.c 104 */;
}
