cocci_test_suite() {
	u64 cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 950 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 93 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 761 */[8];
	struct radeon_bo *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 754 */;
	uint32_t *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 451 */;
	struct evergreen_cs_track {
		u32 group_size;
		u32 nbanks;
		u32 npipes;
		u32 row_size;
		u32 nsamples;
		struct radeon_bo *cb_color_bo[12];
		u32 cb_color_bo_offset[12];
		struct radeon_bo *cb_color_fmask_bo[8];
		struct radeon_bo *cb_color_cmask_bo[8];
		u32 cb_color_info[12];
		u32 cb_color_view[12];
		u32 cb_color_pitch[12];
		u32 cb_color_slice[12];
		u32 cb_color_slice_idx[12];
		u32 cb_color_attrib[12];
		u32 cb_color_cmask_slice[8];
		u32 cb_color_fmask_slice[8];
		u32 cb_target_mask;
		u32 cb_shader_mask;
		u32 vgt_strmout_config;
		u32 vgt_strmout_buffer_config;
		struct radeon_bo *vgt_strmout_bo[4];
		u32 vgt_strmout_bo_offset[4];
		u32 vgt_strmout_size[4];
		u32 db_depth_control;
		u32 db_depth_view;
		u32 db_depth_slice;
		u32 db_depth_size;
		u32 db_z_info;
		u32 db_z_read_offset;
		u32 db_z_write_offset;
		struct radeon_bo *db_z_read_bo;
		struct radeon_bo *db_z_write_bo;
		u32 db_s_info;
		u32 db_s_read_offset;
		u32 db_s_write_offset;
		struct radeon_bo *db_s_read_bo;
		struct radeon_bo *db_s_write_bo;
		bool sx_misc_kill_all_prims;
		bool cb_dirty;
		bool db_dirty;
		bool streamout_dirty;
		u32 htile_offset;
		u32 htile_surface;
		struct radeon_bo *htile_bo;
		unsigned long indirect_draw_buffer_size;
		const unsigned *reg_safe_bm;
	} cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 42 */;
	int cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 40 */(struct radeon_cs_parser *p,
								   struct radeon_bo_list **cs_reloc);
	unsigned long cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 399 */;
	struct eg_surface cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 397 */;
	struct radeon_ib *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 3566 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 3566 */;
	u32 *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 3349 */;
	const char *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 299 */;
	struct eg_surface *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 298 */;
	struct radeon_cs_chunk *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 2799 */;
	struct radeon_cs_packet cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 2674 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 2620 */;
	uint64_t cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1794 */;
	bool cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1756 */;
	struct eg_surface {
		unsigned nbx;
		unsigned nby;
		unsigned format;
		unsigned mode;
		unsigned nbanks;
		unsigned bankw;
		unsigned bankh;
		unsigned tsplit;
		unsigned mtilea;
		unsigned nsamples;
		unsigned bpe;
		unsigned layer_size;
		unsigned palign;
		unsigned halign;
		unsigned long base_align;
	} cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 170 */;
	unsigned cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1183 */;
	void cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 118 */;
	struct radeon_bo_list *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1097 */;
	struct evergreen_cs_track *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1096 */;
	struct radeon_cs_parser *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1094 */;
	int cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1094 */;
	struct radeon_cs_packet *cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1071 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/evergreen_cs.c 1028 */[6];
}
