cocci_test_suite() {
	s16 cocci_id/* drivers/media/tuners/tuner-xc2028.c 962 */;
	s32 *cocci_id/* drivers/media/tuners/tuner-xc2028.c 957 */;
	enum xc2028_state{XC2028_NO_FIRMWARE=0, XC2028_WAITING_FIRMWARE, XC2028_ACTIVE, XC2028_SLEEP, XC2028_NODEV,} cocci_id/* drivers/media/tuners/tuner-xc2028.c 93 */;
	struct firmware_properties {
		unsigned int type;
		v4l2_std_id id;
		v4l2_std_id std_req;
		__u16 int_freq;
		unsigned int scode_table;
		int scode_nr;
	} cocci_id/* drivers/media/tuners/tuner-xc2028.c 84 */;
	struct firmware_description {
		unsigned int type;
		v4l2_std_id id;
		__u16 int_freq;
		unsigned char *ptr;
		unsigned int size;
	} cocci_id/* drivers/media/tuners/tuner-xc2028.c 76 */;
	unsigned long long cocci_id/* drivers/media/tuners/tuner-xc2028.c 747 */;
	u16 cocci_id/* drivers/media/tuners/tuner-xc2028.c 723 */;
	struct firmware_properties cocci_id/* drivers/media/tuners/tuner-xc2028.c 721 */;
	v4l2_std_id cocci_id/* drivers/media/tuners/tuner-xc2028.c 718 */;
	__u16 cocci_id/* drivers/media/tuners/tuner-xc2028.c 718 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/tuner-xc2028.c 717 */;
	unsigned int cocci_id/* drivers/media/tuners/tuner-xc2028.c 717 */;
	int cocci_id/* drivers/media/tuners/tuner-xc2028.c 715 */(struct dvb_frontend *fe);
	char cocci_id/* drivers/media/tuners/tuner-xc2028.c 67 */[30];
	__le16 *cocci_id/* drivers/media/tuners/tuner-xc2028.c 575 */;
	unsigned char *cocci_id/* drivers/media/tuners/tuner-xc2028.c 547 */;
	v4l2_std_id *cocci_id/* drivers/media/tuners/tuner-xc2028.c 543 */;
	char cocci_id/* drivers/media/tuners/tuner-xc2028.c 54 */[8];
	__u32 cocci_id/* drivers/media/tuners/tuner-xc2028.c 345 */;
	char cocci_id/* drivers/media/tuners/tuner-xc2028.c 308 */[33];
	const unsigned char *cocci_id/* drivers/media/tuners/tuner-xc2028.c 305 */;
	const struct firmware *cocci_id/* drivers/media/tuners/tuner-xc2028.c 302 */;
	struct xc2028_data *cocci_id/* drivers/media/tuners/tuner-xc2028.c 260 */;
	int cocci_id/* drivers/media/tuners/tuner-xc2028.c 260 */;
	void cocci_id/* drivers/media/tuners/tuner-xc2028.c 176 */;
	unsigned char cocci_id/* drivers/media/tuners/tuner-xc2028.c 166 */;
	unsigned char cocci_id/* drivers/media/tuners/tuner-xc2028.c 160 */[2];
	u16 *cocci_id/* drivers/media/tuners/tuner-xc2028.c 158 */;
	struct xc2028_data cocci_id/* drivers/media/tuners/tuner-xc2028.c 1475 */;
	u8 cocci_id/* drivers/media/tuners/tuner-xc2028.c 147 */[];
	struct xc2028_config *cocci_id/* drivers/media/tuners/tuner-xc2028.c 1457 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/tuner-xc2028.c 1438 */;
	struct xc2028_ctrl *cocci_id/* drivers/media/tuners/tuner-xc2028.c 1386 */;
	void *cocci_id/* drivers/media/tuners/tuner-xc2028.c 1361 */;
	u32 *cocci_id/* drivers/media/tuners/tuner-xc2028.c 1344 */;
	u32 cocci_id/* drivers/media/tuners/tuner-xc2028.c 1191 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/tuner-xc2028.c 1190 */;
	struct analog_parameters *cocci_id/* drivers/media/tuners/tuner-xc2028.c 1158 */;
	struct xc2028_data {
		struct list_head hybrid_tuner_instance_list;
		struct tuner_i2c_props i2c_props;
		__u32 frequency;
		enum xc2028_state state;
		const char *fname;
		struct firmware_description *firm;
		int firm_size;
		__u16 firm_version;
		__u16 hwmodel;
		__u16 hwvers;
		struct xc2028_ctrl ctrl;
		struct firmware_properties cur_fw;
		struct mutex lock;
	} cocci_id/* drivers/media/tuners/tuner-xc2028.c 101 */;
}
