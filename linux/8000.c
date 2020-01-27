cocci_test_suite() {
	void cocci_id/* drivers/net/fddi/skfp/smt.c 99 */(struct s_smc *smc);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 95 */(struct s_smc *smc,
							  struct smt_p_echo *echo,
							  u_long seed,
							  int len);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 94 */(struct s_smc *smc,
							  struct smt_p_setcount *setcount);
	struct smt_nif cocci_id/* drivers/net/fddi/skfp/smt.c 938 */;
	struct smt_nif *cocci_id/* drivers/net/fddi/skfp/smt.c 935 */;
	void cocci_id/* drivers/net/fddi/skfp/smt.c 93 */(struct s_smc *smc,
							  struct smp_p_user *user);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 91 */(struct s_smc *smc,
							  struct smp_p_manufacturer *man);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 90 */(struct s_smc *smc,
							  struct smt_p_mac_fnc *fnc);
	unsigned int cocci_id/* drivers/net/fddi/skfp/smt.c 898 */;
	void cocci_id/* drivers/net/fddi/skfp/smt.c 89 */(struct s_smc *smc,
							  struct smt_p_mac_counter *mc);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 88 */(struct s_smc *smc,
							  struct smt_p_fsc *fsc);
	struct smt_rdf cocci_id/* drivers/net/fddi/skfp/smt.c 877 */;
	void cocci_id/* drivers/net/fddi/skfp/smt.c 87 */(struct s_smc *smc,
							  struct smt_p_version *vers);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 86 */(struct s_smc *smc,
							  struct smt_p_lem *lem,
							  int phy);
	struct smt_rdf *cocci_id/* drivers/net/fddi/skfp/smt.c 859 */;
	void cocci_id/* drivers/net/fddi/skfp/smt.c 85 */(struct s_smc *smc,
							  struct smt_p_mac_status *st);
	int cocci_id/* drivers/net/fddi/skfp/smt.c 84 */(struct s_smc *smc,
							 struct smt_p_path *path);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 83 */(struct s_smc *smc,
							  struct smt_p_neighbor *neighbor);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 82 */(struct s_smc *smc,
							  struct smt_p_latency *latency);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 81 */(struct s_smc *smc,
							  struct smt_p_policy *policy);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 80 */(struct s_smc *smc,
							  struct smt_p_timestamp *ts);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 79 */(struct s_smc *smc,
							  struct smt_p_state *state);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 78 */(struct s_smc *smc,
							  struct smt_p_sde *sde);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 77 */(struct s_smc *smc,
							  struct smt_p_una *una);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 76 */(SMbuf *mb, int len);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 74 */(char *data,
							  const char *format,
							  int len);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 69 */(struct s_smc *smc,
							  struct fddi_addr *dest,
							  u_long tid,
							  int local);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 68 */(struct s_smc *smc,
							  int dna);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 66 */(struct s_smc *smc,
							  struct fddi_addr *dest,
							  int fc, u_long tid,
							  int type, int len);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 64 */(struct s_smc *smc,
							  const struct fddi_addr *dest,
							  int fc, u_long tid,
							  int type, int local);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 62 */(struct s_smc *smc,
							  SMbuf *rej, int fc,
							  int reason,
							  int local);
	int cocci_id/* drivers/net/fddi/skfp/smt.c 61 */(struct s_smc *smc,
							 int phy);
	int cocci_id/* drivers/net/fddi/skfp/smt.c 60 */(struct s_smc *smc,
							 int mac);
	int cocci_id/* drivers/net/fddi/skfp/smt.c 56 */(u_short s);
	const struct fddi_addr cocci_id/* drivers/net/fddi/skfp/smt.c 48 */;
	u_long cocci_id/* drivers/net/fddi/skfp/smt.c 448 */;
	const char *constcocci_id/* drivers/net/fddi/skfp/smt.c 41 */[];
	struct s_phy *cocci_id/* drivers/net/fddi/skfp/smt.c 285 */;
	struct fddi_mib_m *cocci_id/* drivers/net/fddi/skfp/smt.c 280 */;
	const char cocci_id/* drivers/net/fddi/skfp/smt.c 24 */[];
	void cocci_id/* drivers/net/fddi/skfp/smt.c 2017 */;
	const char *cocci_id/* drivers/net/fddi/skfp/smt.c 1868 */;
	const struct smt_pdef *cocci_id/* drivers/net/fddi/skfp/smt.c 1825 */;
	struct s_smc *cocci_id/* drivers/net/fddi/skfp/smt.c 1806 */;
	char cocci_id/* drivers/net/fddi/skfp/smt.c 1722 */[6 * 3];
	int cocci_id/* drivers/net/fddi/skfp/smt.c 1721 */;
	struct fddi_addr *cocci_id/* drivers/net/fddi/skfp/smt.c 1719 */;
	char *cocci_id/* drivers/net/fddi/skfp/smt.c 1719 */;
	struct smt_para *cocci_id/* drivers/net/fddi/skfp/smt.c 1671 */;
	struct smt_header *cocci_id/* drivers/net/fddi/skfp/smt.c 1659 */;
	void *cocci_id/* drivers/net/fddi/skfp/smt.c 1659 */;
	const u_short *cocci_id/* drivers/net/fddi/skfp/smt.c 1648 */;
	struct smt_p_3210 cocci_id/* drivers/net/fddi/skfp/smt.c 1635 */;
	struct smt_p_320f cocci_id/* drivers/net/fddi/skfp/smt.c 1634 */;
	struct smt_p_320b cocci_id/* drivers/net/fddi/skfp/smt.c 1633 */;
	struct smt_p_001d cocci_id/* drivers/net/fddi/skfp/smt.c 1618 */;
	struct smt_p_001c cocci_id/* drivers/net/fddi/skfp/smt.c 1617 */;
	struct smt_p_001b cocci_id/* drivers/net/fddi/skfp/smt.c 1616 */;
	struct smt_p_001a cocci_id/* drivers/net/fddi/skfp/smt.c 1615 */;
	struct smt_p_0019 cocci_id/* drivers/net/fddi/skfp/smt.c 1614 */;
	struct smt_p_0018 cocci_id/* drivers/net/fddi/skfp/smt.c 1613 */;
	struct smt_p_0017 cocci_id/* drivers/net/fddi/skfp/smt.c 1612 */;
	struct smt_p_0016 cocci_id/* drivers/net/fddi/skfp/smt.c 1611 */;
	struct smt_p_0015 cocci_id/* drivers/net/fddi/skfp/smt.c 1610 */;
	struct smt_p_version cocci_id/* drivers/net/fddi/skfp/smt.c 1607 */;
	struct smt_p_refused cocci_id/* drivers/net/fddi/skfp/smt.c 1605 */;
	struct smt_p_reason cocci_id/* drivers/net/fddi/skfp/smt.c 1603 */;
	struct smp_p_manufacturer cocci_id/* drivers/net/fddi/skfp/smt.c 1601 */;
	struct smt_p_eb cocci_id/* drivers/net/fddi/skfp/smt.c 1599 */;
	struct smt_p_priority cocci_id/* drivers/net/fddi/skfp/smt.c 1597 */;
	struct smt_p_mac_fnc cocci_id/* drivers/net/fddi/skfp/smt.c 1595 */;
	struct smt_p_mac_counter cocci_id/* drivers/net/fddi/skfp/smt.c 1593 */;
	struct smt_p_lem cocci_id/* drivers/net/fddi/skfp/smt.c 1591 */;
	struct smt_p_mac_status cocci_id/* drivers/net/fddi/skfp/smt.c 1589 */;
	struct smt_p_path cocci_id/* drivers/net/fddi/skfp/smt.c 1587 */;
	struct smt_p_neighbor cocci_id/* drivers/net/fddi/skfp/smt.c 1585 */;
	struct smt_p_latency cocci_id/* drivers/net/fddi/skfp/smt.c 1583 */;
	struct smt_p_policy cocci_id/* drivers/net/fddi/skfp/smt.c 1581 */;
	struct smt_p_timestamp cocci_id/* drivers/net/fddi/skfp/smt.c 1579 */;
	struct smt_p_state cocci_id/* drivers/net/fddi/skfp/smt.c 1577 */;
	struct smt_p_sde cocci_id/* drivers/net/fddi/skfp/smt.c 1575 */;
	struct smt_p_una cocci_id/* drivers/net/fddi/skfp/smt.c 1573 */;
	const struct smt_pdef {
		int ptype;
		int plen;
		const char *pswap;
	} cocci_id/* drivers/net/fddi/skfp/smt.c 1568 */[];
	u_char cocci_id/* drivers/net/fddi/skfp/smt.c 1535 */;
	u_char *cocci_id/* drivers/net/fddi/skfp/smt.c 1529 */;
	struct smt_p_echo *cocci_id/* drivers/net/fddi/skfp/smt.c 1526 */;
	struct smt_p_setcount *cocci_id/* drivers/net/fddi/skfp/smt.c 1514 */;
	struct smp_p_user *cocci_id/* drivers/net/fddi/skfp/smt.c 1503 */;
	struct smp_p_manufacturer *cocci_id/* drivers/net/fddi/skfp/smt.c 1492 */;
	struct smt_p_mac_fnc *cocci_id/* drivers/net/fddi/skfp/smt.c 1479 */;
	struct smt_p_mac_counter *cocci_id/* drivers/net/fddi/skfp/smt.c 1467 */;
	const u_short cocci_id/* drivers/net/fddi/skfp/smt.c 146 */[];
	struct smt_p_fsc *cocci_id/* drivers/net/fddi/skfp/smt.c 1447 */;
	struct smt_p_version *cocci_id/* drivers/net/fddi/skfp/smt.c 1428 */;
	struct fddi_mib_p *cocci_id/* drivers/net/fddi/skfp/smt.c 1408 */;
	struct smt_p_lem *cocci_id/* drivers/net/fddi/skfp/smt.c 1406 */;
	struct smt_p_mac_status *cocci_id/* drivers/net/fddi/skfp/smt.c 1379 */;
	u_short cocci_id/* drivers/net/fddi/skfp/smt.c 1358 */;
	struct smt_phy_rec cocci_id/* drivers/net/fddi/skfp/smt.c 1345 */;
	struct smt_mac_rec cocci_id/* drivers/net/fddi/skfp/smt.c 1344 */;
	struct smt_mac_rec *cocci_id/* drivers/net/fddi/skfp/smt.c 1341 */;
	struct smt_phy_rec *cocci_id/* drivers/net/fddi/skfp/smt.c 1340 */;
	struct smt_p_path *cocci_id/* drivers/net/fddi/skfp/smt.c 1331 */;
	struct smt_p_neighbor *cocci_id/* drivers/net/fddi/skfp/smt.c 1312 */;
	struct smt_p_latency *cocci_id/* drivers/net/fddi/skfp/smt.c 1289 */;
	const u_char cocci_id/* drivers/net/fddi/skfp/smt.c 1269 */[16];
	const u_char *cocci_id/* drivers/net/fddi/skfp/smt.c 1261 */;
	struct smt_p_policy *cocci_id/* drivers/net/fddi/skfp/smt.c 1258 */;
	u_short *cocci_id/* drivers/net/fddi/skfp/smt.c 125 */;
	const struct fddi_addr *cocci_id/* drivers/net/fddi/skfp/smt.c 123 */;
	struct smt_p_timestamp *cocci_id/* drivers/net/fddi/skfp/smt.c 1217 */;
	struct smt_p_state *cocci_id/* drivers/net/fddi/skfp/smt.c 1177 */;
	struct smt_p_sde *cocci_id/* drivers/net/fddi/skfp/smt.c 1161 */;
	struct smt_p_una *cocci_id/* drivers/net/fddi/skfp/smt.c 1151 */;
	short *cocci_id/* drivers/net/fddi/skfp/smt.c 115 */;
	SMbuf *cocci_id/* drivers/net/fddi/skfp/smt.c 1137 */;
	struct smt_header cocci_id/* drivers/net/fddi/skfp/smt.c 1133 */;
	const struct s_smc *cocci_id/* drivers/net/fddi/skfp/smt.c 112 */;
	void cocci_id/* drivers/net/fddi/skfp/smt.c 106 */(struct s_smc *smc,
							   char *data,
							   int len);
	struct smt_sif_operation *cocci_id/* drivers/net/fddi/skfp/smt.c 1058 */;
	int cocci_id/* drivers/net/fddi/skfp/smt.c 104 */(u_long upper,
							  u_long lower);
	void cocci_id/* drivers/net/fddi/skfp/smt.c 103 */(struct s_smc *smc,
							   int report);
	struct smt_sif_config *cocci_id/* drivers/net/fddi/skfp/smt.c 1025 */;
	int cocci_id/* drivers/net/fddi/skfp/smt.c 101 */(void);
	struct smt_ecf *cocci_id/* drivers/net/fddi/skfp/smt.c 1002 */;
}
