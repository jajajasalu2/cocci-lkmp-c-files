cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/tuners/fc0011.c 86 */[2];
	u8 cocci_id/* drivers/media/tuners/fc0011.c 83 */;
	u8 *cocci_id/* drivers/media/tuners/fc0011.c 83 */;
	struct i2c_msg cocci_id/* drivers/media/tuners/fc0011.c 70 */;
	u8 cocci_id/* drivers/media/tuners/fc0011.c 69 */[2];
	struct fc0011_priv {
		struct i2c_adapter *i2c;
		u8 addr;
		u32 frequency;
		u32 bandwidth;
	} cocci_id/* drivers/media/tuners/fc0011.c 58 */;
	enum FC11_REG_VCOCAL_bits{FC11_VCOCAL_RUN=0, FC11_VCOCAL_VALUEMASK=0x3F, FC11_VCOCAL_OK=0x40, FC11_VCOCAL_RESET=0x80,} cocci_id/* drivers/media/tuners/fc0011.c 50 */;
	struct fc0011_priv cocci_id/* drivers/media/tuners/fc0011.c 488 */;
	struct fc0011_priv *cocci_id/* drivers/media/tuners/fc0011.c 486 */;
	const struct fc0011_config *cocci_id/* drivers/media/tuners/fc0011.c 484 */;
	struct i2c_adapter *cocci_id/* drivers/media/tuners/fc0011.c 483 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/fc0011.c 482 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/fc0011.c 464 */;
	enum FC11_REG_RCCAL_bits{FC11_RCCAL_FORCE=0x10,} cocci_id/* drivers/media/tuners/fc0011.c 46 */;
	u32 *cocci_id/* drivers/media/tuners/fc0011.c 455 */;
	int cocci_id/* drivers/media/tuners/fc0011.c 455 */;
	enum FC11_REG_VCOSEL_bits{FC11_VCOSEL_2=0x08, FC11_VCOSEL_1=0x10, FC11_VCOSEL_CLKOUT=0x20, FC11_VCOSEL_BW7M=0x40, FC11_VCOSEL_BW6M=0x80,} cocci_id/* drivers/media/tuners/fc0011.c 38 */;
	u8 cocci_id/* drivers/media/tuners/fc0011.c 173 */[FC11_NR_REGS];
	u32 cocci_id/* drivers/media/tuners/fc0011.c 169 */;
	unsigned int cocci_id/* drivers/media/tuners/fc0011.c 168 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/fc0011.c 165 */;
	enum{FC11_REG_0, FC11_REG_FA, FC11_REG_FP, FC11_REG_XINHI, FC11_REG_XINLO, FC11_REG_VCO, FC11_REG_VCOSEL, FC11_REG_7, FC11_REG_8, FC11_REG_9, FC11_REG_10, FC11_REG_11, FC11_REG_12, FC11_REG_RCCAL, FC11_REG_VCOCAL, FC11_REG_15, FC11_REG_16, FC11_REG_17, FC11_NR_REGS,} cocci_id/* drivers/media/tuners/fc0011.c 15 */;
	void cocci_id/* drivers/media/tuners/fc0011.c 102 */;
}
