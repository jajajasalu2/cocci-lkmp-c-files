cocci_test_suite() {
	enum drbd_on_congestion cocci_id/* drivers/block/drbd/drbd_req.c 995 */;
	sector_t cocci_id/* drivers/block/drbd/drbd_req.c 964 */;
	struct drbd_interval *cocci_id/* drivers/block/drbd/drbd_req.c 963 */;
	struct drbd_request cocci_id/* drivers/block/drbd/drbd_req.c 93 */;
	struct backing_dev_info *cocci_id/* drivers/block/drbd/drbd_req.c 922 */;
	struct kref *cocci_id/* drivers/block/drbd/drbd_req.c 91 */;
	struct rb_root *cocci_id/* drivers/block/drbd/drbd_req.c 78 */;
	struct net_conf *cocci_id/* drivers/block/drbd/drbd_req.c 571 */;
	struct drbd_connection *const cocci_id/* drivers/block/drbd/drbd_req.c 570 */;
	struct drbd_peer_device *const cocci_id/* drivers/block/drbd/drbd_req.c 569 */;
	struct drbd_device *const cocci_id/* drivers/block/drbd/drbd_req.c 568 */;
	struct bio_and_error *cocci_id/* drivers/block/drbd/drbd_req.c 566 */;
	enum drbd_req_event cocci_id/* drivers/block/drbd/drbd_req.c 565 */;
	int cocci_id/* drivers/block/drbd/drbd_req.c 565 */;
	unsigned long long cocci_id/* drivers/block/drbd/drbd_req.c 535 */;
	char cocci_id/* drivers/block/drbd/drbd_req.c 528 */[BDEVNAME_SIZE];
	unsigned cocci_id/* drivers/block/drbd/drbd_req.c 423 */;
	const unsigned cocci_id/* drivers/block/drbd/drbd_req.c 381 */;
	struct drbd_connection *cocci_id/* drivers/block/drbd/drbd_req.c 375 */;
	struct drbd_peer_device *cocci_id/* drivers/block/drbd/drbd_req.c 373 */;
	struct request_queue *cocci_id/* drivers/block/drbd/drbd_req.c 36 */;
	bool cocci_id/* drivers/block/drbd/drbd_req.c 22 */(struct drbd_device *device,
							    sector_t sector,
							    int size);
	struct timer_list *cocci_id/* drivers/block/drbd/drbd_req.c 1706 */;
	blk_qc_t cocci_id/* drivers/block/drbd/drbd_req.c 1615 */;
	struct drbd_device cocci_id/* drivers/block/drbd/drbd_req.c 1517 */;
	struct work_struct *cocci_id/* drivers/block/drbd/drbd_req.c 1515 */;
	struct blk_plug cocci_id/* drivers/block/drbd/drbd_req.c 1501 */;
	struct list_head *cocci_id/* drivers/block/drbd/drbd_req.c 1473 */;
	struct drbd_request *cocci_id/* drivers/block/drbd/drbd_req.c 1440 */;
	struct drbd_device *cocci_id/* drivers/block/drbd/drbd_req.c 1438 */;
	struct bio *cocci_id/* drivers/block/drbd/drbd_req.c 1438 */;
	unsigned long cocci_id/* drivers/block/drbd/drbd_req.c 1438 */;
	void cocci_id/* drivers/block/drbd/drbd_req.c 1438 */;
	struct bio_and_error cocci_id/* drivers/block/drbd/drbd_req.c 1326 */;
	struct drbd_plug_cb cocci_id/* drivers/block/drbd/drbd_req.c 1305 */;
	struct blk_plug_cb *cocci_id/* drivers/block/drbd/drbd_req.c 1302 */;
	struct drbd_resource *cocci_id/* drivers/block/drbd/drbd_req.c 1297 */;
	struct drbd_plug_cb *cocci_id/* drivers/block/drbd/drbd_req.c 1297 */;
	struct drbd_plug_cb {
		struct blk_plug_cb cb;
		struct drbd_request *most_recent_req;
	} cocci_id/* drivers/block/drbd/drbd_req.c 1271 */;
	const union drbd_dev_state cocci_id/* drivers/block/drbd/drbd_req.c 1267 */;
	const int cocci_id/* drivers/block/drbd/drbd_req.c 1211 */;
	unsigned int cocci_id/* drivers/block/drbd/drbd_req.c 1160 */;
	union drbd_dev_state cocci_id/* drivers/block/drbd/drbd_req.c 1089 */;
	enum drbd_read_balancing cocci_id/* drivers/block/drbd/drbd_req.c 1050 */;
	bool cocci_id/* drivers/block/drbd/drbd_req.c 1047 */;
}
