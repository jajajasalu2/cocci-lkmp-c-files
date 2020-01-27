cocci_test_suite() {
	const u8 cocci_id/* drivers/media/i2c/adv7604.c 991 */[2];
	const struct v4l2_bt_timings *cocci_id/* drivers/media/i2c/adv7604.c 980 */;
	struct adv76xx_cfg_read_infoframe {
		const char *desc;
		u8 present_mask;
		u8 head_addr;
		u8 payload_addr;
	} cocci_id/* drivers/media/i2c/adv7604.c 95 */;
	const struct adv76xx_video_standards *cocci_id/* drivers/media/i2c/adv7604.c 913 */;
	u16 cocci_id/* drivers/media/i2c/adv7604.c 906 */;
	u8 cocci_id/* drivers/media/i2c/adv7604.c 877 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/adv7604.c 875 */;
	unsigned int cocci_id/* drivers/media/i2c/adv7604.c 875 */;
	struct adv76xx_format_info {
		u32 code;
		u8 op_ch_sel;
		bool rgb_out;
		bool swap_cb_cr;
		u8 op_format_sel;
	} cocci_id/* drivers/media/i2c/adv7604.c 87 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/adv7604.c 860 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/adv7604.c 842 */;
	struct adv76xx_reg_seq {
		unsigned int reg;
		u8 val;
	} cocci_id/* drivers/media/i2c/adv7604.c 82 */;
	const struct v4l2_dv_timings_cap *cocci_id/* drivers/media/i2c/adv7604.c 797 */;
	const struct v4l2_dv_timings_cap cocci_id/* drivers/media/i2c/adv7604.c 771 */;
	enum adv76xx_type{ADV7604, ADV7611, ADV7612,} cocci_id/* drivers/media/i2c/adv7604.c 76 */;
	const struct adv76xx_format_info *cocci_id/* drivers/media/i2c/adv7604.c 738 */;
	const struct adv76xx_format_info cocci_id/* drivers/media/i2c/adv7604.c 651 */[];
	const struct adv76xx_reg_seq *cocci_id/* drivers/media/i2c/adv7604.c 639 */;
	struct adv76xx_state cocci_id/* drivers/media/i2c/adv7604.c 526 */;
	struct delayed_work *cocci_id/* drivers/media/i2c/adv7604.c 525 */;
	struct work_struct *cocci_id/* drivers/media/i2c/adv7604.c 523 */;
	const u8 *cocci_id/* drivers/media/i2c/adv7604.c 490 */;
	struct regmap *cocci_id/* drivers/media/i2c/adv7604.c 364 */;
	size_t cocci_id/* drivers/media/i2c/adv7604.c 362 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/adv7604.c 3619 */;
	const void *cocci_id/* drivers/media/i2c/adv7604.c 361 */;
	const struct of_device_id *cocci_id/* drivers/media/i2c/adv7604.c 3369 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/adv7604.c 3345 */;
	const struct v4l2_dv_timings cocci_id/* drivers/media/i2c/adv7604.c 3342 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/adv7604.c 3340 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/adv7604.c 3184 */[];
	struct device_node *cocci_id/* drivers/media/i2c/adv7604.c 3131 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/i2c/adv7604.c 3130 */;
	const struct v4l2_event cocci_id/* drivers/media/i2c/adv7604.c 313 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/adv7604.c 3121 */[]__maybe_unused;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/adv7604.c 3113 */[];
	const struct adv76xx_chip_info cocci_id/* drivers/media/i2c/adv7604.c 2972 */[];
	const struct adv76xx_reg_seq cocci_id/* drivers/media/i2c/adv7604.c 2892 */[];
	struct i2c_client *cocci_id/* drivers/media/i2c/adv7604.c 2869 */;
	struct adv76xx_platform_data *cocci_id/* drivers/media/i2c/adv7604.c 2776 */;
	const struct adv76xx_register_map cocci_id/* drivers/media/i2c/adv7604.c 2756 */[];
	struct adv76xx_register_map {
		const char *name;
		u8 default_addr;
	} cocci_id/* drivers/media/i2c/adv7604.c 2751 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/i2c/adv7604.c 2716 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/adv7604.c 2709 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/adv7604.c 2703 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/adv7604.c 2692 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/adv7604.c 2684 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/adv7604.c 2673 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/adv7604.c 2668 */;
	struct v4l2_event_subscription *cocci_id/* drivers/media/i2c/adv7604.c 2635 */;
	struct v4l2_fh *cocci_id/* drivers/media/i2c/adv7604.c 2634 */;
	const char *constcocci_id/* drivers/media/i2c/adv7604.c 2511 */[4];
	const char *constcocci_id/* drivers/media/i2c/adv7604.c 2506 */[];
	const char *constcocci_id/* drivers/media/i2c/adv7604.c 2484 */[16];
	struct stdi_readback cocci_id/* drivers/media/i2c/adv7604.c 2479 */;
	struct v4l2_dv_timings cocci_id/* drivers/media/i2c/adv7604.c 2478 */;
	union hdmi_infoframe cocci_id/* drivers/media/i2c/adv7604.c 2465 */;
	uint8_t cocci_id/* drivers/media/i2c/adv7604.c 2421 */[32];
	union hdmi_infoframe *cocci_id/* drivers/media/i2c/adv7604.c 2419 */;
	const struct adv76xx_cfg_read_infoframe cocci_id/* drivers/media/i2c/adv7604.c 2411 */[];
	const struct adv76xx_video_standards cocci_id/* drivers/media/i2c/adv7604.c 237 */[];
	struct adv76xx_video_standards {
		struct v4l2_dv_timings timings;
		u8 vid_std;
		u8 v_freq;
	} cocci_id/* drivers/media/i2c/adv7604.c 230 */;
	u8 *cocci_id/* drivers/media/i2c/adv7604.c 2251 */;
	struct v4l2_edid *cocci_id/* drivers/media/i2c/adv7604.c 2248 */;
	irqreturn_t cocci_id/* drivers/media/i2c/adv7604.c 2238 */;
	const struct v4l2_dv_timings *cocci_id/* drivers/media/i2c/adv7604.c 220 */;
	void *cocci_id/* drivers/media/i2c/adv7604.c 220 */;
	const u8 cocci_id/* drivers/media/i2c/adv7604.c 2181 */;
	const struct cec_adap_ops cocci_id/* drivers/media/i2c/adv7604.c 2170 */;
	const struct v4l2_dv_timings cocci_id/* drivers/media/i2c/adv7604.c 215 */[];
	u32 cocci_id/* drivers/media/i2c/adv7604.c 2140 */;
	struct cec_msg *cocci_id/* drivers/media/i2c/adv7604.c 2140 */;
	const struct adv76xx_chip_info *cocci_id/* drivers/media/i2c/adv7604.c 2057 */;
	struct adv76xx_state *cocci_id/* drivers/media/i2c/adv7604.c 2056 */;
	struct cec_adapter *cocci_id/* drivers/media/i2c/adv7604.c 2054 */;
	struct cec_msg cocci_id/* drivers/media/i2c/adv7604.c 2023 */;
	bool *cocci_id/* drivers/media/i2c/adv7604.c 2009 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/adv7604.c 1916 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/adv7604.c 1893 */;
	const unsigned int cocci_id/* drivers/media/i2c/adv7604.c 1865 */[6][6];
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/adv7604.c 1826 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/adv7604.c 1813 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/adv7604.c 1812 */;
	bool cocci_id/* drivers/media/i2c/adv7604.c 1718 */;
	void cocci_id/* drivers/media/i2c/adv7604.c 1718 */;
	struct adv76xx_state {
		const struct adv76xx_chip_info *info;
		struct adv76xx_platform_data pdata;
		struct gpio_desc *hpd_gpio[4];
		struct gpio_desc *reset_gpio;
		struct v4l2_subdev sd;
		struct media_pad pads[ADV76XX_PAD_MAX];
		unsigned int source_pad;
		struct v4l2_ctrl_handler hdl;
		enum adv76xx_pad selected_input;
		struct v4l2_dv_timings timings;
		const struct adv76xx_format_info *format;
		struct {
			u8 edid[256];
			u32 present;
			unsigned blocks;
		} edid;
		u16 spa_port_a[2];
		struct v4l2_fract aspect_ratio;
		u32 rgb_quantization_range;
		struct delayed_work delayed_work_enable_hotplug;
		bool restart_stdi_once;
		struct cec_adapter *cec_adap;
		u8 cec_addr[ADV76XX_MAX_ADDRS];
		u8 cec_valid_addrs;
		bool cec_enabled_adap;
		struct i2c_client *i2c_clients[ADV76XX_PAGE_MAX];
		struct regmap *regmap[ADV76XX_PAGE_MAX];
		struct v4l2_ctrl *detect_tx_5v_ctrl;
		struct v4l2_ctrl *analog_sampling_phase_ctrl;
		struct v4l2_ctrl *free_run_color_manual_ctrl;
		struct v4l2_ctrl *free_run_color_ctrl;
		struct v4l2_ctrl *rgb_quantization_range_ctrl;
	} cocci_id/* drivers/media/i2c/adv7604.c 160 */;
	struct v4l2_bt_timings *cocci_id/* drivers/media/i2c/adv7604.c 1541 */;
	unsigned cocci_id/* drivers/media/i2c/adv7604.c 1517 */;
	int cocci_id/* drivers/media/i2c/adv7604.c 1507 */;
	struct v4l2_dv_timings *cocci_id/* drivers/media/i2c/adv7604.c 1497 */;
	struct v4l2_dv_timings_cap *cocci_id/* drivers/media/i2c/adv7604.c 1480 */;
	struct v4l2_enum_dv_timings *cocci_id/* drivers/media/i2c/adv7604.c 1467 */;
	struct stdi_readback *cocci_id/* drivers/media/i2c/adv7604.c 1410 */;
	struct stdi_readback {
		u16 bl,lcf,lcvs;
		u8 hs_pol,vs_pol;
		bool interlaced;
	} cocci_id/* drivers/media/i2c/adv7604.c 1355 */;
	u32 *cocci_id/* drivers/media/i2c/adv7604.c 1339 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/adv7604.c 1242 */;
	u8 cocci_id/* drivers/media/i2c/adv7604.c 1068 */[4];
	struct adv76xx_chip_info {
		enum adv76xx_type type;
		bool has_afe;
		unsigned int max_port;
		unsigned int num_dv_ports;
		unsigned int edid_enable_reg;
		unsigned int edid_status_reg;
		unsigned int lcf_reg;
		unsigned int cable_det_mask;
		unsigned int tdms_lock_mask;
		unsigned int fmt_change_digital_mask;
		unsigned int cp_csc;
		unsigned int cec_irq_status;
		unsigned int cec_rx_enable;
		unsigned int cec_rx_enable_mask;
		bool cec_irq_swap;
		const struct adv76xx_format_info *formats;
		unsigned int nformats;
		void (*set_termination)(struct v4l2_subdev *sd, bool enable);
		void (*setup_irqs)(struct v4l2_subdev *sd);
		unsigned int (*read_hdmi_pixelclock)(struct v4l2_subdev *sd);
		unsigned int (*read_cable_det)(struct v4l2_subdev *sd);
		const struct adv76xx_reg_seq *recommended_settings[2];
		unsigned int num_recommended_settings[2];
		unsigned long page_mask;
		unsigned int linewidth_mask;
		unsigned int field0_height_mask;
		unsigned int field1_height_mask;
		unsigned int hfrontporch_mask;
		unsigned int hsync_mask;
		unsigned int hbackporch_mask;
		unsigned int field0_vfrontporch_mask;
		unsigned int field1_vfrontporch_mask;
		unsigned int field0_vsync_mask;
		unsigned int field1_vsync_mask;
		unsigned int field0_vbackporch_mask;
		unsigned int field1_vbackporch_mask;
	} cocci_id/* drivers/media/i2c/adv7604.c 102 */;
}
