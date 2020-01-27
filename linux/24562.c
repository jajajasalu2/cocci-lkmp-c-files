cocci_test_suite() {
	struct cfcnfg cocci_id/* net/caif/cfcnfg.c 80 */;
	struct cfctrl_rsp *cocci_id/* net/caif/cfcnfg.c 75 */;
	void cocci_id/* net/caif/cfcnfg.c 70 */(void);
	void cocci_id/* net/caif/cfcnfg.c 67 */(struct cflayer *layer,
						u8 channel_id,
						struct cflayer *adapt_layer);
	void cocci_id/* net/caif/cfcnfg.c 66 */(struct cflayer *layer,
						u8 channel_id);
	void cocci_id/* net/caif/cfcnfg.c 63 */(struct cflayer *layer,
						u8 channel_id,
						enum cfctrl_srv serv,
						u8 phyid,
						struct cflayer *adapt_layer);
	u16 cocci_id/* net/caif/cfcnfg.c 557 */;
	struct cfcnfg {
		struct cflayer layer;
		struct cflayer *ctrl;
		struct cflayer *mux;
		struct list_head phys;
		struct mutex lock;
	} cocci_id/* net/caif/cfcnfg.c 55 */;
	struct cfcnfg_phyinfo cocci_id/* net/caif/cfcnfg.c 479 */;
	bool cocci_id/* net/caif/cfcnfg.c 458 */;
	struct net_device *cocci_id/* net/caif/cfcnfg.c 455 */;
	void cocci_id/* net/caif/cfcnfg.c 453 */;
	enum cfctrl_srv cocci_id/* net/caif/cfcnfg.c 372 */;
	struct cfcnfg *cocci_id/* net/caif/cfcnfg.c 308 */;
	struct cfctrl_link_param cocci_id/* net/caif/cfcnfg.c 307 */;
	struct cfcnfg_phyinfo *cocci_id/* net/caif/cfcnfg.c 305 */;
	struct cflayer *cocci_id/* net/caif/cfcnfg.c 301 */;
	int *cocci_id/* net/caif/cfcnfg.c 301 */;
	struct net *cocci_id/* net/caif/cfcnfg.c 300 */;
	struct caif_connect_request *cocci_id/* net/caif/cfcnfg.c 300 */;
	int cocci_id/* net/caif/cfcnfg.c 300 */;
	struct cfcnfg_phyinfo {
		struct list_head node;
		bool up;
		struct cflayer *frm_layer;
		struct cflayer *phy_layer;
		unsigned int id;
		enum cfcnfg_phy_preference pref;
		struct dev_info dev_info;
		int ifindex;
		int head_room;
		bool use_fcs;
	} cocci_id/* net/caif/cfcnfg.c 29 */;
	enum cfcnfg_phy_preference cocci_id/* net/caif/cfcnfg.c 223 */;
	struct dev_info *cocci_id/* net/caif/cfcnfg.c 222 */;
	struct cfctrl_link_param *cocci_id/* net/caif/cfcnfg.c 220 */;
	const int cocci_id/* net/caif/cfcnfg.c 209 */[CFCTRL_SRV_MASK];
	u8 cocci_id/* net/caif/cfcnfg.c 181 */;
}
