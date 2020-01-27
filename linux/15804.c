cocci_test_suite() {
	const struct bm2835_mmal_v4l2_ctrl cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 924 */[V4L2_CTRL_COUNT];
	const struct v4l2_ctrl_ops cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 920 */;
	struct v4l2_to_mmal_effects_setting {
		u32 v4l2_effect;
		u32 mmal_effect;
		s32 col_fx_enable;
		s32 col_fx_fixed_cbcr;
		u32 u;
		u32 v;
		u32 num_effect_params;
		u32 effect_params[MMAL_MAX_IMAGEFX_PARAMETERS];
	} cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 91 */;
	struct bm2835_mmal_dev cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 901 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 898 */;
	enum mmal_parameter_exposuremeteringmode cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 842 */;
	const struct v4l2_mmal_scene_config *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 839 */;
	struct bm2835_mmal_v4l2_ctrl {
		u32 id;
		enum bm2835_mmal_ctrl_type type;
		s64 min;
		s64 max;
		s64 def;
		u64 step;
		const s64 *imenu;
		u32 mmal_id;
		bm2835_mmal_v4l2_ctrl_cb *setter;
		bool ignore_errors;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 75 */;
	int cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 70 */(struct bm2835_mmal_dev *dev,
										     struct v4l2_ctrl *ctrl,
										     const struct bm2835_mmal_v4l2_ctrl *mmal_ctrl);
	struct mmal_parameter_video_profile cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 683 */;
	struct bm2835_mmal_v4l2_ctrl cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 68 */;
	enum bm2835_mmal_ctrl_type{MMAL_CONTROL_TYPE_STD, MMAL_CONTROL_TYPE_STD_MENU, MMAL_CONTROL_TYPE_INT_MENU, MMAL_CONTROL_TYPE_CLUSTER,} cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 61 */;
	const u32 cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 57 */[];
	struct mmal_parameter_imagefx_parameters cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 517 */;
	struct mmal_parameter_awbgains cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 492 */;
	struct vchiq_mmal_port *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 491 */;
	u32 cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 435 */;
	const s64 cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 38 */[];
	enum mmal_parameter_exposuremode cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 312 */;
	struct vchiq_mmal_component *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 273 */;
	s32 cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 226 */;
	struct mmal_parameter_rational cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 164 */;
	const struct v4l2_mmal_scene_config cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 144 */[];
	struct v4l2_mmal_scene_config {
		enum v4l2_scene_mode v4l2_scene;
		enum mmal_parameter_exposuremode exposure_mode;
		enum mmal_parameter_exposuremeteringmode metering_mode;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 138 */;
	void *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1296 */;
	u64 cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1253 */;
	const struct bm2835_mmal_v4l2_ctrl *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1234 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1231 */;
	struct bm2835_mmal_dev *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1230 */;
	int cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1230 */;
	struct mmal_parameter_fps_range cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 1184 */;
	const struct v4l2_to_mmal_effects_setting cocci_id/* drivers/staging/vc04_services/bcm2835-camera/controls.c 102 */[];
}
