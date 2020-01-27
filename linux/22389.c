cocci_test_suite() {
	struct src_rsc_ctrl_blk {
		unsigned int ctl;
		unsigned int ccr;
		unsigned int ca;
		unsigned int sa;
		unsigned int la;
		unsigned int mpr;
		union src_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 94 */;
	unsigned int *cocci_id/* sound/pci/ctxfi/cthw20k2.c 924 */;
	struct dao_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 910 */;
	struct dai_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 870 */;
	struct daio_mgr_ctrl_blk {
		struct daoimap daoimap;
		unsigned int txctl[8];
		unsigned int rxctl[8];
		union daio_mgr_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 807 */;
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
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 80 */;
	union daio_mgr_dirty {
		struct {
			u32 atxctl:8;
			u32 arxctl:8;
			u32 daoimap:1;
			u32 rsv:15;
		} bf;
		u32 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 796 */;
	struct dao_ctrl_blk {
		unsigned int atxcsl;
		union dao_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 786 */;
	union dao_dirty {
		struct {
			u16 atxcsl:1;
			u16 rsv:15;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 777 */;
	struct daoimap {
		unsigned int aim;
		unsigned int idx;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 755 */;
	struct dai_ctrl_blk {
		unsigned int srt;
		union dai_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 746 */;
	union dai_dirty {
		struct {
			u16 srt:1;
			u16 rsv:15;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 737 */;
	void **cocci_id/* sound/pci/ctxfi/cthw20k2.c 712 */;
	struct amixer_rsc_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 667 */;
	struct hw *cocci_id/* sound/pci/ctxfi/cthw20k2.c 665 */;
	void *cocci_id/* sound/pci/ctxfi/cthw20k2.c 665 */;
	unsigned int cocci_id/* sound/pci/ctxfi/cthw20k2.c 665 */;
	int cocci_id/* sound/pci/ctxfi/cthw20k2.c 665 */;
	struct amixer_rsc_ctrl_blk {
		unsigned int amoplo;
		unsigned int amophi;
		union amixer_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 593 */;
	union amixer_dirty {
		struct {
			u16 amoplo:1;
			u16 amophi:1;
			u16 rsv:14;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 583 */;
	struct srcimp_mgr_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 559 */;
	struct src_mgr_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 460 */;
	struct src_rsc_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 361 */;
	void cocci_id/* sound/pci/ctxfi/cthw20k2.c 36 */(struct hw *hw,
							 u32 reg, u32 data);
	u32 cocci_id/* sound/pci/ctxfi/cthw20k2.c 35 */(struct hw *hw,
							u32 reg);
	struct hw20k2 {
		struct hw hw;
		unsigned char dev_id;
		unsigned char addr_size;
		unsigned char data_size;
		int mic_source;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 25 */;
	struct hw20k2 *cocci_id/* sound/pci/ctxfi/cthw20k2.c 2329 */;
	struct hw **cocci_id/* sound/pci/ctxfi/cthw20k2.c 2327 */;
	const struct hw cocci_id/* sound/pci/ctxfi/cthw20k2.c 2219 */;
	struct trn_conf cocci_id/* sound/pci/ctxfi/cthw20k2.c 2123 */;
	struct daio_conf cocci_id/* sound/pci/ctxfi/cthw20k2.c 2122 */;
	struct adc_conf cocci_id/* sound/pci/ctxfi/cthw20k2.c 2121 */;
	struct dac_conf cocci_id/* sound/pci/ctxfi/cthw20k2.c 2120 */;
	struct card_conf *cocci_id/* sound/pci/ctxfi/cthw20k2.c 2115 */;
	const unsigned int cocci_id/* sound/pci/ctxfi/cthw20k2.c 2022 */;
	struct pci_dev *cocci_id/* sound/pci/ctxfi/cthw20k2.c 2020 */;
	irqreturn_t cocci_id/* sound/pci/ctxfi/cthw20k2.c 2001 */;
	struct capabilities cocci_id/* sound/pci/ctxfi/cthw20k2.c 1908 */;
	const struct adc_conf *cocci_id/* sound/pci/ctxfi/cthw20k2.c 1829 */;
	enum ADCSRC cocci_id/* sound/pci/ctxfi/cthw20k2.c 1807 */;
	s8 cocci_id/* sound/pci/ctxfi/cthw20k2.c 1781 */;
	struct regs_cs4382 cocci_id/* sound/pci/ctxfi/cthw20k2.c 1606 */;
	const struct dac_conf *cocci_id/* sound/pci/ctxfi/cthw20k2.c 1601 */;
	void cocci_id/* sound/pci/ctxfi/cthw20k2.c 1595 */;
	u32 cocci_id/* sound/pci/ctxfi/cthw20k2.c 1552 */;
	u16 cocci_id/* sound/pci/ctxfi/cthw20k2.c 1526 */;
	u32 *cocci_id/* sound/pci/ctxfi/cthw20k2.c 1526 */;
	u8 cocci_id/* sound/pci/ctxfi/cthw20k2.c 1466 */;
	struct srcimp_mgr_ctrl_blk {
		struct srcimap srcimap;
		union srcimp_mgr_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 146 */;
	u8 cocci_id/* sound/pci/ctxfi/cthw20k2.c 1441 */[2];
	struct regs_cs4382 {
		u32 mode_control_1;
		u32 mode_control_2;
		u32 mode_control_3;
		u32 filter_control;
		u32 invert_control;
		u32 mix_control_P1;
		u32 vol_control_A1;
		u32 vol_control_B1;
		u32 mix_control_P2;
		u32 vol_control_A2;
		u32 vol_control_B2;
		u32 mix_control_P3;
		u32 vol_control_A3;
		u32 vol_control_B3;
		u32 mix_control_P4;
		u32 vol_control_A4;
		u32 vol_control_B4;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 1414 */;
	union srcimp_mgr_dirty {
		struct {
			u16 srcimap:1;
			u16 rsv:15;
		} bf;
		u16 data;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 138 */;
	struct srcimap {
		unsigned int srcaim;
		unsigned int idx;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 132 */;
	const struct trn_conf *cocci_id/* sound/pci/ctxfi/cthw20k2.c 1232 */;
	struct src_mgr_ctrl_blk {
		unsigned int enbsa;
		unsigned int enb[8];
		union src_mgr_dirty dirty;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 121 */;
	const struct daio_conf *cocci_id/* sound/pci/ctxfi/cthw20k2.c 1146 */;
	struct trn_conf {
		unsigned long vm_pgt_phys;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 1142 */;
	struct daio_conf {
		unsigned int msr;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 1138 */;
	struct adc_conf {
		unsigned int msr;
		unsigned char input;
		unsigned char mic20db;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 1132 */;
	struct dac_conf {
		unsigned int msr;
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 1128 */;
	struct daio_mgr_ctrl_blk *cocci_id/* sound/pci/ctxfi/cthw20k2.c 1053 */;
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
	} cocci_id/* sound/pci/ctxfi/cthw20k2.c 105 */;
}
