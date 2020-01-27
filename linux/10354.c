cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/i2c/tda9950.c 76 */[CEC_MAX_MSG_SIZE + 3];
	struct i2c_msg cocci_id/* drivers/gpu/drm/i2c/tda9950.c 75 */;
	struct tda9950_priv {
		struct i2c_client *client;
		struct device *hdmi;
		struct cec_adapter *adap;
		struct tda9950_glue *glue;
		u16 addresses;
		struct cec_msg rx_msg;
		struct cec_notifier *notify;
		bool open;
	} cocci_id/* drivers/gpu/drm/i2c/tda9950.c 62 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/i2c/tda9950.c 497 */;
	struct i2c_device_id cocci_id/* drivers/gpu/drm/i2c/tda9950.c 491 */[];
	unsigned long cocci_id/* drivers/gpu/drm/i2c/tda9950.c 384 */;
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 379 */;
	void *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 371 */;
	void cocci_id/* drivers/gpu/drm/i2c/tda9950.c 371 */;
	struct device *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 354 */;
	struct tda9950_glue *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 348 */;
	const struct cec_adap_ops cocci_id/* drivers/gpu/drm/i2c/tda9950.c 336 */;
	struct tda9950_priv *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 326 */;
	bool cocci_id/* drivers/gpu/drm/i2c/tda9950.c 324 */;
	struct cec_adapter *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 324 */;
	int cocci_id/* drivers/gpu/drm/i2c/tda9950.c 324 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 280 */;
	u8 cocci_id/* drivers/gpu/drm/i2c/tda9950.c 237 */[2];
	u16 cocci_id/* drivers/gpu/drm/i2c/tda9950.c 236 */;
	u8 cocci_id/* drivers/gpu/drm/i2c/tda9950.c 233 */;
	enum{REG_CSR=0x00, CSR_BUSY=BIT(7), CSR_INT=BIT(6), CSR_ERR=BIT(5), REG_CER=0x01, REG_CVR=0x02, REG_CCR=0x03, CCR_RESET=BIT(7), CCR_ON=BIT(6), REG_ACKH=0x04, REG_ACKL=0x05, REG_CCONR=0x06, CCONR_ENABLE_ERROR=BIT(4), CCONR_RETRY_MASK=7, REG_CDR0=0x07, CDR1_REQ=0x00, CDR1_CNF=0x01, CDR1_IND=0x81, CDR1_ERR=0x82, CDR1_IER=0x83, CDR2_CNF_SUCCESS=0x00, CDR2_CNF_OFF_STATE=0x80, CDR2_CNF_BAD_REQ=0x81, CDR2_CNF_CEC_ACCESS=0x82, CDR2_CNF_ARB_ERROR=0x83, CDR2_CNF_BAD_TIMING=0x84, CDR2_CNF_NACK_ADDR=0x85, CDR2_CNF_NACK_DATA=0x86,} cocci_id/* drivers/gpu/drm/i2c/tda9950.c 23 */;
	u8 cocci_id/* drivers/gpu/drm/i2c/tda9950.c 219 */[CEC_MAX_MSG_SIZE + 2];
	u32 cocci_id/* drivers/gpu/drm/i2c/tda9950.c 216 */;
	struct cec_msg *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 216 */;
	unsigned int cocci_id/* drivers/gpu/drm/i2c/tda9950.c 141 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/i2c/tda9950.c 138 */;
	struct i2c_msg cocci_id/* drivers/gpu/drm/i2c/tda9950.c 105 */[2];
	u8 *cocci_id/* drivers/gpu/drm/i2c/tda9950.c 103 */;
}
