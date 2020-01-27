cocci_test_suite() {
	struct device *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 626 */;
	enum tis_defaults{TIS_SHORT_TIMEOUT=750, TIS_LONG_TIMEOUT=2000,} cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 58 */;
	struct st33zp24_dev cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 522 */;
	const struct st33zp24_phy_ops *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 510 */;
	void *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 510 */;
	const struct tpm_class_ops cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 492 */;
	enum st33zp24_int_flags{TPM_GLOBAL_INT_ENABLE=0x80, TPM_INTF_CMD_READY_INT=0x080, TPM_INTF_FIFO_AVALAIBLE_INT=0x040, TPM_INTF_WAKE_UP_READY_INT=0x020, TPM_INTF_LOCALITY_CHANGE_INT=0x004, TPM_INTF_STS_VALID_INT=0x002, TPM_INTF_DATA_AVAIL_INT=0x001,} cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 48 */;
	__be32 *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 462 */;
	u32 cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 446 */;
	unsigned char *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 442 */;
	enum st33zp24_status{TPM_STS_VALID=0x80, TPM_STS_COMMAND_READY=0x40, TPM_STS_GO=0x20, TPM_STS_DATA_AVAIL=0x10, TPM_STS_DATA_EXPECT=0x08,} cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 40 */;
	irqreturn_t cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 334 */;
	enum st33zp24_access{TPM_ACCESS_VALID=0x80, TPM_ACCESS_ACTIVE_LOCALITY=0x20, TPM_ACCESS_REQUEST_PENDING=0x04, TPM_ACCESS_REQUEST_USE=0x02,} cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 33 */;
	u8 *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 304 */;
	size_t cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 304 */;
	wait_queue_head_t *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 240 */;
	bool *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 216 */;
	unsigned long cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 180 */;
	int cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 177 */;
	void cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 162 */;
	long cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 134 */;
	u8 cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 113 */;
	struct st33zp24_dev *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 112 */;
	bool cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 110 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/st33zp24/st33zp24.c 110 */;
}
