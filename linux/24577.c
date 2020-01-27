cocci_test_suite() {
	struct cfpkt *cocci_id/* net/caif/cfrfml.c 97 */;
	int *cocci_id/* net/caif/cfrfml.c 72 */;
	char *cocci_id/* net/caif/cfrfml.c 71 */;
	struct cfrfml cocci_id/* net/caif/cfrfml.c 49 */;
	struct cfrfml *cocci_id/* net/caif/cfrfml.c 49 */;
	int cocci_id/* net/caif/cfrfml.c 46 */;
	u8 cocci_id/* net/caif/cfrfml.c 45 */;
	struct dev_info *cocci_id/* net/caif/cfrfml.c 45 */;
	struct cflayer *cocci_id/* net/caif/cfrfml.c 45 */;
	struct cfsrvl cocci_id/* net/caif/cfrfml.c 36 */;
	struct cfsrvl *cocci_id/* net/caif/cfrfml.c 36 */;
	void cocci_id/* net/caif/cfrfml.c 34 */;
	struct cfrfml {
		struct cfsrvl serv;
		struct cfpkt *incomplete_frm;
		int fragment_size;
		u8 seghead[6];
		u16 pdu_size;
		spinlock_t sync;
	} cocci_id/* net/caif/cfrfml.c 24 */;
	int cocci_id/* net/caif/cfrfml.c 21 */(struct cflayer *layr,
					       struct cfpkt *pkt);
	u8 cocci_id/* net/caif/cfrfml.c 102 */[6];
	bool cocci_id/* net/caif/cfrfml.c 100 */;
}
