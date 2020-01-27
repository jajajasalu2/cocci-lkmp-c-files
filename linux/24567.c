cocci_test_suite() {
	struct cfpkt *cocci_id/* net/caif/cffrml.c 82 */;
	u16 cocci_id/* net/caif/cffrml.c 74 */;
	void *cocci_id/* net/caif/cffrml.c 74 */;
	int cocci_id/* net/caif/cffrml.c 40 */;
	struct cffrml cocci_id/* net/caif/cffrml.c 37 */;
	struct cffrml *cocci_id/* net/caif/cffrml.c 37 */;
	bool cocci_id/* net/caif/cffrml.c 35 */;
	struct cflayer *cocci_id/* net/caif/cffrml.c 35 */;
	u32 cocci_id/* net/caif/cffrml.c 34 */;
	void cocci_id/* net/caif/cffrml.c 30 */(struct cflayer *layr,
						enum caif_ctrlcmd ctrl,
						int phyid);
	int cocci_id/* net/caif/cffrml.c 28 */(struct cflayer *layr,
					       struct cfpkt *pkt);
	struct cffrml {
		struct cflayer layer;
		bool dofcs;
		int __percpu *pcpu_refcnt;
	} cocci_id/* net/caif/cffrml.c 22 */;
	enum caif_ctrlcmd cocci_id/* net/caif/cffrml.c 169 */;
	void cocci_id/* net/caif/cffrml.c 169 */;
	__le16 cocci_id/* net/caif/cffrml.c 141 */;
}
