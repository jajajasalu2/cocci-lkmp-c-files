cocci_test_suite() {
	struct pcm20 cocci_id/* drivers/media/radio/radio-miropcm20.c 80 */;
	struct pcm20 {
		struct v4l2_device v4l2_dev;
		struct video_device vdev;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *rds_pty;
		struct v4l2_ctrl *rds_ps_name;
		struct v4l2_ctrl *rds_radio_test;
		struct v4l2_ctrl *rds_ta;
		struct v4l2_ctrl *rds_tp;
		struct v4l2_ctrl *rds_ms;
		struct task_struct *kthread;
		unsigned long freq;
		u32 audmode;
		struct snd_miro_aci *aci;
		struct mutex lock;
	} cocci_id/* drivers/media/radio/radio-miropcm20.c 62 */;
	struct pcm20 *cocci_id/* drivers/media/radio/radio-miropcm20.c 506 */;
	void __exit cocci_id/* drivers/media/radio/radio-miropcm20.c 504 */;
	void cocci_id/* drivers/media/radio/radio-miropcm20.c 504 */;
	int cocci_id/* drivers/media/radio/radio-miropcm20.c 437 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/radio/radio-miropcm20.c 436 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/radio-miropcm20.c 435 */;
	int __init cocci_id/* drivers/media/radio/radio-miropcm20.c 432 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/radio/radio-miropcm20.c 428 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/radio-miropcm20.c 417 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/radio-miropcm20.c 409 */;
	struct file *cocci_id/* drivers/media/radio/radio-miropcm20.c 380 */;
	u8 cocci_id/* drivers/media/radio/radio-miropcm20.c 317 */;
	char cocci_id/* drivers/media/radio/radio-miropcm20.c 316 */[66];
	unsigned cocci_id/* drivers/media/radio/radio-miropcm20.c 313 */;
	const unsigned cocci_id/* drivers/media/radio/radio-miropcm20.c 311 */;
	void *cocci_id/* drivers/media/radio/radio-miropcm20.c 308 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/radio/radio-miropcm20.c 296 */;
	u32 cocci_id/* drivers/media/radio/radio-miropcm20.c 291 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-miropcm20.c 284 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-miropcm20.c 270 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-miropcm20.c 254 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-miropcm20.c 225 */;
	bool cocci_id/* drivers/media/radio/radio-miropcm20.c 210 */;
	char *cocci_id/* drivers/media/radio/radio-miropcm20.c 210 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/radio-miropcm20.c 200 */;
	struct snd_miro_aci *cocci_id/* drivers/media/radio/radio-miropcm20.c 186 */;
	unsigned char cocci_id/* drivers/media/radio/radio-miropcm20.c 184 */;
	unsigned long cocci_id/* drivers/media/radio/radio-miropcm20.c 182 */;
	u8 cocci_id/* drivers/media/radio/radio-miropcm20.c 152 */[];
	u8 cocci_id/* drivers/media/radio/radio-miropcm20.c 116 */[8];
}
