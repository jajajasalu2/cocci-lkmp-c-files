cocci_test_suite() {
	struct vdec_vp8_vsi {
		struct vdec_vp8_dec_info dec;
		struct vdec_pic_info pic;
		uint32_t dec_table[VP8_DEC_TABLE_SZ];
		uint32_t segment_buf[VP8_HW_SEGMENT_DATA_SZ][VP8_HW_SEGMENT_UINT];
		uint32_t load_data;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 84 */;
	struct vdec_vp8_dec_info {
		uint64_t working_buf_dma;
		uint64_t prev_y_dma;
		uint64_t cur_y_fb_dma;
		uint64_t cur_c_fb_dma;
		uint64_t bs_dma;
		uint32_t bs_sz;
		uint32_t resolution_changed;
		uint32_t show_frame;
		uint32_t wait_key_frame;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 64 */;
	const struct vdec_common_if cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 612 */;
	unsigned int *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 590 */;
	enum vdec_get_param_type cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 567 */;
	struct v4l2_rect *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 557 */;
	struct vdec_fb *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 518 */;
	struct vdec_fb **cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 515 */;
	unsigned long cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 456 */;
	u64 cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 449 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 438 */;
	unsigned char *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 437 */;
	struct vdec_vpu_inst *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 436 */;
	struct vdec_vp8_dec_info *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 435 */;
	bool *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 432 */;
	struct mtk_vcodec_ctx *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 391 */;
	uint64_t cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 377 */;
	struct mtk_vcodec_mem *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 368 */;
	int cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 365 */;
	struct vdec_fb_node cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 359 */;
	struct vdec_fb_node *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 355 */;
	struct vdec_vp8_inst *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 353 */;
	void *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 353 */;
	void cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 353 */;
	struct vdec_pic_info *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 283 */;
	u32 *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 270 */;
	void __iomem *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 225 */;
	u32 cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 224 */;
	struct vdec_vp8_vsi *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 206 */;
	struct vdec_vp8_inst {
		struct vdec_fb *cur_fb;
		struct vdec_fb_node dec_fb[VP8_MAX_FRM_BUF_NODE_NUM];
		struct list_head available_fb_node_list;
		struct list_head fb_use_list;
		struct list_head fb_free_list;
		struct list_head fb_disp_list;
		struct mtk_vcodec_mem working_buf;
		struct vdec_vp8_hw_reg_base reg_base;
		unsigned int frm_cnt;
		struct mtk_vcodec_ctx *ctx;
		struct vdec_vpu_inst vpu;
		struct vdec_vp8_vsi *vsi;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 153 */;
	struct vdec_vp8_vpu_inst {
		wait_queue_head_t wq_hd;
		int signaled;
		int failure;
		uint32_t inst_addr;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 119 */;
	struct vdec_vp8_hw_reg_base {
		void __iomem *sys;
		void __iomem *misc;
		void __iomem *ld;
		void __iomem *top;
		void __iomem *cm;
		void __iomem *hwd;
		void __iomem *hwb;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_vp8_if.c 102 */;
}
