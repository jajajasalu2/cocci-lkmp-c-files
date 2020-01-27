cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 95 */;
	u8 *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 92 */;
	size_t cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 92 */;
	struct i2c_driver cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 720 */;
	struct tpm_inf_dev cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 71 */;
	const struct i2c_device_id *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 685 */;
	struct i2c_client *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 684 */;
	const struct of_device_id cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 673 */[];
	const struct i2c_device_id cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 663 */[];
	u32 cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 614 */;
	struct device *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 612 */;
	const struct tpm_class_ops cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 601 */;
	struct tpm_inf_dev {
		struct i2c_client *client;
		int locality;
		u8 buf[TPM_I2C_INFINEON_BUFSIZE + 1];
		struct tpm_chip *chip;
		enum i2c_chip_type chip_type;
		unsigned int adapterlimit;
	} cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 59 */;
	enum i2c_chip_type{SLB9635, SLB9645, UNKNOWN,} cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 53 */;
	__be32 *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 486 */;
	int *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 414 */;
	u8 cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 393 */[3];
	unsigned long cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 391 */;
	ssize_t cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 389 */;
	void cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 331 */;
	u8 cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 314 */;
	bool cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 312 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 312 */;
	int cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 312 */;
	enum tis_defaults{TIS_SHORT_TIMEOUT=750, TIS_LONG_TIMEOUT=2000,} cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 302 */;
	enum tis_status{TPM_STS_VALID=0x80, TPM_STS_COMMAND_READY=0x40, TPM_STS_GO=0x20, TPM_STS_DATA_AVAIL=0x10, TPM_STS_DATA_EXPECT=0x08,} cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 294 */;
	enum tis_access{TPM_ACCESS_VALID=0x80, TPM_ACCESS_ACTIVE_LOCALITY=0x20, TPM_ACCESS_REQUEST_PENDING=0x04, TPM_ACCESS_REQUEST_USE=0x02,} cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 287 */;
	unsigned int cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 110 */;
	struct i2c_msg cocci_id/* drivers/char/tpm/tpm_i2c_infineon.c 106 */[];
}
