cocci_test_suite() {
	u8 cocci_id/* drivers/media/i2c/sony-btf-mpx.c 49 */[5];
	struct sony_btf_mpx cocci_id/* drivers/media/i2c/sony-btf-mpx.c 44 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/sony-btf-mpx.c 377 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/sony-btf-mpx.c 371 */[];
	struct sony_btf_mpx {
		struct v4l2_subdev sd;
		int mpxmode;
		u32 audmode;
	} cocci_id/* drivers/media/i2c/sony-btf-mpx.c 36 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/sony-btf-mpx.c 335 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/sony-btf-mpx.c 327 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/sony-btf-mpx.c 323 */;
	const struct v4l2_subdev_tuner_ops cocci_id/* drivers/media/i2c/sony-btf-mpx.c 318 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/i2c/sony-btf-mpx.c 302 */;
	struct v4l2_tuner *cocci_id/* drivers/media/i2c/sony-btf-mpx.c 288 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/sony-btf-mpx.c 288 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/sony-btf-mpx.c 267 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/sony-btf-mpx.c 229 */[2];
	int cocci_id/* drivers/media/i2c/sony-btf-mpx.c 19 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/sony-btf-mpx.c 162 */;
	u8 cocci_id/* drivers/media/i2c/sony-btf-mpx.c 161 */[3];
	u16 cocci_id/* drivers/media/i2c/sony-btf-mpx.c 160 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/sony-btf-mpx.c 159 */;
	struct sony_btf_mpx *cocci_id/* drivers/media/i2c/sony-btf-mpx.c 157 */;
	const struct {
		enum{AUD_MONO, AUD_A2, AUD_NICAM, AUD_NICAM_L,} audio_mode;
		u16 modus;
		u16 source;
		u16 acb;
		u16 fm_prescale;
		u16 nicam_prescale;
		u16 scart_prescale;
		u16 system;
		u16 volume;
	} cocci_id/* drivers/media/i2c/sony-btf-mpx.c 116 */[];
}
