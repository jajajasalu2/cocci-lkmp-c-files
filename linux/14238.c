cocci_test_suite() {
	struct bdisp_op_cfg cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 994 */;
	bool cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 926 */;
	const u32 *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 770 */;
	u32 cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 769 */;
	s32 cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 768 */;
	struct v4l2_rect cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 765 */;
	u16 cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 764 */;
	struct bdisp_frame *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 762 */;
	enum bdisp_target_plan cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 760 */;
	struct bdisp_node *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 759 */;
	struct bdisp_op_cfg *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 758 */;
	void cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 757 */;
	u16 *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 628 */;
	dma_addr_t cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 509 */;
	void *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 508 */;
	unsigned int cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 507 */;
	struct device *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 505 */;
	int cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 505 */;
	const struct bdisp_filter_h_spec cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 50 */[];
	struct bdisp_node cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 452 */;
	struct bdisp_ctx *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 449 */;
	struct bdisp_filter_addr {
		u16 min;
		u16 max;
		void *virt;
		dma_addr_t paddr;
	} cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 43 */;
	struct bdisp_dev *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 402 */;
	struct bdisp_filter_addr cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 356 */[NB_V_FILTER];
	struct bdisp_filter_addr cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 355 */[NB_H_FILTER];
	struct bdisp_op_cfg {
		bool cconv;
		bool hflip;
		bool vflip;
		bool wide;
		bool scale;
		u16 h_inc;
		u16 v_inc;
		bool src_interlaced;
		u8 src_nbp;
		bool src_yuv;
		bool src_420;
		u8 dst_nbp;
		bool dst_yuv;
		bool dst_420;
	} cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 26 */;
	const struct bdisp_filter_v_spec cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 224 */[];
	enum bdisp_target_plan{BDISP_RGB, BDISP_Y, BDISP_CBCR,} cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 20 */;
	struct bdisp_request *cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 1050 */;
	struct bdisp_node **cocci_id/* drivers/media/platform/sti/bdisp/bdisp-hw.c 1049 */;
}
