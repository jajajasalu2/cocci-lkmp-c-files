cocci_test_suite() {
	enum infineon_tpm_header{TPM_VL_VER=0x01, TPM_VL_CHANNEL_CONTROL=0x07, TPM_VL_CHANNEL_PERSONALISATION=0x0A, TPM_VL_CHANNEL_TPM=0x0B, TPM_VL_CONTROL=0x00, TPM_INF_NAK=0x15, TPM_CTRL_WTX=0x10, TPM_CTRL_WTX_ABORT=0x18, TPM_CTRL_WTX_ABORT_ACK=0x18, TPM_CTRL_ERROR=0x20, TPM_CTRL_CHAININGACK=0x40, TPM_CTRL_CHAINING=0x80, TPM_CTRL_DATA=0x04, TPM_CTRL_DATA_CHA=0x84, TPM_CTRL_DATA_CHA_ACK=0xC4,} cocci_id/* drivers/char/tpm/tpm_infineon.c 85 */;
	unsigned char cocci_id/* drivers/char/tpm/tpm_infineon.c 76 */;
	void cocci_id/* drivers/char/tpm/tpm_infineon.c 68 */;
	struct pnp_driver cocci_id/* drivers/char/tpm/tpm_infineon.c 610 */;
	struct device *cocci_id/* drivers/char/tpm/tpm_infineon.c 591 */;
	struct tpm_inf_dev cocci_id/* drivers/char/tpm/tpm_infineon.c 50 */;
	const char *cocci_id/* drivers/char/tpm/tpm_infineon.c 396 */;
	int cocci_id/* drivers/char/tpm/tpm_infineon.c 393 */[2];
	u8 cocci_id/* drivers/char/tpm/tpm_infineon.c 392 */;
	const struct pnp_device_id *cocci_id/* drivers/char/tpm/tpm_infineon.c 389 */;
	struct pnp_dev *cocci_id/* drivers/char/tpm/tpm_infineon.c 388 */;
	const struct pnp_device_id cocci_id/* drivers/char/tpm/tpm_infineon.c 379 */[];
	const struct tpm_class_ops cocci_id/* drivers/char/tpm/tpm_infineon.c 370 */;
	struct tpm_inf_dev {
		int iotype;
		void __iomem *mem_base;
		unsigned long map_base;
		unsigned long map_size;
		unsigned int index_off;
		unsigned int data_regs;
		unsigned int data_size;
		unsigned int config_port;
		unsigned int config_size;
	} cocci_id/* drivers/char/tpm/tpm_infineon.c 35 */;
	u32 cocci_id/* drivers/char/tpm/tpm_infineon.c 243 */;
	u8 *cocci_id/* drivers/char/tpm/tpm_infineon.c 239 */;
	size_t cocci_id/* drivers/char/tpm/tpm_infineon.c 239 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm_infineon.c 144 */;
	int cocci_id/* drivers/char/tpm/tpm_infineon.c 144 */;
	enum infineon_tpm_values{CHIP_ID1=0x20, CHIP_ID2=0x21, TPM_DAR=0x30, RESET_LP_IRQC_DISABLE=0x41, ENABLE_REGISTER_PAIR=0x55, IOLIMH=0x60, IOLIML=0x61, DISABLE_REGISTER_PAIR=0xAA, IDVENL=0xF1, IDVENH=0xF2, IDPDL=0xF3, IDPDH=0xF4,} cocci_id/* drivers/char/tpm/tpm_infineon.c 127 */;
	enum infineon_tpm_status_bits{STAT_XFE=0x00, STAT_LPA=0x01, STAT_FOK=0x02, STAT_TOK=0x03, STAT_IRQA=0x06, STAT_RDA=0x07,} cocci_id/* drivers/char/tpm/tpm_infineon.c 117 */;
	enum infineon_tpm_command_bits{CMD_DIS=0x00, CMD_LP=0x01, CMD_RES=0x02, CMD_IRQC=0x06,} cocci_id/* drivers/char/tpm/tpm_infineon.c 110 */;
	enum infineon_tpm_register{WRFIFO=0x00, RDFIFO=0x01, STAT=0x02, CMD=0x03,} cocci_id/* drivers/char/tpm/tpm_infineon.c 103 */;
}
