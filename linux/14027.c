cocci_test_suite() {
	enum e_rga_start_pos cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 90 */[4][4];
	u32 cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 87 */;
	struct rga_corners_addr_offset *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 85 */;
	struct rga_frame *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 46 */;
	struct rockchip_rga *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 377 */;
	struct rga_ctx *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 375 */;
	void cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 375 */;
	union rga_alpha_ctrl1 cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 358 */;
	union rga_alpha_ctrl0 cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 357 */;
	union rga_mode_ctrl cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 356 */;
	struct rga_corners_addr_offset {
		struct rga_addr_offset left_top;
		struct rga_addr_offset right_top;
		struct rga_addr_offset left_bottom;
		struct rga_addr_offset right_bottom;
	} cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 25 */;
	struct rga_addr_offset {
		unsigned int y_off;
		unsigned int u_off;
		unsigned int v_off;
	} cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 19 */;
	struct rga_corners_addr_offset cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 177 */;
	struct rga_addr_offset *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 176 */;
	union rga_dst_act_info cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 174 */;
	union rga_dst_vir_info cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 173 */;
	union rga_src_act_info cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 172 */;
	union rga_src_vir_info cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 171 */;
	union rga_src_y_factor cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 170 */;
	union rga_src_x_factor cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 169 */;
	union rga_dst_info cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 168 */;
	union rga_src_info cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 167 */;
	unsigned int cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 152 */;
	u32 *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 151 */;
	void *cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 148 */;
	enum e_rga_start_pos{LT=0, LB=1, RT=2, RB=3,} cocci_id/* drivers/media/platform/rockchip/rga/rga-hw.c 12 */;
}
