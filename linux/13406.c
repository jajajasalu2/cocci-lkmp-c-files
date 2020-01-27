cocci_test_suite() {
	u8 cocci_id/* drivers/media/tuners/xc5000.c 972 */;
	struct analog_parameters *cocci_id/* drivers/media/tuners/xc5000.c 949 */;
	void cocci_id/* drivers/media/tuners/xc5000.c 837 */;
	u32 cocci_id/* drivers/media/tuners/xc5000.c 730 */;
	const struct firmware *cocci_id/* drivers/media/tuners/xc5000.c 598 */;
	u8 *cocci_id/* drivers/media/tuners/xc5000.c 502 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/xc5000.c 445 */;
	struct xc5000_priv {
		struct tuner_i2c_props i2c_props;
		struct list_head hybrid_tuner_instance_list;
		u32 if_khz;
		u16 xtal_khz;
		u32 freq_hz,freq_offset;
		u32 bandwidth;
		u8 video_standard;
		unsigned int mode;
		u8 rf_mode;
		u8 radio_input;
		u16 output_amp;
		int chip_id;
		u16 pll_register_no;
		u8 init_status_supported;
		u8 fw_checksum_supported;
		struct dvb_frontend *fe;
		struct delayed_work timer_sleep;
		const struct firmware *firmware;
	} cocci_id/* drivers/media/tuners/xc5000.c 39 */;
	u8 cocci_id/* drivers/media/tuners/xc5000.c 355 */[XC_MAX_I2C_WRITE_LENGTH];
	unsigned int cocci_id/* drivers/media/tuners/xc5000.c 354 */;
	const u8 *cocci_id/* drivers/media/tuners/xc5000.c 349 */;
	u8 cocci_id/* drivers/media/tuners/xc5000.c 319 */[4];
	struct i2c_msg cocci_id/* drivers/media/tuners/xc5000.c 277 */[2];
	u8 cocci_id/* drivers/media/tuners/xc5000.c 275 */[2];
	u16 *cocci_id/* drivers/media/tuners/xc5000.c 273 */;
	struct i2c_msg cocci_id/* drivers/media/tuners/xc5000.c 246 */;
	int cocci_id/* drivers/media/tuners/xc5000.c 241 */(struct xc5000_priv *priv,
							    u16 reg, u16 *val);
	int cocci_id/* drivers/media/tuners/xc5000.c 240 */(struct dvb_frontend *fe);
	int cocci_id/* drivers/media/tuners/xc5000.c 239 */(struct dvb_frontend *fe,
							    int force);
	int cocci_id/* drivers/media/tuners/xc5000.c 23 */;
	const struct xc5000_fw_cfg *cocci_id/* drivers/media/tuners/xc5000.c 228 */;
	const struct xc5000_fw_cfg cocci_id/* drivers/media/tuners/xc5000.c 213 */;
	struct xc5000_fw_cfg {
		char *name;
		u16 size;
		u16 pll_reg;
		u8 init_status_supported;
		u8 fw_checksum_supported;
	} cocci_id/* drivers/media/tuners/xc5000.c 204 */;
	struct XC_TV_STANDARD cocci_id/* drivers/media/tuners/xc5000.c 176 */[MAX_TV_STANDARD];
	struct dvb_tuner_ops cocci_id/* drivers/media/tuners/xc5000.c 1454 */;
	struct XC_TV_STANDARD {
		char *name;
		u16 audio_mode;
		u16 video_mode;
	} cocci_id/* drivers/media/tuners/xc5000.c 144 */;
	struct xc5000_priv cocci_id/* drivers/media/tuners/xc5000.c 1378 */;
	u16 cocci_id/* drivers/media/tuners/xc5000.c 1370 */;
	struct xc5000_priv *cocci_id/* drivers/media/tuners/xc5000.c 1368 */;
	const struct xc5000_config *cocci_id/* drivers/media/tuners/xc5000.c 1366 */;
	struct i2c_adapter *cocci_id/* drivers/media/tuners/xc5000.c 1365 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/xc5000.c 1364 */;
	struct xc5000_config *cocci_id/* drivers/media/tuners/xc5000.c 1324 */;
	void *cocci_id/* drivers/media/tuners/xc5000.c 1321 */;
	struct work_struct *cocci_id/* drivers/media/tuners/xc5000.c 1216 */;
	u32 *cocci_id/* drivers/media/tuners/xc5000.c 1076 */;
}
