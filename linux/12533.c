cocci_test_suite() {
	struct fw_header *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 928 */;
	struct fw_header {
		int rd_size;
		int wr_size;
		int pmem_size;
		int dmem_size;
	} *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 902 */;
	u8 *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 900 */;
	const struct firmware *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 898 */;
	struct notifier_block *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 795 */;
	bool cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 732 */;
	const int *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 668 */;
	struct sti_hqvdp_hvsrc *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 666 */;
	enum sti_hvsrc_orient cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 665 */;
	unsigned int cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 644 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 642 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 638 */[];
	struct sti_hqvdp *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 566 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 565 */;
	void *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 563 */;
	int cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 480 */;
	struct sti_hqvdp_cmd *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 478 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 478 */;
	void cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 478 */;
	const char *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 453 */;
	u32 *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 453 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 435 */;
	struct sti_hqvdp_cmd cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 414 */;
	const uint32_t cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 362 */[];
	struct sti_hqvdp cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 360 */;
	struct sti_hqvdp {
		struct device *dev;
		struct drm_device *drm_dev;
		void __iomem *regs;
		struct sti_plane plane;
		struct clk *clk;
		struct clk *clk_pix_main;
		struct reset_control *reset;
		struct notifier_block vtg_nb;
		bool btm_field_pending;
		void *hqvdp_cmd;
		u32 hqvdp_cmd_paddr;
		struct sti_vtg *vtg;
		bool xp70_initialized;
		bool vtg_registered;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 343 */;
	struct sti_hqvdp_cmd {
		struct sti_hqvdp_top top;
		struct sti_hqvdp_vc1re vc1re;
		struct sti_hqvdp_fmd fmd;
		struct sti_hqvdp_csdi csdi;
		struct sti_hqvdp_hvsrc hvsrc;
		struct sti_hqvdp_iqi iqi;
		struct sti_hqvdp_top_status top_status;
		struct sti_hqvdp_fmd_status fmd_status;
		struct sti_hqvdp_csdi_status csdi_status;
		struct sti_hqvdp_hvsrc_status hvsrc_status;
		struct sti_hqvdp_iqi_status iqi_status;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 311 */;
	struct sti_hqvdp_iqi_status {
		u32 pxf_it_status;
		u32 y_iqi_crc;
		u32 u_iqi_crc;
		u32 v_iqi_crc;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 300 */;
	struct sti_hqvdp_hvsrc_status {
		u32 y_hvsrc_crc;
		u32 u_hvsrc_crc;
		u32 v_hvsrc_crc;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 294 */;
	struct sti_hqvdp_csdi_status {
		u32 prev_y_csdi_crc;
		u32 cur_y_csdi_crc;
		u32 next_y_csdi_crc;
		u32 prev_uv_csdi_crc;
		u32 cur_uv_csdi_crc;
		u32 next_uv_csdi_crc;
		u32 y_csdi_crc;
		u32 uv_csdi_crc;
		u32 uv_cup_crc;
		u32 mot_csdi_crc;
		u32 mot_cur_csdi_crc;
		u32 mot_prev_csdi_crc;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 279 */;
	struct sti_hqvdp_fmd_status {
		u32 fmd_repeat_move_status;
		u32 fmd_scene_count_status;
		u32 cfd_sum;
		u32 field_sum;
		u32 next_y_fmd_crc;
		u32 next_next_y_fmd_crc;
		u32 next_next_next_y_fmd_crc;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 269 */;
	struct sti_hqvdp_top_status {
		u32 processing_time;
		u32 input_y_crc;
		u32 input_uv_crc;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 263 */;
	struct sti_hqvdp_iqi {
		u32 config;
		u32 demo_wind_size;
		u32 pk_config;
		u32 coeff0_coeff1;
		u32 coeff2_coeff3;
		u32 coeff4;
		u32 pk_lut;
		u32 pk_gain;
		u32 pk_coring_level;
		u32 cti_config;
		u32 le_config;
		u32 le_lut[64];
		u32 con_bri;
		u32 sat_gain;
		u32 pxf_conf;
		u32 default_color;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 235 */;
	struct sti_hqvdp_hvsrc {
		u32 hor_panoramic_ctrl;
		u32 output_picture_size;
		u32 init_horizontal;
		u32 init_vertical;
		u32 param_ctrl;
		u32 yh_coef[NB_COEF];
		u32 ch_coef[NB_COEF];
		u32 yv_coef[NB_COEF];
		u32 cv_coef[NB_COEF];
		u32 hori_shift;
		u32 vert_shift;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 218 */;
	struct sti_hqvdp_csdi {
		u32 config;
		u32 config2;
		u32 dcdi_config;
		u32 prev_luma;
		u32 prev_enh_luma;
		u32 prev_right_luma;
		u32 prev_enh_right_luma;
		u32 next_luma;
		u32 next_enh_luma;
		u32 next_right_luma;
		u32 next_enh_right_luma;
		u32 prev_chroma;
		u32 prev_enh_chroma;
		u32 prev_right_chroma;
		u32 prev_enh_right_chroma;
		u32 next_chroma;
		u32 next_enh_chroma;
		u32 next_right_chroma;
		u32 next_enh_right_chroma;
		u32 prev_motion;
		u32 prev_right_motion;
		u32 cur_motion;
		u32 cur_right_motion;
		u32 next_motion;
		u32 next_right_motion;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 182 */;
	struct sti_hqvdp_fmd {
		u32 config;
		u32 viewport_ori;
		u32 viewport_size;
		u32 next_next_luma;
		u32 next_next_right_luma;
		u32 next_next_next_luma;
		u32 next_next_next_right_luma;
		u32 threshold_scd;
		u32 threshold_rfd;
		u32 threshold_move;
		u32 threshold_cfd;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 168 */;
	struct sti_hqvdp_vc1re {
		u32 ctrl_prv_csdi;
		u32 ctrl_cur_csdi;
		u32 ctrl_nxt_csdi;
		u32 ctrl_cur_fmd;
		u32 ctrl_nxt_fmd;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 160 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1411 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1405 */[];
	struct resource *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1352 */;
	struct device_node *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1350 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1347 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1342 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1321 */;
	struct device *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1318 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1280 */;
	const struct drm_plane_helper_funcs cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1259 */;
	u32 cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1181 */;
	unsigned long cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1178 */;
	char *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1177 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1120 */;
	struct sti_hqvdp_top {
		u32 config;
		u32 mem_format;
		u32 current_luma;
		u32 current_enh_luma;
		u32 current_right_luma;
		u32 current_enh_right_luma;
		u32 current_chroma;
		u32 current_enh_chroma;
		u32 current_right_chroma;
		u32 current_enh_right_chroma;
		u32 output_luma;
		u32 output_chroma;
		u32 luma_src_pitch;
		u32 luma_enh_src_pitch;
		u32 luma_right_src_pitch;
		u32 luma_enh_right_src_pitch;
		u32 chroma_src_pitch;
		u32 chroma_enh_src_pitch;
		u32 chroma_right_src_pitch;
		u32 chroma_enh_right_src_pitch;
		u32 luma_processed_pitch;
		u32 chroma_processed_pitch;
		u32 input_frame_size;
		u32 input_viewport_ori;
		u32 input_viewport_ori_right;
		u32 input_viewport_size;
		u32 left_view_border_width;
		u32 right_view_border_width;
		u32 left_view_3d_offset_width;
		u32 right_view_3d_offset_width;
		u32 side_stripe_color;
		u32 crc_reset_ctrl;
	} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 109 */;
	enum sti_hvsrc_orient{HVSRC_HORI, HVSRC_VERT,} cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 103 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1027 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1026 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1025 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1024 */;
	struct sti_plane *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1022 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1020 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/sti/sti_hqvdp.c 1019 */;
}