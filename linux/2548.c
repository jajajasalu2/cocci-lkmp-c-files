cocci_test_suite() {
	void cocci_id/* drivers/md/raid5.c 974 */(struct bio *bi);
	struct r5pending_data *cocci_id/* drivers/md/raid5.c 956 */;
	struct bio_list cocci_id/* drivers/md/raid5.c 955 */;
	struct bio_list *cocci_id/* drivers/md/raid5.c 953 */;
	struct r5pending_data cocci_id/* drivers/md/raid5.c 882 */;
	const struct r5pending_data *cocci_id/* drivers/md/raid5.c 881 */;
	void *cocci_id/* drivers/md/raid5.c 879 */;
	int __init cocci_id/* drivers/md/raid5.c 8486 */;
	struct md_personality cocci_id/* drivers/md/raid5.c 8460 */;
	const char *cocci_id/* drivers/md/raid5.c 8340 */;
	struct r0conf *cocci_id/* drivers/md/raid5.c 8103 */;
	struct mddev *cocci_id/* drivers/md/raid5.c 7818 */;
	struct md_rdev **cocci_id/* drivers/md/raid5.c 7600 */;
	char cocci_id/* drivers/md/raid5.c 7543 */[BDEVNAME_SIZE];
	struct disk_info *cocci_id/* drivers/md/raid5.c 7531 */;
	struct seq_file *cocci_id/* drivers/md/raid5.c 7511 */;
	long long cocci_id/* drivers/md/raid5.c 7158 */;
	struct bio cocci_id/* drivers/md/raid5.c 7081 */;
	char cocci_id/* drivers/md/raid5.c 6883 */[6];
	struct shrink_control *cocci_id/* drivers/md/raid5.c 6867 */;
	struct shrinker *cocci_id/* drivers/md/raid5.c 6866 */;
	struct raid5_percpu cocci_id/* drivers/md/raid5.c 6831 */;
	struct workqueue_struct *cocci_id/* drivers/md/raid5.c 68 */;
	struct r5conf cocci_id/* drivers/md/raid5.c 6779 */;
	struct hlist_node *cocci_id/* drivers/md/raid5.c 6777 */;
	struct raid5_percpu *cocci_id/* drivers/md/raid5.c 6755 */;
	struct r5worker_group cocci_id/* drivers/md/raid5.c 6693 */;
	struct r5worker cocci_id/* drivers/md/raid5.c 6691 */;
	struct r5worker *cocci_id/* drivers/md/raid5.c 6682 */;
	ssize_t cocci_id/* drivers/md/raid5.c 6681 */;
	struct r5worker_group **cocci_id/* drivers/md/raid5.c 6678 */;
	int *cocci_id/* drivers/md/raid5.c 6676 */;
	struct attribute_group cocci_id/* drivers/md/raid5.c 6670 */;
	struct attribute *cocci_id/* drivers/md/raid5.c 6659 */[];
	struct md_sysfs_entry cocci_id/* drivers/md/raid5.c 6654 */;
	int cocci_id/* drivers/md/raid5.c 6599 */(struct r5conf *conf,
						  int cnt, int *group_cnt,
						  int *worker_cnt_per_group,
						  struct r5worker_group **worker_groups);
	char *cocci_id/* drivers/md/raid5.c 6587 */;
	struct md_thread *cocci_id/* drivers/md/raid5.c 6280 */;
	struct blk_plug cocci_id/* drivers/md/raid5.c 6237 */;
	struct work_struct *cocci_id/* drivers/md/raid5.c 6229 */;
	struct stripe_head *cocci_id/* drivers/md/raid5.c 6184 */[MAX_STRIPE_BATCH];
	sector_t cocci_id/* drivers/md/raid5.c 5751 */(struct mddev *mddev,
						       sector_t sectors,
						       int raid_disks);
	const int cocci_id/* drivers/md/raid5.c 5584 */;
	struct raid5_plug_cb cocci_id/* drivers/md/raid5.c 5426 */;
	struct raid5_plug_cb *cocci_id/* drivers/md/raid5.c 5425 */;
	struct blk_plug_cb *cocci_id/* drivers/md/raid5.c 5423 */;
	struct raid5_plug_cb {
		struct blk_plug_cb cb;
		struct list_head list;
		struct list_head temp_inactive_list[NR_STRIPE_HASH_LOCKS];
	} cocci_id/* drivers/md/raid5.c 5417 */;
	typeof(*sh) cocci_id/* drivers/md/raid5.c 5363 */;
	unsigned long long cocci_id/* drivers/md/raid5.c 535 */;
	bool cocci_id/* drivers/md/raid5.c 5330 */;
	struct r5worker_group *cocci_id/* drivers/md/raid5.c 5329 */;
	struct list_head *cocci_id/* drivers/md/raid5.c 5328 */;
	int cocci_id/* drivers/md/raid5.c 5325 */;
	short cocci_id/* drivers/md/raid5.c 531 */;
	sector_t cocci_id/* drivers/md/raid5.c 530 */;
	struct stripe_head *cocci_id/* drivers/md/raid5.c 530 */;
	struct r5conf *cocci_id/* drivers/md/raid5.c 530 */;
	unsigned cocci_id/* drivers/md/raid5.c 5298 */;
	blk_status_t cocci_id/* drivers/md/raid5.c 5181 */;
	unsigned int *cocci_id/* drivers/md/raid5.c 5149 */;
	unsigned long cocci_id/* drivers/md/raid5.c 5137 */;
	struct bio *cocci_id/* drivers/md/raid5.c 5135 */;
	unsigned int cocci_id/* drivers/md/raid5.c 5121 */;
	struct stripe_head cocci_id/* drivers/md/raid5.c 5086 */;
	struct list_head cocci_id/* drivers/md/raid5.c 5082 */;
	void cocci_id/* drivers/md/raid5.c 485 */(sector_t stripe,
						  struct r5conf *conf,
						  int previous,
						  struct stripe_head *sh);
	struct stripe_head_state cocci_id/* drivers/md/raid5.c 4670 */;
	struct md_rdev *cocci_id/* drivers/md/raid5.c 4393 */;
	struct stripe_head_state *cocci_id/* drivers/md/raid5.c 4374 */;
	struct hlist_head *cocci_id/* drivers/md/raid5.c 423 */;
	void cocci_id/* drivers/md/raid5.c 3743 */(struct stripe_head *head_sh,
						   unsigned long handle_flags);
	struct llist_node *cocci_id/* drivers/md/raid5.c 359 */;
	struct r5dev *cocci_id/* drivers/md/raid5.c 3531 */[2];
	void cocci_id/* drivers/md/raid5.c 3330 */(struct r5conf *conf);
	struct bio **cocci_id/* drivers/md/raid5.c 3208 */;
	void cocci_id/* drivers/md/raid5.c 297 */;
	struct disk_info cocci_id/* drivers/md/raid5.c 2383 */;
	addr_conv_t cocci_id/* drivers/md/raid5.c 2235 */;
	struct r5dev cocci_id/* drivers/md/raid5.c 2204 */;
	size_t cocci_id/* drivers/md/raid5.c 2191 */;
	struct r5dev *cocci_id/* drivers/md/raid5.c 2149 */;
	gfp_t cocci_id/* drivers/md/raid5.c 2131 */;
	struct kmem_cache *cocci_id/* drivers/md/raid5.c 2131 */;
	addr_conv_t *cocci_id/* drivers/md/raid5.c 1398 */;
	signed cocci_id/* drivers/md/raid5.c 1240 */;
	enum async_tx_flags cocci_id/* drivers/md/raid5.c 1237 */;
	struct async_submit_ctl cocci_id/* drivers/md/raid5.c 1236 */;
	struct page *cocci_id/* drivers/md/raid5.c 1234 */;
	struct bvec_iter cocci_id/* drivers/md/raid5.c 1233 */;
	struct bio_vec cocci_id/* drivers/md/raid5.c 1232 */;
	struct page **cocci_id/* drivers/md/raid5.c 1228 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/md/raid5.c 1227 */;
}
