cocci_test_suite() {
	unsigned int cocci_id/* net/xfrm/xfrm_algo.c 753 */;
	struct xfrm_aead_name cocci_id/* net/xfrm/xfrm_algo.c 743 */;
	const struct xfrm_aead_name *cocci_id/* net/xfrm/xfrm_algo.c 734 */;
	const void *cocci_id/* net/xfrm/xfrm_algo.c 732 */;
	const struct xfrm_algo_desc *cocci_id/* net/xfrm/xfrm_algo.c 731 */;
	struct xfrm_aead_name {
		const char *name;
		int icvbits;
	} cocci_id/* net/xfrm/xfrm_algo.c 726 */;
	const char *cocci_id/* net/xfrm/xfrm_algo.c 705 */;
	void *cocci_id/* net/xfrm/xfrm_algo.c 678 */;
	unsigned long cocci_id/* net/xfrm/xfrm_algo.c 678 */;
	struct xfrm_algo_desc *cocci_id/* net/xfrm/xfrm_algo.c 675 */;
	int cocci_id/* net/xfrm/xfrm_algo.c 642 */(const struct xfrm_algo_desc *entry,
						   const void *data);
	const struct xfrm_algo_list *cocci_id/* net/xfrm/xfrm_algo.c 641 */;
	const struct xfrm_algo_list cocci_id/* net/xfrm/xfrm_algo.c 619 */;
	struct xfrm_algo_list {
		struct xfrm_algo_desc *algs;
		int entries;
		u32 type;
		u32 mask;
	} cocci_id/* net/xfrm/xfrm_algo.c 605 */;
	int cocci_id/* net/xfrm/xfrm_algo.c 590 */;
	void cocci_id/* net/xfrm/xfrm_algo.c 590 */;
	struct xfrm_algo_desc cocci_id/* net/xfrm/xfrm_algo.c 174 */[];
}
