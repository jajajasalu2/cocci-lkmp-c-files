cocci_test_suite() {
	v4l2_std_id cocci_id/* drivers/media/v4l2-core/tuner-core.c 944 */;
	struct i2c_client *cocci_id/* drivers/media/v4l2-core/tuner-core.c 868 */;
	struct analog_demod_ops *cocci_id/* drivers/media/v4l2-core/tuner-core.c 844 */;
	enum v4l2_tuner_type cocci_id/* drivers/media/v4l2-core/tuner-core.c 819 */;
	struct tuner *cocci_id/* drivers/media/v4l2-core/tuner-core.c 819 */;
	int cocci_id/* drivers/media/v4l2-core/tuner-core.c 819 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 80 */;
	char cocci_id/* drivers/media/v4l2-core/tuner-core.c 66 */[];
	unsigned char cocci_id/* drivers/media/v4l2-core/tuner-core.c 651 */[16];
	unsigned int cocci_id/* drivers/media/v4l2-core/tuner-core.c 63 */[2];
	const struct i2c_device_id *cocci_id/* drivers/media/v4l2-core/tuner-core.c 629 */;
	struct tuner **cocci_id/* drivers/media/v4l2-core/tuner-core.c 587 */;
	struct i2c_adapter *cocci_id/* drivers/media/v4l2-core/tuner-core.c 586 */;
	const struct v4l2_priv_tun_config *cocci_id/* drivers/media/v4l2-core/tuner-core.c 555 */;
	struct tuner_setup *cocci_id/* drivers/media/v4l2-core/tuner-core.c 521 */;
	unsigned int cocci_id/* drivers/media/v4l2-core/tuner-core.c 52 */;
	struct analog_demod_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 462 */;
	struct xc4000_config cocci_id/* drivers/media/v4l2-core/tuner-core.c 432 */;
	struct tda18271_config cocci_id/* drivers/media/v4l2-core/tuner-core.c 420 */;
	struct xc5000_config cocci_id/* drivers/media/v4l2-core/tuner-core.c 391 */;
	struct xc2028_config cocci_id/* drivers/media/v4l2-core/tuner-core.c 375 */;
	unsigned char cocci_id/* drivers/media/v4l2-core/tuner-core.c 304 */[4];
	int (*cocci_id/* drivers/media/v4l2-core/tuner-core.c 299 */)(void *dev,
								      int component,
								      int cmd,
								      int arg);
	const struct analog_demod_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 272 */;
	void cocci_id/* drivers/media/v4l2-core/tuner-core.c 270 */(struct dvb_frontend *fe);
	struct dvb_tuner_ops *cocci_id/* drivers/media/v4l2-core/tuner-core.c 259 */;
	struct dvb_frontend *cocci_id/* drivers/media/v4l2-core/tuner-core.c 257 */;
	void *cocci_id/* drivers/media/v4l2-core/tuner-core.c 257 */;
	struct analog_parameters *cocci_id/* drivers/media/v4l2-core/tuner-core.c 237 */;
	void cocci_id/* drivers/media/v4l2-core/tuner-core.c 236 */;
	struct tuner cocci_id/* drivers/media/v4l2-core/tuner-core.c 229 */;
	struct v4l2_subdev *cocci_id/* drivers/media/v4l2-core/tuner-core.c 227 */;
	typeof(&FUNCTION) cocci_id/* drivers/media/v4l2-core/tuner-core.c 190 */;
	void cocci_id/* drivers/media/v4l2-core/tuner-core.c 180 */(struct i2c_client *c,
								    unsigned int freq);
	enum if_vid_dec_pad_index{IF_VID_DEC_PAD_IF_INPUT, IF_VID_DEC_PAD_OUT, IF_VID_DEC_PAD_NUM_PADS,} cocci_id/* drivers/media/v4l2-core/tuner-core.c 142 */;
	struct i2c_driver cocci_id/* drivers/media/v4l2-core/tuner-core.c 1412 */;
	const struct i2c_device_id cocci_id/* drivers/media/v4l2-core/tuner-core.c 1406 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 1402 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 1388 */;
	const struct v4l2_subdev_tuner_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 1377 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/v4l2-core/tuner-core.c 1373 */;
	unsigned cocci_id/* drivers/media/v4l2-core/tuner-core.c 1355 */;
	struct device *cocci_id/* drivers/media/v4l2-core/tuner-core.c 1338 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/v4l2-core/tuner-core.c 1287 */;
	u16 cocci_id/* drivers/media/v4l2-core/tuner-core.c 1245 */;
	struct v4l2_tuner *cocci_id/* drivers/media/v4l2-core/tuner-core.c 1234 */;
	enum tuner_pad_index{TUNER_PAD_RF_INPUT, TUNER_PAD_OUTPUT, TUNER_PAD_AUD_OUT, TUNER_NUM_PADS,} cocci_id/* drivers/media/v4l2-core/tuner-core.c 123 */;
	u32 cocci_id/* drivers/media/v4l2-core/tuner-core.c 1211 */;
	struct v4l2_frequency *cocci_id/* drivers/media/v4l2-core/tuner-core.c 1203 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/v4l2-core/tuner-core.c 1184 */;
	const char *cocci_id/* drivers/media/v4l2-core/tuner-core.c 1093 */;
	unsigned long cocci_id/* drivers/media/v4l2-core/tuner-core.c 1090 */;
	struct analog_parameters cocci_id/* drivers/media/v4l2-core/tuner-core.c 1037 */;
	struct tuner {
		struct dvb_frontend fe;
		struct i2c_client *i2c;
		struct v4l2_subdev sd;
		struct list_head list;
		v4l2_std_id std;
		unsigned int tv_freq;
		unsigned int radio_freq;
		unsigned int audmode;
		enum v4l2_tuner_type mode;
		unsigned int mode_mask;
		bool standby;
		unsigned int type;
		void *config;
		const char *name;
#if defined(CONFIG_MEDIA_CONTROLLER)
		struct media_pad pad[TUNER_NUM_PADS];
#endif
	} cocci_id/*  1 */;
}
