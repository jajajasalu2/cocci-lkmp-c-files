cocci_test_suite() {
	struct {
		struct nvkm_msgqueue_msg base;
		u8 num_queues;
		u16 os_debug_entry_point;
		struct {
			u32 offset;
			u16 size;
			u8 index;
			u8 id;
		} queue_info[MSGQUEUE_0148CDEC_NUM_QUEUES];
		u16 sw_managed_area_offset;
		u16 sw_managed_area_size;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 92 */;
	struct msgqueue_0148cdec *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 91 */;
	struct {
		u32 freq_hz;
		u32 falc_trace_size;
		u32 falc_trace_dma_base;
		u32 falc_trace_dma_idx;
		bool secure_mode;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 77 */;
	enum{INIT_MSG_INIT=0x0,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 70 */;
	enum msgqueue_msg_priority cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 49 */;
	struct msgqueue_0148cdec cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 45 */;
	struct msgqueue_0148cdec {
		struct nvkm_msgqueue base;
		struct nvkm_msgqueue_queue queue[MSGQUEUE_0148CDEC_NUM_QUEUES];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 39 */;
	enum{MSGQUEUE_0148CDEC_COMMAND_QUEUE=0, MSGQUEUE_0148CDEC_MESSAGE_QUEUE=1, MSGQUEUE_0148CDEC_NUM_QUEUES,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 33 */;
	struct nvkm_msgqueue **cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 251 */;
	const struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 250 */;
	struct nvkm_falcon *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 250 */;
	const struct nvkm_msgqueue_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 240 */;
	const struct nvkm_msgqueue_acr_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 229 */;
	struct {
		struct nvkm_msgqueue_hdr hdr;
		u8 cmd_type;
		u32 flags;
		u32 falcon_id;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 206 */;
	enum nvkm_secboot_falcon cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 199 */;
	struct nvkm_msgqueue *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 199 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 198 */;
	enum{ACR_CMD_BOOTSTRAP_FALCON_FLAGS_RESET_YES=0, ACR_CMD_BOOTSTRAP_FALCON_FLAGS_RESET_NO=1,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 193 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 175 */;
	const struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 174 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 173 */;
	struct acr_bootstrap_falcon_msg {
		struct nvkm_msgqueue_msg base;
		u32 error_code;
		u32 falcon_id;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 168 */;
	struct nvkm_msgqueue_hdr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 166 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 164 */;
	enum{ACR_CMD_BOOTSTRAP_FALCON=0x00,} cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 160 */;
	const struct nvkm_msgqueue_init_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 149 */;
	struct nvkm_msgqueue_queue *cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 123 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.c 122 */;
}
