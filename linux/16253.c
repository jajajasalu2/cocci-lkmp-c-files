cocci_test_suite() {
	struct rbsp cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 970 */;
	const struct device *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 968 */;
	void *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 968 */;
	ssize_t cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 968 */;
	size_t cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 968 */;
	enum v4l2_mpeg_video_h264_profile cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 93 */;
	struct nal_h264_ops *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 72 */;
	struct nal_h264_pps *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 679 */;
	struct rbsp {
		u8 *data;
		size_t size;
		unsigned int pos;
		unsigned int num_consecutive_zeros;
		struct nal_h264_ops *ops;
		int error;
	} cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 62 */;
	struct nal_h264_sps *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 594 */;
	struct nal_h264_vui_parameters *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 522 */;
	struct nal_h264_hrd_parameters *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 496 */;
	void cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 495 */;
	u8 *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 482 */;
	struct nal_h264_ops cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 388 */;
	struct nal_h264_ops {
		int (*rbsp_bit)(struct rbsp *rbsp, int *val);
		int (*rbsp_bits)(struct rbsp *rbsp, int n, unsigned int *val);
		int (*rbsp_uev)(struct rbsp *rbsp, unsigned int *val);
		int (*rbsp_sev)(struct rbsp *rbsp, int *val);
	} cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 38 */;
	struct rbsp *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 377 */;
	int *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 377 */;
	int cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 377 */;
	unsigned int *cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 365 */;
	enum nal_unit_type{SEQUENCE_PARAMETER_SET=7, PICTURE_PARAMETER_SET=8, FILLER_DATA=12,} cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 30 */;
	bool cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 220 */;
	unsigned int cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 179 */;
	int cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 159 */(struct rbsp *rbsp,
									   int n,
									   unsigned int value);
	int cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 158 */(struct rbsp *rbsp,
									   int n,
									   unsigned int *value);
	enum v4l2_mpeg_video_h264_level cocci_id/* drivers/staging/media/allegro-dvt/nal-h264.c 118 */;
}
