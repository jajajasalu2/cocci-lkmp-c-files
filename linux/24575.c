cocci_test_suite() {
	u8 cocci_id/* net/caif/cfserl.c 55 */;
	u16 cocci_id/* net/caif/cfserl.c 52 */;
	struct cfpkt *cocci_id/* net/caif/cfserl.c 49 */;
	struct cfserl cocci_id/* net/caif/cfserl.c 36 */;
	struct cfserl *cocci_id/* net/caif/cfserl.c 36 */;
	bool cocci_id/* net/caif/cfserl.c 34 */;
	struct cflayer *cocci_id/* net/caif/cfserl.c 34 */;
	int cocci_id/* net/caif/cfserl.c 34 */;
	void cocci_id/* net/caif/cfserl.c 31 */(struct cflayer *layr,
						enum caif_ctrlcmd ctrl,
						int phyid);
	int cocci_id/* net/caif/cfserl.c 29 */(struct cflayer *layr,
					       struct cfpkt *pkt);
	struct cfserl {
		struct cflayer layer;
		struct cfpkt *incomplete_frm;
		spinlock_t sync;
		bool usestx;
	} cocci_id/* net/caif/cfserl.c 21 */;
	enum caif_ctrlcmd cocci_id/* net/caif/cfserl.c 184 */;
	void cocci_id/* net/caif/cfserl.c 184 */;
}
