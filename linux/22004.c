cocci_test_suite() {
	struct pad cocci_id/* lib/reed_solomon/test_rslib.c 90 */[];
	struct pad {
		int mult;
		int shift;
	} cocci_id/* lib/reed_solomon/test_rslib.c 85 */;
	struct wspace {
		uint16_t *c;
		uint16_t *r;
		uint16_t *s;
		uint16_t *corr;
		int *errlocs;
		int *derrlocs;
	} cocci_id/* lib/reed_solomon/test_rslib.c 76 */;
	struct bcstat {
		int rfail;
		int rsuccess;
		int noncw;
		int nwords;
	} cocci_id/* lib/reed_solomon/test_rslib.c 69 */;
	struct estat {
		int dwrong;
		int irv;
		int wepos;
		int nwords;
	} cocci_id/* lib/reed_solomon/test_rslib.c 62 */;
	void __exit cocci_id/* lib/reed_solomon/test_rslib.c 509 */;
	int __init cocci_id/* lib/reed_solomon/test_rslib.c 487 */;
	struct etab cocci_id/* lib/reed_solomon/test_rslib.c 46 */[];
	struct etab *cocci_id/* lib/reed_solomon/test_rslib.c 442 */;
	struct bcstat cocci_id/* lib/reed_solomon/test_rslib.c 410 */;
	struct bcstat *cocci_id/* lib/reed_solomon/test_rslib.c 367 */;
	struct etab {
		int symsize;
		int genpoly;
		int fcs;
		int prim;
		int nroots;
		int ntrials;
	} cocci_id/* lib/reed_solomon/test_rslib.c 36 */;
	struct estat cocci_id/* lib/reed_solomon/test_rslib.c 322 */;
	const char *const cocci_id/* lib/reed_solomon/test_rslib.c 316 */[];
	struct estat *cocci_id/* lib/reed_solomon/test_rslib.c 261 */;
	uint16_t *cocci_id/* lib/reed_solomon/test_rslib.c 229 */;
	struct rs_control *cocci_id/* lib/reed_solomon/test_rslib.c 229 */;
	void cocci_id/* lib/reed_solomon/test_rslib.c 229 */;
	int *cocci_id/* lib/reed_solomon/test_rslib.c 221 */;
	enum method{CORR_BUFFER, CALLER_SYNDROME, IN_PLACE,} cocci_id/* lib/reed_solomon/test_rslib.c 21 */;
	enum verbosity{V_SILENT, V_PROGRESS, V_CSUMMARY,} cocci_id/* lib/reed_solomon/test_rslib.c 15 */;
	uint16_t cocci_id/* lib/reed_solomon/test_rslib.c 119 */;
	int cocci_id/* lib/reed_solomon/test_rslib.c 110 */;
	struct wspace *cocci_id/* lib/reed_solomon/test_rslib.c 108 */;
	struct rs_codec *cocci_id/* lib/reed_solomon/test_rslib.c 108 */;
}
