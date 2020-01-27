cocci_test_suite() {
	struct errormap cocci_id/* net/9p/error.c 42 */[];
	struct hlist_head cocci_id/* net/9p/error.c 39 */[ERRHASHSZ];
	struct errormap {
		char *name;
		int val;
		int namelen;
		struct hlist_node list;
	} cocci_id/* net/9p/error.c 30 */;
	char *cocci_id/* net/9p/error.c 206 */;
	struct errormap *cocci_id/* net/9p/error.c 180 */;
	int cocci_id/* net/9p/error.c 178 */;
	void cocci_id/* net/9p/error.c 178 */;
}
