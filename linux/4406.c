cocci_test_suite() {
	struct tpm_nsc_priv {
		unsigned long base;
	} cocci_id/* drivers/char/tpm/tpm_nsc.c 63 */;
	enum tpm_nsc_cmd_mode{NSC_COMMAND_NORMAL=0x01, NSC_COMMAND_EOC=0x03, NSC_COMMAND_CANCEL=0x22,} cocci_id/* drivers/char/tpm/tpm_nsc.c 57 */;
	enum tpm_nsc_status{NSC_STATUS_OBF=0x01, NSC_STATUS_IBF=0x02, NSC_STATUS_F0=0x04, NSC_STATUS_A2=0x08, NSC_STATUS_RDY=0x10, NSC_STATUS_IBR=0x20,} cocci_id/* drivers/char/tpm/tpm_nsc.c 47 */;
	void __exit cocci_id/* drivers/char/tpm/tpm_nsc.c 400 */;
	void cocci_id/* drivers/char/tpm/tpm_nsc.c 400 */;
	enum tpm_nsc_status_loc{NSC_STATUS=0x01, NSC_COMMAND=0x01, NSC_DATA=0x00,} cocci_id/* drivers/char/tpm/tpm_nsc.c 40 */;
	enum tpm_nsc_index{NSC_LDN_INDEX=0x07, NSC_SID_INDEX=0x20, NSC_LDC_INDEX=0x30, NSC_DIO_INDEX=0x60, NSC_CIO_INDEX=0x62, NSC_IRQ_INDEX=0x70, NSC_ITS_INDEX=0x71,} cocci_id/* drivers/char/tpm/tpm_nsc.c 30 */;
	struct tpm_nsc_priv *cocci_id/* drivers/char/tpm/tpm_nsc.c 295 */;
	unsigned long cocci_id/* drivers/char/tpm/tpm_nsc.c 294 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/tpm_nsc.c 293 */;
	int cocci_id/* drivers/char/tpm/tpm_nsc.c 290 */;
	int __init cocci_id/* drivers/char/tpm/tpm_nsc.c 288 */;
	struct platform_driver cocci_id/* drivers/char/tpm/tpm_nsc.c 269 */;
	struct device *cocci_id/* drivers/char/tpm/tpm_nsc.c 258 */;
	struct platform_device *cocci_id/* drivers/char/tpm/tpm_nsc.c 256 */;
	const struct tpm_class_ops cocci_id/* drivers/char/tpm/tpm_nsc.c 246 */;
	bool cocci_id/* drivers/char/tpm/tpm_nsc.c 241 */;
	enum tpm_nsc_addr{TPM_NSC_IRQ=0x07, TPM_NSC_BASE0_HI=0x60, TPM_NSC_BASE0_LO=0x61, TPM_NSC_BASE1_HI=0x62, TPM_NSC_BASE1_LO=0x63,} cocci_id/* drivers/char/tpm/tpm_nsc.c 22 */;
	__be32 *cocci_id/* drivers/char/tpm/tpm_nsc.c 129 */;
	u32 cocci_id/* drivers/char/tpm/tpm_nsc.c 128 */;
	u8 cocci_id/* drivers/char/tpm/tpm_nsc.c 127 */;
	u8 *cocci_id/* drivers/char/tpm/tpm_nsc.c 123 */;
	size_t cocci_id/* drivers/char/tpm/tpm_nsc.c 123 */;
}
