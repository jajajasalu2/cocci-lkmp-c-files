cocci_test_suite() {
	unsigned long long cocci_id/* drivers/media/tuners/xc4000.c 953 */;
	u8 cocci_id/* drivers/media/tuners/xc4000.c 931 */;
	u16 cocci_id/* drivers/media/tuners/xc4000.c 929 */;
	struct firmware_properties cocci_id/* drivers/media/tuners/xc4000.c 927 */;
	struct xc4000_priv *cocci_id/* drivers/media/tuners/xc4000.c 926 */;
	v4l2_std_id cocci_id/* drivers/media/tuners/xc4000.c 924 */;
	__u16 cocci_id/* drivers/media/tuners/xc4000.c 924 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/xc4000.c 923 */;
	unsigned int cocci_id/* drivers/media/tuners/xc4000.c 923 */;
	u8 cocci_id/* drivers/media/tuners/xc4000.c 865 */[5];
	u8 cocci_id/* drivers/media/tuners/xc4000.c 864 */[13];
	__u32 cocci_id/* drivers/media/tuners/xc4000.c 778 */;
	struct xc4000_priv {
		struct tuner_i2c_props i2c_props;
		struct list_head hybrid_tuner_instance_list;
		struct firmware_description *firm;
		int firm_size;
		u32 if_khz;
		u32 freq_hz,freq_offset;
		u32 bandwidth;
		u8 video_standard;
		u8 rf_mode;
		u8 default_pm;
		u8 dvb_amplitude;
		u8 set_smoothedcvbs;
		u8 ignore_i2c_write_errors;
		__u16 firm_version;
		struct firmware_properties cur_fw;
		__u16 hwmodel;
		__u16 hwvers;
		struct mutex lock;
	} cocci_id/* drivers/media/tuners/xc4000.c 73 */;
	const char *cocci_id/* drivers/media/tuners/xc4000.c 713 */;
	char cocci_id/* drivers/media/tuners/xc4000.c 712 */[33];
	const unsigned char *cocci_id/* drivers/media/tuners/xc4000.c 709 */;
	const struct firmware *cocci_id/* drivers/media/tuners/xc4000.c 708 */;
	unsigned char *cocci_id/* drivers/media/tuners/xc4000.c 687 */;
	v4l2_std_id *cocci_id/* drivers/media/tuners/xc4000.c 683 */;
	struct firmware_properties {
		unsigned int type;
		v4l2_std_id id;
		v4l2_std_id std_req;
		__u16 int_freq;
		unsigned int scode_table;
		int scode_nr;
	} cocci_id/* drivers/media/tuners/xc4000.c 64 */;
	struct firmware_description {
		unsigned int type;
		v4l2_std_id id;
		__u16 int_freq;
		unsigned char *ptr;
		unsigned int size;
	} cocci_id/* drivers/media/tuners/xc4000.c 56 */;
	void cocci_id/* drivers/media/tuners/xc4000.c 552 */;
	struct i2c_msg cocci_id/* drivers/media/tuners/xc4000.c 535 */[2];
	u8 cocci_id/* drivers/media/tuners/xc4000.c 533 */[2];
	char cocci_id/* drivers/media/tuners/xc4000.c 45 */[30];
	u8 *cocci_id/* drivers/media/tuners/xc4000.c 432 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/xc4000.c 384 */;
	int cocci_id/* drivers/media/tuners/xc4000.c 35 */;
	u8 cocci_id/* drivers/media/tuners/xc4000.c 302 */[XC_MAX_I2C_WRITE_LENGTH];
	const u8 *cocci_id/* drivers/media/tuners/xc4000.c 296 */;
	u8 cocci_id/* drivers/media/tuners/xc4000.c 284 */[4];
	struct i2c_msg cocci_id/* drivers/media/tuners/xc4000.c 243 */;
	void cocci_id/* drivers/media/tuners/xc4000.c 239 */(struct xc4000_priv *priv);
	int cocci_id/* drivers/media/tuners/xc4000.c 238 */(struct dvb_frontend *fe);
	int cocci_id/* drivers/media/tuners/xc4000.c 237 */(struct xc4000_priv *priv,
							    u16 reg, u16 *val);
	struct XC_TV_STANDARD cocci_id/* drivers/media/tuners/xc4000.c 210 */[MAX_TV_STANDARD];
	struct XC_TV_STANDARD {
		const char *Name;
		u16 audio_mode;
		u16 video_mode;
		u16 int_freq;
	} cocci_id/* drivers/media/tuners/xc4000.c 177 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/tuners/xc4000.c 1729 */;
	struct xc4000_priv cocci_id/* drivers/media/tuners/xc4000.c 1660 */;
	struct xc4000_config *cocci_id/* drivers/media/tuners/xc4000.c 1648 */;
	struct i2c_adapter *cocci_id/* drivers/media/tuners/xc4000.c 1647 */;
	u32 *cocci_id/* drivers/media/tuners/xc4000.c 1542 */;
	u16 *cocci_id/* drivers/media/tuners/xc4000.c 1451 */;
	struct analog_parameters *cocci_id/* drivers/media/tuners/xc4000.c 1257 */;
	u32 cocci_id/* drivers/media/tuners/xc4000.c 1141 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/xc4000.c 1140 */;
}
