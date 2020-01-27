cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 960 */;
	struct vmw_cmdbuf_header **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 957 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 956 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 956 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 955 */;
	u64 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 936 */;
	SVGACBHeader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 919 */;
	struct vmw_cmdbuf_alloc_info cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 801 */;
	struct drm_mm_node *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 797 */;
	struct vmw_cmdbuf_alloc_info *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 763 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 719 */;
	struct vmw_cmdbuf_header *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 662 */;
	struct vmw_cmdbuf_man *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 660 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 660 */;
	const char *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 534 */;
	SVGA3dCmdHeader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 531 */;
	struct vmw_cmdbuf_context {
		struct list_head submitted;
		struct list_head hw_submitted;
		struct list_head preempted;
		unsigned num_hw_submitted;
		bool block_submission;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 52 */;
	struct list_head cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 519 */[SVGA_CB_CONTEXT_MAX];
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 517 */;
	struct vmw_cmdbuf_man cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 515 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 512 */;
	SVGACBContext cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 476 */;
	SVGACBHeader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 41 */;
	SVGACBStatus cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 386 */;
	int *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 379 */;
	struct vmw_cmdbuf_header cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 349 */;
	struct vmw_cmdbuf_context *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 321 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 304 */;
	struct vmw_cmdbuf_dheader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 242 */;
	struct vmw_cmdbuf_dheader *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 237 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 198 */(struct vmw_cmdbuf_man *man,
								     u32 context);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 196 */(struct vmw_cmdbuf_man *man,
								     u32 context,
								     bool enable);
	struct vmw_cmdbuf_alloc_info {
		size_t page_size;
		struct drm_mm_node *node;
		bool done;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 185 */;
	struct vmw_cmdbuf_dheader {
		SVGACBHeader cb_header;
		u8 cmd[VMW_CMDBUF_INLINE_SIZE]__aligned(VMW_CMDBUF_INLINE_ALIGN);
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 173 */;
	struct vmw_cmdbuf_header {
		struct vmw_cmdbuf_man *man;
		SVGACBHeader *cb_header;
		SVGACBContext cb_context;
		struct list_head list;
		struct drm_mm_node node;
		dma_addr_t handle;
		u8 *cmd;
		size_t size;
		size_t reserved;
		bool inline_space;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 153 */;
	unsigned int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 1302 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 1298 */;
	struct {
		uint32 id;
		SVGADCCmdStartStop body;
	}__packed cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 1194 */;
	struct {
		uint32 id;
		SVGADCCmdPreempt body;
	}__packed cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 1169 */;
	const void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 1132 */;
	struct vmw_cmdbuf_man {
		struct mutex cur_mutex;
		struct mutex space_mutex;
		struct mutex error_mutex;
		struct work_struct work;
		struct vmw_private *dev_priv;
		struct vmw_cmdbuf_context ctx[SVGA_CB_CONTEXT_MAX];
		struct list_head error;
		struct drm_mm mm;
		struct ttm_buffer_object *cmd_space;
		struct ttm_bo_kmap_obj map_obj;
		u8 *map;
		struct vmw_cmdbuf_header *cur;
		size_t cur_pos;
		size_t default_size;
		unsigned max_hw_submitted;
		spinlock_t lock;
		struct dma_pool *headers;
		struct dma_pool *dheaders;
		wait_queue_head_t alloc_queue;
		wait_queue_head_t idle_queue;
		bool irq_on;
		bool using_mob;
		bool has_pool;
		dma_addr_t handle;
		size_t size;
		u32 num_contexts;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf.c 109 */;
}
