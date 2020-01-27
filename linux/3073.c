cocci_test_suite() {
	uint8_t cocci_id/* drivers/block/xen-blkback/blkback.c 977 */;
	struct blkif_request_segment *cocci_id/* drivers/block/xen-blkback/blkback.c 963 */;
	struct phys_req *cocci_id/* drivers/block/xen-blkback/blkback.c 958 */;
	struct seg_buf cocci_id/* drivers/block/xen-blkback/blkback.c 957 */[];
	uint32_t cocci_id/* drivers/block/xen-blkback/blkback.c 828 */;
	phys_addr_t cocci_id/* drivers/block/xen-blkback/blkback.c 811 */;
	struct gnttab_map_grant_ref cocci_id/* drivers/block/xen-blkback/blkback.c 808 */[BLKIF_MAX_SEGMENTS_PER_REQUEST];
	struct grant_page *cocci_id/* drivers/block/xen-blkback/blkback.c 805 */[];
	struct gntab_unmap_queue_data *cocci_id/* drivers/block/xen-blkback/blkback.c 754 */;
	struct gnttab_unmap_grant_ref *cocci_id/* drivers/block/xen-blkback/blkback.c 698 */;
	struct xen_vbd *cocci_id/* drivers/block/xen-blkback/blkback.c 615 */;
	irqreturn_t cocci_id/* drivers/block/xen-blkback/blkback.c 585 */;
	void *cocci_id/* drivers/block/xen-blkback/blkback.c 585 */;
	unsigned long long cocci_id/* drivers/block/xen-blkback/blkback.c 537 */;
	struct xenbus_device *cocci_id/* drivers/block/xen-blkback/blkback.c 536 */;
	struct xenbus_transaction cocci_id/* drivers/block/xen-blkback/blkback.c 534 */;
	blkif_sector_t cocci_id/* drivers/block/xen-blkback/blkback.c 515 */;
	struct pending_req cocci_id/* drivers/block/xen-blkback/blkback.c 477 */;
	unsigned long cocci_id/* drivers/block/xen-blkback/blkback.c 473 */;
	typeof(*ring) cocci_id/* drivers/block/xen-blkback/blkback.c 352 */;
	struct work_struct *cocci_id/* drivers/block/xen-blkback/blkback.c 346 */;
	struct gntab_unmap_queue_data cocci_id/* drivers/block/xen-blkback/blkback.c 312 */;
	struct rb_node *cocci_id/* drivers/block/xen-blkback/blkback.c 310 */;
	struct page *cocci_id/* drivers/block/xen-blkback/blkback.c 308 */[BLKIF_MAX_SEGMENTS_PER_REQUEST];
	struct gnttab_unmap_grant_ref cocci_id/* drivers/block/xen-blkback/blkback.c 307 */[BLKIF_MAX_SEGMENTS_PER_REQUEST];
	struct rb_root *cocci_id/* drivers/block/xen-blkback/blkback.c 304 */;
	grant_ref_t cocci_id/* drivers/block/xen-blkback/blkback.c 268 */;
	struct persistent_gnt cocci_id/* drivers/block/xen-blkback/blkback.c 245 */;
	struct xen_blkif *cocci_id/* drivers/block/xen-blkback/blkback.c 235 */;
	struct rb_node **cocci_id/* drivers/block/xen-blkback/blkback.c 233 */;
	struct persistent_gnt *cocci_id/* drivers/block/xen-blkback/blkback.c 231 */;
	void cocci_id/* drivers/block/xen-blkback/blkback.c 209 */(struct xen_blkif_ring *ring,
								   u64 id,
								   unsigned short op,
								   int st);
	int cocci_id/* drivers/block/xen-blkback/blkback.c 206 */(struct xen_blkif_ring *ring,
								  struct blkif_request *req,
								  struct pending_req *pending_req);
	int cocci_id/* drivers/block/xen-blkback/blkback.c 205 */(struct xen_blkif_ring *ring);
	struct page *cocci_id/* drivers/block/xen-blkback/blkback.c 180 */[NUM_BATCH_FREE_PAGES];
	struct page cocci_id/* drivers/block/xen-blkback/blkback.c 156 */;
	void __exit cocci_id/* drivers/block/xen-blkback/blkback.c 1509 */;
	int __init cocci_id/* drivers/block/xen-blkback/blkback.c 1479 */;
	struct page **cocci_id/* drivers/block/xen-blkback/blkback.c 145 */;
	struct blkif_response *cocci_id/* drivers/block/xen-blkback/blkback.c 1443 */;
	u64 cocci_id/* drivers/block/xen-blkback/blkback.c 1440 */;
	unsigned short cocci_id/* drivers/block/xen-blkback/blkback.c 1239 */;
	struct grant_page **cocci_id/* drivers/block/xen-blkback/blkback.c 1238 */;
	bool cocci_id/* drivers/block/xen-blkback/blkback.c 1237 */;
	struct blk_plug cocci_id/* drivers/block/xen-blkback/blkback.c 1236 */;
	struct bio **cocci_id/* drivers/block/xen-blkback/blkback.c 1232 */;
	struct bio *cocci_id/* drivers/block/xen-blkback/blkback.c 1231 */;
	unsigned int cocci_id/* drivers/block/xen-blkback/blkback.c 1230 */;
	struct seg_buf *cocci_id/* drivers/block/xen-blkback/blkback.c 1229 */;
	RING_IDX cocci_id/* drivers/block/xen-blkback/blkback.c 1129 */;
	struct pending_req *cocci_id/* drivers/block/xen-blkback/blkback.c 1128 */;
	struct blkif_request cocci_id/* drivers/block/xen-blkback/blkback.c 1127 */;
	union blkif_back_rings *cocci_id/* drivers/block/xen-blkback/blkback.c 1126 */;
	struct xen_blkif_ring *cocci_id/* drivers/block/xen-blkback/blkback.c 1124 */;
	int cocci_id/* drivers/block/xen-blkback/blkback.c 1123 */;
	blk_status_t cocci_id/* drivers/block/xen-blkback/blkback.c 1079 */;
	void cocci_id/* drivers/block/xen-blkback/blkback.c 1078 */;
	struct phys_req cocci_id/* drivers/block/xen-blkback/blkback.c 1016 */;
	struct block_device *cocci_id/* drivers/block/xen-blkback/blkback.c 1014 */;
	struct blkif_request *cocci_id/* drivers/block/xen-blkback/blkback.c 1009 */;
}
