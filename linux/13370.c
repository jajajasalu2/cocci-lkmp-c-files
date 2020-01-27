cocci_test_suite() {
	int (*cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 973 */)(void *priv,
									struct vb2_queue *src_vq,
									struct vb2_queue *dst_vq);
	void *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 972 */;
	const struct v4l2_m2m_ops *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 944 */;
	struct v4l2_m2m_dev {
		struct v4l2_m2m_ctx *curr_ctx;
#ifdef CONFIG_MEDIA_CONTROLLER
		struct media_entity *source;
		struct media_pad source_pad;
		struct media_entity sink;
		struct media_pad sink_pad;
		struct media_entity proc;
		struct media_pad proc_pads[2];
		struct media_intf_devnode *intf_devnode;
#endif
		struct list_head job_queue;
		spinlock_t job_spinlock;
		struct work_struct job_work;
		const struct v4l2_m2m_ops *m2m_ops;
	} cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 89 */;
	struct media_link *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 856 */;
	char *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 800 */;
	struct media_pad *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 799 */;
	struct media_entity *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 798 */;
	enum v4l2_m2m_entity_type cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 795 */;
	struct media_device *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 794 */;
	struct video_device *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 740 */;
	struct poll_table_struct *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 738 */;
	struct vb2_buffer cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 718 */;
	struct vb2_buffer *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 682 */;
	struct v4l2_exportbuffer *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 613 */;
	struct vb2_queue *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 605 */;
	struct v4l2_create_buffers *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 603 */;
	struct file *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 602 */;
	int cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 602 */;
	struct v4l2_buffer *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 582 */;
	const char *const cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 57 */[];
	enum v4l2_m2m_entity_type{MEM2MEM_ENT_TYPE_SOURCE, MEM2MEM_ENT_TYPE_SINK, MEM2MEM_ENT_TYPE_PROC,} cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 51 */;
	enum vb2_buffer_state cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 490 */;
	bool cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 451 */;
	struct v4l2_m2m_dev cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 384 */;
	struct work_struct *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 381 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 288 */;
	unsigned long cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 287 */;
	struct v4l2_m2m_ctx *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 285 */;
	struct v4l2_m2m_dev *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 284 */;
	void cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 284 */;
	unsigned int cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 200 */;
	__poll_t cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1294 */;
	poll_table *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1294 */;
	struct v4l2_fh *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1288 */;
	struct vm_area_struct *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1286 */;
	struct v4l2_decoder_cmd *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1241 */;
	struct v4l2_encoder_cmd *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1200 */;
	struct v4l2_requestbuffers *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1119 */;
	struct v4l2_m2m_ctx cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1095 */;
	enum v4l2_buf_type cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 109 */;
	struct v4l2_m2m_queue_ctx *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 108 */;
	struct media_request_object *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1072 */;
	struct media_request *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1070 */;
	u32 cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1053 */;
	const struct vb2_v4l2_buffer *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1049 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1034 */;
	struct v4l2_m2m_buffer *cocci_id/* drivers/media/v4l2-core/v4l2-mem2mem.c 1033 */;
}
