cocci_test_suite() {
	struct v4l2_audio cocci_id/* drivers/media/pci/saa7146/mxb.c 89 */[MXB_AUDIOS];
	void __exit cocci_id/* drivers/media/pci/saa7146/mxb.c 857 */;
	void cocci_id/* drivers/media/pci/saa7146/mxb.c 857 */;
	int __init cocci_id/* drivers/media/pci/saa7146/mxb.c 847 */;
	struct mxb_routing {
		u32 input;
		u32 output;
	} cocci_id/* drivers/media/pci/saa7146/mxb.c 82 */;
	unsigned long cocci_id/* drivers/media/pci/saa7146/mxb.c 817 */;
	const struct pci_device_id cocci_id/* drivers/media/pci/saa7146/mxb.c 811 */[];
	struct saa7146_pci_extension_data cocci_id/* drivers/media/pci/saa7146/mxb.c 806 */;
	int cocci_id/* drivers/media/pci/saa7146/mxb.c 79 */[MXB_INPUTS];
	struct saa7146_standard cocci_id/* drivers/media/pci/saa7146/mxb.c 782 */[];
	struct saa7146_standard *cocci_id/* drivers/media/pci/saa7146/mxb.c 752 */;
	struct mxb *cocci_id/* drivers/media/pci/saa7146/mxb.c 684 */;
	struct saa7146_pci_extension_data *cocci_id/* drivers/media/pci/saa7146/mxb.c 682 */;
	struct saa7146_dev *cocci_id/* drivers/media/pci/saa7146/mxb.c 682 */;
	struct saa7146_ext_vv cocci_id/* drivers/media/pci/saa7146/mxb.c 679 */;
	struct {
		int hps_source;
		int hps_sync;
	} cocci_id/* drivers/media/pci/saa7146/mxb.c 67 */[MXB_INPUTS];
	const struct v4l2_dbg_register *cocci_id/* drivers/media/pci/saa7146/mxb.c 668 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/pci/saa7146/mxb.c 657 */;
	const struct v4l2_audio *cocci_id/* drivers/media/pci/saa7146/mxb.c 638 */;
	struct saa7146_fh *cocci_id/* drivers/media/pci/saa7146/mxb.c 630 */;
	struct v4l2_audio *cocci_id/* drivers/media/pci/saa7146/mxb.c 620 */;
	struct saa7146_vv *cocci_id/* drivers/media/pci/saa7146/mxb.c 591 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/pci/saa7146/mxb.c 587 */;
	struct v4l2_frequency *cocci_id/* drivers/media/pci/saa7146/mxb.c 574 */;
	v4l2_std_id *cocci_id/* drivers/media/pci/saa7146/mxb.c 567 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/pci/saa7146/mxb.c 552 */;
	struct v4l2_input cocci_id/* drivers/media/pci/saa7146/mxb.c 54 */[MXB_INPUTS];
	struct v4l2_tuner *cocci_id/* drivers/media/pci/saa7146/mxb.c 530 */;
	enum{TUNER, AUX1, AUX3, AUX3_YC,} cocci_id/* drivers/media/pci/saa7146/mxb.c 52 */;
	int cocci_id/* drivers/media/pci/saa7146/mxb.c 47 */;
	unsigned int cocci_id/* drivers/media/pci/saa7146/mxb.c 468 */;
	unsigned int *cocci_id/* drivers/media/pci/saa7146/mxb.c 458 */;
	struct v4l2_input cocci_id/* drivers/media/pci/saa7146/mxb.c 454 */;
	struct v4l2_input *cocci_id/* drivers/media/pci/saa7146/mxb.c 449 */;
	struct file *cocci_id/* drivers/media/pci/saa7146/mxb.c 449 */;
	void *cocci_id/* drivers/media/pci/saa7146/mxb.c 449 */;
	v4l2_std_id cocci_id/* drivers/media/pci/saa7146/mxb.c 341 */;
	struct tuner_setup cocci_id/* drivers/media/pci/saa7146/mxb.c 340 */;
	struct i2c_msg cocci_id/* drivers/media/pci/saa7146/mxb.c 339 */;
	struct {
		int length;
		char data[9];
	} cocci_id/* drivers/media/pci/saa7146/mxb.c 278 */[];
	struct mxb cocci_id/* drivers/media/pci/saa7146/mxb.c 228 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/pci/saa7146/mxb.c 221 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/pci/saa7146/mxb.c 215 */;
	struct saa7146_dev cocci_id/* drivers/media/pci/saa7146/mxb.c 199 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/pci/saa7146/mxb.c 196 */;
	struct saa7146_extension cocci_id/* drivers/media/pci/saa7146/mxb.c 194 */;
	struct v4l2_tuner cocci_id/* drivers/media/pci/saa7146/mxb.c 175 */;
	struct mxb {
		struct video_device video_dev;
		struct video_device vbi_dev;
		struct i2c_adapter i2c_adapter;
		struct v4l2_subdev *saa7111a;
		struct v4l2_subdev *tda9840;
		struct v4l2_subdev *tea6415c;
		struct v4l2_subdev *tuner;
		struct v4l2_subdev *tea6420_1;
		struct v4l2_subdev *tea6420_2;
		int cur_mode;
		int cur_input;
		int cur_audinput;
		int cur_mute;
		struct v4l2_frequency cur_freq;
	} cocci_id/* drivers/media/pci/saa7146/mxb.c 141 */;
	struct mxb_routing cocci_id/* drivers/media/pci/saa7146/mxb.c 119 */[MXB_AUDIOS + 1][2];
}