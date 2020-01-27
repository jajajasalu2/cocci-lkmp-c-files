cocci_test_suite() {
	struct src_rsc_ctrl_blk {
		unsigned int ctl;
		unsigned int ccr;
		unsigned int ca;
		unsigned int sa;
		unsigned int la;
		unsigned int mpr;
		union src_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 94 */;
	unsigned int *cocci_id/* sound/pci/ctxfi/cthw20k1.c 939 */;
	struct dao_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 926 */;
	struct dai_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 880 */;
	struct daio_mgr_ctrl_blk {
		unsigned int i2sctl;
		unsigned int spoctl;
		unsigned int spictl;
		struct daoimap daoimap;
		union daio_mgr_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 816 */;
	union daio_mgr_dirty {
		struct {
			u32 i2soctl:4;
			u32 i2sictl:4;
			u32 spoctl:4;
			u32 spictl:4;
			u32 daoimap:1;
			u32 rsv:15;
		} bf;
		u32 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 803 */;
	union src_dirty {
		struct {
			u16 ctl:1;
			u16 ccr:1;
			u16 sa:1;
			u16 la:1;
			u16 ca:1;
			u16 mpr:1;
			u16 czbfs:1;
			u16 rsv:9;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 80 */;
	struct daoimap {
		unsigned int aim;
		unsigned int idx;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 779 */;
	struct dao_ctrl_blk {
		unsigned int spos;
		union dao_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 770 */;
	union dao_dirty {
		struct {
			u16 spos:1;
			u16 rsv:15;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 761 */;
	struct dai_ctrl_blk {
		unsigned int srtctl;
		union dai_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 755 */;
	union dai_dirty {
		struct {
			u16 srtctl:1;
			u16 rsv:15;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 746 */;
	void **cocci_id/* sound/pci/ctxfi/cthw20k1.c 710 */;
	struct amixer_rsc_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 665 */;
	void *cocci_id/* sound/pci/ctxfi/cthw20k1.c 663 */;
	struct amixer_rsc_ctrl_blk {
		unsigned int amoplo;
		unsigned int amophi;
		union amixer_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 594 */;
	union amixer_dirty {
		struct {
			u16 amoplo:1;
			u16 amophi:1;
			u16 rsv:14;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 584 */;
	struct srcimp_mgr_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 561 */;
	struct src_mgr_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 460 */;
	struct src_rsc_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 361 */;
	void cocci_id/* sound/pci/ctxfi/cthw20k1.c 33 */(struct hw *hw,
							 u32 reg, u32 data);
	u32 cocci_id/* sound/pci/ctxfi/cthw20k1.c 32 */(struct hw *hw,
							u32 reg);
	struct hw20k1 {
		struct hw hw;
		spinlock_t reg_20k1_lock;
		spinlock_t reg_pci_lock;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 26 */;
	struct hw20k1 cocci_id/* sound/pci/ctxfi/cthw20k1.c 2281 */;
	struct hw20k1 *cocci_id/* sound/pci/ctxfi/cthw20k1.c 2259 */;
	struct hw **cocci_id/* sound/pci/ctxfi/cthw20k1.c 2257 */;
	const struct hw cocci_id/* sound/pci/ctxfi/cthw20k1.c 2153 */;
	void cocci_id/* sound/pci/ctxfi/cthw20k1.c 2113 */;
	unsigned long cocci_id/* sound/pci/ctxfi/cthw20k1.c 2101 */;
	struct trn_conf cocci_id/* sound/pci/ctxfi/cthw20k1.c 1998 */;
	struct daio_conf cocci_id/* sound/pci/ctxfi/cthw20k1.c 1997 */;
	struct adc_conf cocci_id/* sound/pci/ctxfi/cthw20k1.c 1996 */;
	struct dac_conf cocci_id/* sound/pci/ctxfi/cthw20k1.c 1995 */;
	struct card_conf *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1990 */;
	const unsigned int cocci_id/* sound/pci/ctxfi/cthw20k1.c 1897 */;
	struct pci_dev *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1896 */;
	irqreturn_t cocci_id/* sound/pci/ctxfi/cthw20k1.c 1877 */;
	const u32 cocci_id/* sound/pci/ctxfi/cthw20k1.c 1798 */;
	void __iomem *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1796 */;
	unsigned int cocci_id/* sound/pci/ctxfi/cthw20k1.c 1794 */[4];
	struct capabilities cocci_id/* sound/pci/ctxfi/cthw20k1.c 1771 */;
	const struct adc_conf *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1763 */;
	unsigned int cocci_id/* sound/pci/ctxfi/cthw20k1.c 1703 */;
	u32 cocci_id/* sound/pci/ctxfi/cthw20k1.c 1702 */;
	u16 cocci_id/* sound/pci/ctxfi/cthw20k1.c 1700 */;
	struct hw *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1693 */;
	int cocci_id/* sound/pci/ctxfi/cthw20k1.c 1693 */;
	enum ADCSRC cocci_id/* sound/pci/ctxfi/cthw20k1.c 1543 */;
	unsigned char cocci_id/* sound/pci/ctxfi/cthw20k1.c 1543 */;
	struct srcimp_mgr_ctrl_blk {
		struct srcimap srcimap;
		union srcimp_mgr_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 146 */;
	const struct dac_conf *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1422 */;
	union srcimp_mgr_dirty {
		struct {
			u16 srcimap:1;
			u16 rsv:15;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 138 */;
	struct srcimap {
		unsigned int srcaim;
		unsigned int idx;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 132 */;
	const struct trn_conf *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1254 */;
	struct src_mgr_ctrl_blk {
		unsigned int enbsa;
		unsigned int enb[8];
		union src_mgr_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 121 */;
	const struct daio_conf *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1203 */;
	struct trn_conf {
		unsigned long vm_pgt_phys;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 1199 */;
	struct daio_conf {
		unsigned int msr;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 1195 */;
	struct adc_conf {
		unsigned int msr;
		unsigned char input;
		unsigned char mic20db;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 1189 */;
	struct dac_conf {
		unsigned int msr;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 1185 */;
	struct daio_mgr_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k1.c 1100 */;
	union src_mgr_dirty {
		struct {
			u16 enb0:1;
			u16 enb1:1;
			u16 enb2:1;
			u16 enb3:1;
			u16 enb4:1;
			u16 enb5:1;
			u16 enb6:1;
			u16 enb7:1;
			u16 enbsa:1;
			u16 rsv:7;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k1.c 105 */;
}
