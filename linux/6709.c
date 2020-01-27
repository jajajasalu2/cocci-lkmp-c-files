cocci_test_suite() {
	struct scsi_device *cocci_id/* drivers/scsi/xen-scsifront.c 977 */;
	char **cocci_id/* drivers/scsi/xen-scsifront.c 973 */;
	char cocci_id/* drivers/scsi/xen-scsifront.c 972 */[64];
	char cocci_id/* drivers/scsi/xen-scsifront.c 826 */[TASK_COMM_LEN];
	const struct xenbus_device_id *cocci_id/* drivers/scsi/xen-scsifront.c 821 */;
	struct vscsifrnt_shadow {
		unsigned char act;
		uint8_t nr_segments;
		uint16_t rqid;
		uint16_t ref_rqid;
		unsigned int nr_grants;
		struct scsiif_request_segment *sg;
		struct scsiif_request_segment seg[VSCSIIF_SG_TABLESIZE];
		wait_queue_head_t wq_reset;
		int wait_reset;
		int32_t rslt_reset;
#define RSLT_RESET_WAITING 0
#define RSLT_RESET_ERR -1
		struct scsi_cmnd *sc;
		int gref[vscsiif_grants_sg(SG_ALL) + SG_ALL];
	} cocci_id/* drivers/scsi/xen-scsifront.c 79 */;
	struct xenbus_transaction cocci_id/* drivers/scsi/xen-scsifront.c 771 */;
	unsigned long cocci_id/* drivers/scsi/xen-scsifront.c 721 */;
	struct vscsiif_sring *cocci_id/* drivers/scsi/xen-scsifront.c 705 */;
	struct xenbus_device *cocci_id/* drivers/scsi/xen-scsifront.c 704 */;
	struct vscsifrnt_shadow cocci_id/* drivers/scsi/xen-scsifront.c 697 */;
	struct scsi_host_template cocci_id/* drivers/scsi/xen-scsifront.c 686 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/xen-scsifront.c 583 */;
	uint8_t cocci_id/* drivers/scsi/xen-scsifront.c 501 */;
	uint16_t cocci_id/* drivers/scsi/xen-scsifront.c 450 */;
	struct scsiif_request_segment cocci_id/* drivers/scsi/xen-scsifront.c 420 */;
	struct scsiif_request_segment *cocci_id/* drivers/scsi/xen-scsifront.c 404 */;
	struct scatterlist *cocci_id/* drivers/scsi/xen-scsifront.c 403 */;
	unsigned int cocci_id/* drivers/scsi/xen-scsifront.c 400 */;
	struct page *cocci_id/* drivers/scsi/xen-scsifront.c 397 */;
	grant_ref_t cocci_id/* drivers/scsi/xen-scsifront.c 396 */;
	struct vscsifrnt_shadow *cocci_id/* drivers/scsi/xen-scsifront.c 394 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/xen-scsifront.c 393 */;
	struct vscsiif_response cocci_id/* drivers/scsi/xen-scsifront.c 377 */;
	unsigned cocci_id/* drivers/scsi/xen-scsifront.c 376 */;
	irqreturn_t cocci_id/* drivers/scsi/xen-scsifront.c 363 */;
	void *cocci_id/* drivers/scsi/xen-scsifront.c 363 */;
	RING_IDX cocci_id/* drivers/scsi/xen-scsifront.c 325 */;
	struct vscsiif_response *cocci_id/* drivers/scsi/xen-scsifront.c 248 */;
	struct vscsiif_request *cocci_id/* drivers/scsi/xen-scsifront.c 182 */;
	struct vscsiif_front_ring *cocci_id/* drivers/scsi/xen-scsifront.c 181 */;
	uint32_t cocci_id/* drivers/scsi/xen-scsifront.c 155 */;
	struct vscsifrnt_info *cocci_id/* drivers/scsi/xen-scsifront.c 155 */;
	int cocci_id/* drivers/scsi/xen-scsifront.c 155 */;
	void __exit cocci_id/* drivers/scsi/xen-scsifront.c 1154 */;
	int __init cocci_id/* drivers/scsi/xen-scsifront.c 1145 */;
	struct xenbus_driver cocci_id/* drivers/scsi/xen-scsifront.c 1136 */;
	const struct xenbus_device_id cocci_id/* drivers/scsi/xen-scsifront.c 1131 */[];
	enum xenbus_state cocci_id/* drivers/scsi/xen-scsifront.c 1080 */;
	void cocci_id/* drivers/scsi/xen-scsifront.c 1079 */;
	struct vscsifrnt_info {
		struct xenbus_device *dev;
		struct Scsi_Host *host;
		int host_active;
		unsigned int evtchn;
		unsigned int irq;
		grant_ref_t ring_ref;
		struct vscsiif_front_ring ring;
		struct vscsiif_response ring_rsp;
		spinlock_t shadow_lock;
	DECLARE_BITMAP(shadow_free_bitmap,VSCSIIF_MAX_REQS)
		;
		struct vscsifrnt_shadow *shadow[VSCSIIF_MAX_REQS];
		wait_queue_head_t wq_sync;
		wait_queue_head_t wq_pause;
		unsigned int wait_ring_available:1;
		unsigned int waiting_pause:1;
		unsigned int pause:1;
		unsigned callers;
		char dev_state_path[64];
		struct task_struct *curr;
	} cocci_id/* drivers/scsi/xen-scsifront.c 103 */;
}
