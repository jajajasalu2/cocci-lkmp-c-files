cocci_test_suite() {
	struct faulty_conf {
		int period[Modes];
		atomic_t counters[Modes];
		sector_t faults[MaxFault];
		int modes[MaxFault];
		int nfaults;
		struct md_rdev *rdev;
	} cocci_id/* drivers/md/md-faulty.c 76 */;
	struct bio *cocci_id/* drivers/md/md-faulty.c 64 */;
	int __init cocci_id/* drivers/md/md-faulty.c 347 */;
	struct md_personality cocci_id/* drivers/md/md-faulty.c 334 */;
	struct mddev *cocci_id/* drivers/md/md-faulty.c 327 */;
	void *cocci_id/* drivers/md/md-faulty.c 327 */;
	struct md_rdev *cocci_id/* drivers/md/md-faulty.c 296 */;
	struct seq_file *cocci_id/* drivers/md/md-faulty.c 221 */;
	bool cocci_id/* drivers/md/md-faulty.c 164 */;
	sector_t cocci_id/* drivers/md/md-faulty.c 124 */;
	struct faulty_conf *cocci_id/* drivers/md/md-faulty.c 124 */;
	int cocci_id/* drivers/md/md-faulty.c 124 */;
	void cocci_id/* drivers/md/md-faulty.c 124 */;
}
