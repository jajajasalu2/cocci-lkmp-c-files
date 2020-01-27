cocci_test_suite() {
	unsigned int cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 98 */;
	struct device *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 80 */;
	unsigned long cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 78 */;
	struct cr50_spi_phy *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 76 */;
	void cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 76 */;
	irqreturn_t cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 62 */;
	void *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 62 */;
	struct cr50_spi_phy cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 54 */;
	struct cr50_spi_phy {
		struct tpm_tis_spi_phy spi_phy;
		struct mutex time_track_mutex;
		unsigned long last_access;
		unsigned long access_delay;
		unsigned int irq_confirmation_attempt;
		bool irq_needs_confirmation;
		bool irq_confirmed;
	} cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 39 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 253 */;
	struct spi_device *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 248 */;
	char cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 228 */[4];
	char cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 227 */[TPM_CR50_MAX_FW_VER_LEN + 1];
	int cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 226 */;
	struct tpm_tis_spi_phy *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 225 */;
	struct tpm_tis_data *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 223 */;
	const struct tpm_tis_phy_ops cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 215 */;
	u16 cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 204 */;
	u8 *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 204 */;
	u32 cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 203 */;
	const u8 *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 181 */;
	struct spi_message cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 159 */;
	struct spi_transfer *cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 155 */;
	struct spi_transfer cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 135 */;
	bool cocci_id/* drivers/char/tpm/tpm_tis_spi_cr50.c 117 */;
}
