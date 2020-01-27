cocci_test_suite() {
	int __init cocci_id/* drivers/scsi/virtio_scsi.c 981 */;
	struct virtio_driver cocci_id/* drivers/scsi/virtio_scsi.c 967 */;
	unsigned int cocci_id/* drivers/scsi/virtio_scsi.c 959 */[];
	struct virtio_device_id cocci_id/* drivers/scsi/virtio_scsi.c 954 */[];
	struct virtio_device *cocci_id/* drivers/scsi/virtio_scsi.c 92 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/virtio_scsi.c 92 */;
	mempool_t *cocci_id/* drivers/scsi/virtio_scsi.c 90 */;
	struct kmem_cache *cocci_id/* drivers/scsi/virtio_scsi.c 89 */;
	char *cocci_id/* drivers/scsi/virtio_scsi.c 790 */;
	vq_callback_t *cocci_id/* drivers/scsi/virtio_scsi.c 788 */;
	struct irq_affinity cocci_id/* drivers/scsi/virtio_scsi.c 784 */;
	struct virtqueue **cocci_id/* drivers/scsi/virtio_scsi.c 783 */;
	const char **cocci_id/* drivers/scsi/virtio_scsi.c 782 */;
	vq_callback_t **cocci_id/* drivers/scsi/virtio_scsi.c 781 */;
	struct virtio_scsi_config cocci_id/* drivers/scsi/virtio_scsi.c 751 */;
	typeof(((struct virtio_scsi_config *)0)->fld) cocci_id/* drivers/scsi/virtio_scsi.c 750 */;
	struct virtio_scsi_cmd cocci_id/* drivers/scsi/virtio_scsi.c 733 */;
	struct scsi_host_template cocci_id/* drivers/scsi/virtio_scsi.c 728 */;
	enum blk_eh_timer_return cocci_id/* drivers/scsi/virtio_scsi.c 723 */;
	u16 cocci_id/* drivers/scsi/virtio_scsi.c 711 */;
	struct virtio_scsi {
		struct virtio_device *vdev;
		struct virtio_scsi_event_node event_list[VIRTIO_SCSI_EVENT_LEN];
		u32 num_queues;
		struct hlist_node node;
		bool stop_events;
		struct virtio_scsi_vq ctrl_vq;
		struct virtio_scsi_vq event_vq;
		struct virtio_scsi_vq req_vqs[];
	} cocci_id/* drivers/scsi/virtio_scsi.c 71 */;
	struct blk_mq_queue_map *cocci_id/* drivers/scsi/virtio_scsi.c 706 */;
	struct virtio_scsi_ctrl_tmf_req cocci_id/* drivers/scsi/virtio_scsi.c 691 */;
	struct virtio_scsi *cocci_id/* drivers/scsi/virtio_scsi.c 682 */;
	struct scsi_device *cocci_id/* drivers/scsi/virtio_scsi.c 672 */;
	struct virtio_scsi_vq {
		spinlock_t vq_lock;
		struct virtqueue *vq;
	} cocci_id/* drivers/scsi/virtio_scsi.c 63 */;
	struct virtio_scsi_event_node {
		struct virtio_scsi *vscsi;
		struct virtio_scsi_event event;
		struct work_struct work;
	} cocci_id/* drivers/scsi/virtio_scsi.c 57 */;
	struct blk_integrity *cocci_id/* drivers/scsi/virtio_scsi.c 512 */;
	struct request *cocci_id/* drivers/scsi/virtio_scsi.c 511 */;
	struct virtio_scsi_cmd_req_pi *cocci_id/* drivers/scsi/virtio_scsi.c 508 */;
	unsigned long cocci_id/* drivers/scsi/virtio_scsi.c 500 */;
	struct virtio_scsi_cmd_req *cocci_id/* drivers/scsi/virtio_scsi.c 493 */;
	bool cocci_id/* drivers/scsi/virtio_scsi.c 474 */;
	struct virtio_scsi_vq *cocci_id/* drivers/scsi/virtio_scsi.c 471 */;
	unsigned cocci_id/* drivers/scsi/virtio_scsi.c 412 */;
	struct sg_table *cocci_id/* drivers/scsi/virtio_scsi.c 411 */;
	struct scatterlist *cocci_id/* drivers/scsi/virtio_scsi.c 410 */[6];
	struct scsi_cmnd *cocci_id/* drivers/scsi/virtio_scsi.c 409 */;
	size_t cocci_id/* drivers/scsi/virtio_scsi.c 407 */;
	struct virtio_scsi_cmd *cocci_id/* drivers/scsi/virtio_scsi.c 406 */;
	struct virtqueue *cocci_id/* drivers/scsi/virtio_scsi.c 405 */;
	int cocci_id/* drivers/scsi/virtio_scsi.c 405 */;
	struct virtio_scsi_cmd {
		struct scsi_cmnd *sc;
		struct completion *comp;
		union {
			struct virtio_scsi_cmd_req cmd;
			struct virtio_scsi_cmd_req_pi cmd_pi;
			struct virtio_scsi_ctrl_tmf_req tmf;
			struct virtio_scsi_ctrl_an_req an;
		} req;
		union {
			struct virtio_scsi_cmd_resp cmd;
			struct virtio_scsi_ctrl_tmf_resp tmf;
			struct virtio_scsi_ctrl_an_resp an;
			struct virtio_scsi_event evt;
		} resp;
	}____cacheline_aligned_in_smp cocci_id/* drivers/scsi/virtio_scsi.c 40 */;
	struct virtio_scsi_event_node *cocci_id/* drivers/scsi/virtio_scsi.c 391 */;
	struct virtio_scsi_event *cocci_id/* drivers/scsi/virtio_scsi.c 364 */;
	struct virtio_scsi_event_node cocci_id/* drivers/scsi/virtio_scsi.c 362 */;
	struct work_struct *cocci_id/* drivers/scsi/virtio_scsi.c 359 */;
	unsigned char cocci_id/* drivers/scsi/virtio_scsi.c 342 */;
	unsigned char cocci_id/* drivers/scsi/virtio_scsi.c 333 */[MAX_COMMAND_SIZE];
	u8 cocci_id/* drivers/scsi/virtio_scsi.c 311 */;
	unsigned int cocci_id/* drivers/scsi/virtio_scsi.c 309 */;
	struct virtio_scsi_event cocci_id/* drivers/scsi/virtio_scsi.c 238 */;
	struct scatterlist cocci_id/* drivers/scsi/virtio_scsi.c 234 */;
	void cocci_id/* drivers/scsi/virtio_scsi.c 228 */(struct work_struct *work);
	void (*cocci_id/* drivers/scsi/virtio_scsi.c 173 */)(struct virtio_scsi *vscsi,
							     void *buf);
	u32 cocci_id/* drivers/scsi/virtio_scsi.c 161 */;
	struct virtio_scsi_cmd_resp *cocci_id/* drivers/scsi/virtio_scsi.c 112 */;
	void *cocci_id/* drivers/scsi/virtio_scsi.c 108 */;
	void __exit cocci_id/* drivers/scsi/virtio_scsi.c 1017 */;
	void cocci_id/* drivers/scsi/virtio_scsi.c 1017 */;
}
