cocci_test_suite() {
	struct r10bio cocci_id/* drivers/md/raid10.c 94 */;
	void *cocci_id/* drivers/md/raid10.c 910 */;
	gfp_t cocci_id/* drivers/md/raid10.c 91 */;
	struct blk_plug cocci_id/* drivers/md/raid10.c 884 */;
	struct request_queue *cocci_id/* drivers/md/raid10.c 867 */;
	void cocci_id/* drivers/md/raid10.c 74 */(struct bio *bio);
	void cocci_id/* drivers/md/raid10.c 73 */(struct mddev *mddev,
						  struct r10bio *r10_bio);
	sector_t cocci_id/* drivers/md/raid10.c 71 */(struct mddev *mddev,
						      sector_t sector_nr,
						      int *skipped);
	const sector_t cocci_id/* drivers/md/raid10.c 707 */;
	int cocci_id/* drivers/md/raid10.c 70 */(struct r10conf *conf,
						 int ignore);
	int cocci_id/* drivers/md/raid10.c 69 */(struct r10conf *conf,
						 int previous, int ignore);
	void cocci_id/* drivers/md/raid10.c 67 */(struct r10conf *conf);
	sector_t cocci_id/* drivers/md/raid10.c 564 */;
	struct geom *cocci_id/* drivers/md/raid10.c 561 */;
	int __init cocci_id/* drivers/md/raid10.c 4935 */;
	struct md_personality cocci_id/* drivers/md/raid10.c 4910 */;
	int cocci_id/* drivers/md/raid10.c 4676 */(struct mddev *mddev,
						   struct r10bio *r10_bio);
	void cocci_id/* drivers/md/raid10.c 4675 */(struct r10bio *r10_bio);
	struct mdp_superblock_1 *cocci_id/* drivers/md/raid10.c 4259 */;
	struct raid10_info cocci_id/* drivers/md/raid10.c 4110 */;
	struct geom cocci_id/* drivers/md/raid10.c 4085 */;
	struct r0conf *cocci_id/* drivers/md/raid10.c 4048 */;
	long long cocci_id/* drivers/md/raid10.c 3777 */;
	struct r10conf cocci_id/* drivers/md/raid10.c 3653 */;
	enum geo_type cocci_id/* drivers/md/raid10.c 3575 */;
	enum geo_type{geo_new, geo_old, geo_start,} cocci_id/* drivers/md/raid10.c 3574 */;
	int *cocci_id/* drivers/md/raid10.c 325 */;
	struct rsync_pages *cocci_id/* drivers/md/raid10.c 2806 */;
	struct list_head *cocci_id/* drivers/md/raid10.c 2717 */;
	struct md_thread *cocci_id/* drivers/md/raid10.c 2711 */;
	bool cocci_id/* drivers/md/raid10.c 2661 */;
	unsigned long long cocci_id/* drivers/md/raid10.c 2450 */;
	struct bio **cocci_id/* drivers/md/raid10.c 242 */;
	char cocci_id/* drivers/md/raid10.c 2351 */[BDEVNAME_SIZE];
	struct page *cocci_id/* drivers/md/raid10.c 2299 */;
	unsigned int cocci_id/* drivers/md/raid10.c 2272 */;
	unsigned long cocci_id/* drivers/md/raid10.c 2271 */;
	long cocci_id/* drivers/md/raid10.c 2270 */;
	struct page **cocci_id/* drivers/md/raid10.c 2158 */;
	struct r10conf *cocci_id/* drivers/md/raid10.c 1885 */;
	struct r10bio *cocci_id/* drivers/md/raid10.c 1883 */;
	struct bio *cocci_id/* drivers/md/raid10.c 1883 */;
	int cocci_id/* drivers/md/raid10.c 1883 */;
	void cocci_id/* drivers/md/raid10.c 1883 */;
	struct md_rdev **cocci_id/* drivers/md/raid10.c 1827 */;
	struct raid10_info *cocci_id/* drivers/md/raid10.c 1783 */;
	struct md_rdev *cocci_id/* drivers/md/raid10.c 1606 */;
	struct seq_file *cocci_id/* drivers/md/raid10.c 1554 */;
	struct mddev *cocci_id/* drivers/md/raid10.c 1500 */;
	struct resync_pages cocci_id/* drivers/md/raid10.c 140 */;
	struct resync_pages *cocci_id/* drivers/md/raid10.c 123 */;
	const unsigned long cocci_id/* drivers/md/raid10.c 1140 */;
	const int cocci_id/* drivers/md/raid10.c 1139 */;
	struct raid10_plug_cb cocci_id/* drivers/md/raid10.c 1071 */;
	struct raid10_plug_cb *cocci_id/* drivers/md/raid10.c 1071 */;
	struct blk_plug_cb *cocci_id/* drivers/md/raid10.c 1069 */;
	struct raid10_plug_cb {
		struct blk_plug_cb cb;
		struct bio_list pending;
		int pending_cnt;
	} cocci_id/* drivers/md/raid10.c 1063 */;
}
