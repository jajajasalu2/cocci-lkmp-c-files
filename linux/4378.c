cocci_test_suite() {
	u32 cocci_id/* drivers/char/tpm/tpm-sysfs.c 98 */;
	u8 cocci_id/* drivers/char/tpm/tpm-sysfs.c 97 */[TPM_DIGEST_SIZE];
	char cocci_id/* drivers/char/tpm/tpm-sysfs.c 40 */[20];
	int cocci_id/* drivers/char/tpm/tpm-sysfs.c 37 */;
	struct tpm_readpubek_out *cocci_id/* drivers/char/tpm/tpm-sysfs.c 36 */;
	struct tpm_buf cocci_id/* drivers/char/tpm/tpm-sysfs.c 35 */;
	void cocci_id/* drivers/char/tpm/tpm-sysfs.c 331 */;
	const struct attribute_group cocci_id/* drivers/char/tpm/tpm-sysfs.c 327 */;
	struct attribute *cocci_id/* drivers/char/tpm/tpm-sysfs.c 313 */[];
	const char *cocci_id/* drivers/char/tpm/tpm-sysfs.c 268 */;
	size_t cocci_id/* drivers/char/tpm/tpm-sysfs.c 268 */;
	struct tpm1_version *cocci_id/* drivers/char/tpm/tpm-sysfs.c 220 */;
	struct tpm_readpubek_out {
		u8 algorithm[4];
		u8 encscheme[2];
		u8 sigscheme[2];
		__be32 paramsize;
		u8 parameters[12];
		__be32 keysize;
		u8 modulus[256];
		u8 checksum[20];
	}__packed cocci_id/* drivers/char/tpm/tpm-sysfs.c 18 */;
	cap_t cocci_id/* drivers/char/tpm/tpm-sysfs.c 155 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm-sysfs.c 153 */;
	char *cocci_id/* drivers/char/tpm/tpm-sysfs.c 151 */;
	struct device_attribute *cocci_id/* drivers/char/tpm/tpm-sysfs.c 150 */;
	struct device *cocci_id/* drivers/char/tpm/tpm-sysfs.c 150 */;
	ssize_t cocci_id/* drivers/char/tpm/tpm-sysfs.c 150 */;
}
