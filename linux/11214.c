cocci_test_suite() {
	enum source_format_class cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 961 */;
	bool cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 799 */;
	const scaler_taps_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 782 */;
	const scaler_ratio_depth_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 781 */;
	const display_clocks_and_cfg_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 780 */;
	const display_output_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 779 */;
	const display_pipe_dest_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 778 */;
	const display_pipe_source_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 777 */;
	const bool cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 774 */;
	const display_dlg_sys_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 773 */;
	const display_rq_dlg_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 772 */;
	display_ttu_regs_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 771 */;
	display_dlg_regs_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 770 */;
	const unsigned int cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 768 */;
	const display_e2e_pipe_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 767 */;
	const display_pipe_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 753 */;
	display_rq_regs_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 752 */;
	const display_pipe_source_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 722 */;
	display_rq_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 721 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 65 */(struct display_mode_lib *mode_lib,
												double *refcyc_per_req_delivery_pre_cur,
												double *refcyc_per_req_delivery_cur,
												double refclk_freq_in_mhz,
												double ref_freq_to_pix_freq,
												double hscale_pixel_rate_l,
												double hscl_ratio,
												double vratio_pre_l,
												double vratio_l,
												unsigned int cur_width,
												enum cursor_bpp cur_bpp);
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 46 */(struct display_mode_lib *mode_lib,
												const display_e2e_pipe_params_st *e2e_pipe_param,
												const unsigned int num_pipes,
												const unsigned int pipe_idx,
												display_dlg_regs_st *disp_dlg_regs,
												display_ttu_regs_st *disp_ttu_regs,
												const display_rq_dlg_params_st rq_dlg_param,
												const display_dlg_sys_params_st dlg_sys_param,
												const bool cstate_en,
												const bool pstate_en);
	enum source_macro_tile_size cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 429 */;
	enum dm_swizzle_mode cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 401 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 38 */(struct display_mode_lib *mode_lib,
												display_rq_params_st *rq_param,
												const display_pipe_source_params_st pipe_src_param);
	display_data_rq_sizing_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 319 */;
	display_data_rq_misc_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 318 */;
	display_data_rq_dlg_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 317 */;
	const display_rq_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 191 */;
	const display_data_rq_sizing_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 167 */;
	display_data_rq_regs_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 166 */;
	enum cursor_bpp cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1625 */;
	unsigned int cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1624 */;
	double cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1618 */;
	double *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1616 */;
	struct display_mode_lib *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1615 */;
	void cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1615 */;
	display_dlg_sys_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1576 */;
	display_rq_params_st cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1575 */;
	display_e2e_pipe_params_st *cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 1566 */;
	const enum source_macro_tile_size cocci_id/* drivers/gpu/drm/amd/display/dc/dml/dcn20/display_rq_dlg_calc_20.c 155 */;
}
