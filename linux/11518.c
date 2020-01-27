cocci_test_suite() {
	struct {
		u32 reserved;
		u32 freq_hz;
		u32 trace_size;
		u32 trace_dma_base;
		u16 trace_dma_base1;
		u8 trace_dma_offset;
		u32 trace_dma_idx;
		bool secure_mode;
		bool raise_priv_sec;
		struct {
			u32 dma_base;
			u16 dma_base1;
			u8 dma_offset;
			u16 fb_size;
			u8 dma_idx;
		} gc6_ctx;
		u8 pad;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 93 */;
	enum{INIT_MSG_INIT=0x0,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 86 */;
	enum msgqueue_msg_priority cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 57 */;
	struct msgqueue_0137bca5 cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 53 */;
	struct msgqueue_0137bca5 {
		struct msgqueue_0137c63d base;
		u64 wpr_addr;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 46 */;
	struct msgqueue_0137c63d cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 44 */;
	struct nvkm_msgqueue **cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 417 */;
	const struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 416 */;
	struct nvkm_falcon *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 416 */;
	const struct nvkm_msgqueue_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 406 */;
	struct msgqueue_0137c63d {
		struct nvkm_msgqueue base;
		struct nvkm_msgqueue_queue queue[MSGQUEUE_0137C63D_NUM_QUEUES];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 38 */;
	const struct nvkm_msgqueue_acr_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 368 */;
	struct msgqueue_0137bca5 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 343 */;
	struct {
		struct nvkm_msgqueue_hdr hdr;
		u8 cmd_type;
		u32 flags;
		u32 falcon_mask;
		u32 use_va_mask;
		u32 wpr_lo;
		u32 wpr_hi;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 334 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 327 */;
	struct acr_bootstrap_falcon_msg {
		struct nvkm_msgqueue_msg base;
		u32 falcon_mask;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 303 */;
	enum{MSGQUEUE_0137C63D_COMMAND_QUEUE_HPQ=0, MSGQUEUE_0137C63D_COMMAND_QUEUE_LPQ=1, MSGQUEUE_0137C63D_MESSAGE_QUEUE=4, MSGQUEUE_0137C63D_NUM_QUEUES=5,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 28 */;
	struct {
		struct nvkm_msgqueue_hdr hdr;
		u8 cmd_type;
		u32 flags;
		u32 falcon_id;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 276 */;
	enum nvkm_secboot_falcon cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 269 */;
	struct nvkm_msgqueue *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 269 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 268 */;
	enum{ACR_CMD_BOOTSTRAP_FALCON_FLAGS_RESET_YES=0, ACR_CMD_BOOTSTRAP_FALCON_FLAGS_RESET_NO=1,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 263 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 253 */;
	const struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 252 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 251 */;
	struct acr_bootstrap_falcon_msg {
		struct nvkm_msgqueue_msg base;
		u32 falcon_id;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 247 */;
	struct nvkm_msgqueue_hdr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 245 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 243 */;
	struct {
		struct nvkm_msgqueue_hdr hdr;
		u8 cmd_type;
		u32 region_id;
		u32 wpr_offset;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 222 */;
	struct {
		struct nvkm_msgqueue_msg base;
		u32 error_code;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 199 */;
	enum{ACR_CMD_INIT_WPR_REGION=0x00, ACR_CMD_BOOTSTRAP_FALCON=0x01, ACR_CMD_BOOTSTRAP_MULTIPLE_FALCONS=0x03,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 189 */;
	const struct nvkm_msgqueue_init_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 178 */;
	struct nvkm_msgqueue_queue *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 153 */;
	struct {
		struct nvkm_msgqueue_msg base;
		u8 pad;
		u16 os_debug_entry_point;
		struct {
			u16 size;
			u16 offset;
			u8 index;
			u8 pad;
		} queue_info[MSGQUEUE_0137C63D_NUM_QUEUES];
		u16 sw_managed_area_offset;
		u16 sw_managed_area_size;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 123 */;
	struct msgqueue_0137c63d *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 122 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.c 117 */(struct nvkm_msgqueue *queue);
}
