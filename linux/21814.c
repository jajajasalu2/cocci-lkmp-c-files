cocci_test_suite() {
	int *cocci_id/* arch/s390/kvm/gaccess.c 983 */;
	struct region3_table_entry_fc1 {
		unsigned long rfaa:33;
		unsigned long:14;
		unsigned long av:1;
		unsigned long acc:4;
		unsigned long f:1;
		unsigned long fc:1;
		unsigned long p:1;
		unsigned long iep:1;
		unsigned long:2;
		unsigned long i:1;
		unsigned long cr:1;
		unsigned long tt:2;
		unsigned long:2;
	} cocci_id/* arch/s390/kvm/gaccess.c 85 */;
	union asce cocci_id/* arch/s390/kvm/gaccess.c 838 */;
	unsigned long *cocci_id/* arch/s390/kvm/gaccess.c 836 */;
	unsigned long cocci_id/* arch/s390/kvm/gaccess.c 835 */[2];
	psw_t *cocci_id/* arch/s390/kvm/gaccess.c 833 */;
	enum gacc_mode cocci_id/* arch/s390/kvm/gaccess.c 831 */;
	u8 cocci_id/* arch/s390/kvm/gaccess.c 830 */;
	struct kvm_vcpu *cocci_id/* arch/s390/kvm/gaccess.c 830 */;
	void *cocci_id/* arch/s390/kvm/gaccess.c 830 */;
	unsigned long cocci_id/* arch/s390/kvm/gaccess.c 830 */;
	int cocci_id/* arch/s390/kvm/gaccess.c 830 */;
	enum prot_type cocci_id/* arch/s390/kvm/gaccess.c 803 */;
	const union asce cocci_id/* arch/s390/kvm/gaccess.c 799 */;
	union segment_table_entry cocci_id/* arch/s390/kvm/gaccess.c 728 */;
	struct region3_table_entry_fc0 {
		unsigned long sto:52;
		unsigned long:1;
		unsigned long fc:1;
		unsigned long p:1;
		unsigned long:1;
		unsigned long tf:2;
		unsigned long i:1;
		unsigned long cr:1;
		unsigned long tt:2;
		unsigned long tl:2;
	} cocci_id/* arch/s390/kvm/gaccess.c 72 */;
	union region3_table_entry cocci_id/* arch/s390/kvm/gaccess.c 700 */;
	union region2_table_entry cocci_id/* arch/s390/kvm/gaccess.c 682 */;
	union region1_table_entry cocci_id/* arch/s390/kvm/gaccess.c 664 */;
	union ctlreg0 cocci_id/* arch/s390/kvm/gaccess.c 623 */;
	union page_table_entry cocci_id/* arch/s390/kvm/gaccess.c 620 */;
	union raddress cocci_id/* arch/s390/kvm/gaccess.c 619 */;
	union vaddress cocci_id/* arch/s390/kvm/gaccess.c 618 */;
	enum prot_type *cocci_id/* arch/s390/kvm/gaccess.c 616 */;
	struct kvm *cocci_id/* arch/s390/kvm/gaccess.c 588 */;
	union region2_table_entry {
		unsigned long val;
		struct {
			unsigned long rto:52;
			unsigned long:2;
			unsigned long p:1;
			unsigned long:1;
			unsigned long tf:2;
			unsigned long i:1;
			unsigned long:1;
			unsigned long tt:2;
			unsigned long tl:2;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 57 */;
	struct psw_bits cocci_id/* arch/s390/kvm/gaccess.c 558 */;
	struct trans_exc_code_bits *cocci_id/* arch/s390/kvm/gaccess.c 497 */;
	struct kvm_s390_pgm_info *cocci_id/* arch/s390/kvm/gaccess.c 496 */;
	enum prot_type{PROT_TYPE_LA=0, PROT_TYPE_KEYC=1, PROT_TYPE_ALC=2, PROT_TYPE_DAT=3, PROT_TYPE_IEP=4,} cocci_id/* arch/s390/kvm/gaccess.c 485 */;
	enum{FSI_UNKNOWN=0, FSI_STORE=1, FSI_FETCH=2,} cocci_id/* arch/s390/kvm/gaccess.c 479 */;
	struct trans_exc_code_bits {
		unsigned long addr:52;
		unsigned long fsi:2;
		unsigned long:2;
		unsigned long b56:1;
		unsigned long:3;
		unsigned long b60:1;
		unsigned long b61:1;
		unsigned long as:2;
	} cocci_id/* arch/s390/kvm/gaccess.c 468 */;
	union region1_table_entry {
		unsigned long val;
		struct {
			unsigned long rto:52;
			unsigned long:2;
			unsigned long p:1;
			unsigned long:1;
			unsigned long tf:2;
			unsigned long i:1;
			unsigned long:1;
			unsigned long tt:2;
			unsigned long tl:2;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 42 */;
	union ald cocci_id/* arch/s390/kvm/gaccess.c 386 */;
	struct aste cocci_id/* arch/s390/kvm/gaccess.c 384 */;
	struct ale cocci_id/* arch/s390/kvm/gaccess.c 383 */;
	union alet cocci_id/* arch/s390/kvm/gaccess.c 382 */;
	union asce *cocci_id/* arch/s390/kvm/gaccess.c 379 */;
	void cocci_id/* arch/s390/kvm/gaccess.c 363 */;
	enum{ASCE_TYPE_SEGMENT=0, ASCE_TYPE_REGION3=1, ASCE_TYPE_REGION2=2, ASCE_TYPE_REGION1=3,} cocci_id/* arch/s390/kvm/gaccess.c 35 */;
	union ipte_control cocci_id/* arch/s390/kvm/gaccess.c 326 */;
	struct aste {
		unsigned long i:1;
		unsigned long ato:29;
		unsigned long:1;
		unsigned long b:1;
		unsigned long ax:16;
		unsigned long atl:12;
		unsigned long:2;
		unsigned long ca:1;
		unsigned long ra:1;
		unsigned long asce:64;
		unsigned long ald:32;
		unsigned long astesn:32;
	} cocci_id/* arch/s390/kvm/gaccess.c 248 */;
	struct ale {
		unsigned long i:1;
		unsigned long:5;
		unsigned long fo:1;
		unsigned long p:1;
		unsigned long alesn:8;
		unsigned long aleax:16;
		unsigned long:32;
		unsigned long:1;
		unsigned long asteo:25;
		unsigned long:6;
		unsigned long astesn:32;
	} cocci_id/* arch/s390/kvm/gaccess.c 234 */;
	union ald {
		u32 val;
		struct {
			u32:1;
			u32 alo:24;
			u32 all:7;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 225 */;
	union alet {
		u32 val;
		struct {
			u32 reserved:7;
			u32 p:1;
			u32 alesn:8;
			u32 alen:16;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 215 */;
	union raddress {
		unsigned long addr;
		unsigned long rfaa:33;
		unsigned long sfaa:44;
		unsigned long pfra:52;
	} cocci_id/* arch/s390/kvm/gaccess.c 208 */;
	union asce {
		unsigned long val;
		struct {
			unsigned long origin:52;
			unsigned long:2;
			unsigned long g:1;
			unsigned long p:1;
			unsigned long s:1;
			unsigned long x:1;
			unsigned long r:1;
			unsigned long:1;
			unsigned long dt:2;
			unsigned long tl:2;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 19 */;
	union vaddress {
		unsigned long addr;
		struct {
			unsigned long rfx:11;
			unsigned long rsx:11;
			unsigned long rtx:11;
			unsigned long sx:11;
			unsigned long px:8;
			unsigned long bx:12;
		};
		struct {
			unsigned long rfx01:2;
			unsigned long:9;
			unsigned long rsx01:2;
			unsigned long:9;
			unsigned long rtx01:2;
			unsigned long:9;
			unsigned long sx01:2;
			unsigned long:29;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 181 */;
	union page_table_entry {
		unsigned long val;
		struct {
			unsigned long pfra:52;
			unsigned long z:1;
			unsigned long i:1;
			unsigned long p:1;
			unsigned long iep:1;
			unsigned long:8;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 165 */;
	enum{TABLE_TYPE_SEGMENT=0, TABLE_TYPE_REGION3=1, TABLE_TYPE_REGION2=2, TABLE_TYPE_REGION1=3,} cocci_id/* arch/s390/kvm/gaccess.c 158 */;
	union segment_table_entry {
		unsigned long val;
		struct segment_entry_fc0 fc0;
		struct segment_entry_fc1 fc1;
		struct {
			unsigned long:53;
			unsigned long fc:1;
			unsigned long:4;
			unsigned long i:1;
			unsigned long cs:1;
			unsigned long tt:2;
			unsigned long:2;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 143 */;
	struct segment_entry_fc1 {
		unsigned long sfaa:44;
		unsigned long:3;
		unsigned long av:1;
		unsigned long acc:4;
		unsigned long f:1;
		unsigned long fc:1;
		unsigned long p:1;
		unsigned long iep:1;
		unsigned long:2;
		unsigned long i:1;
		unsigned long cs:1;
		unsigned long tt:2;
		unsigned long:2;
	} cocci_id/* arch/s390/kvm/gaccess.c 127 */;
	struct gmap *cocci_id/* arch/s390/kvm/gaccess.c 1164 */;
	struct segment_entry_fc0 {
		unsigned long pto:53;
		unsigned long fc:1;
		unsigned long p:1;
		unsigned long:3;
		unsigned long i:1;
		unsigned long cs:1;
		unsigned long tt:2;
		unsigned long:2;
	} cocci_id/* arch/s390/kvm/gaccess.c 116 */;
	union region3_table_entry {
		unsigned long val;
		struct region3_table_entry_fc0 fc0;
		struct region3_table_entry_fc1 fc1;
		struct {
			unsigned long:53;
			unsigned long fc:1;
			unsigned long:4;
			unsigned long i:1;
			unsigned long cr:1;
			unsigned long tt:2;
			unsigned long:2;
		};
	} cocci_id/* arch/s390/kvm/gaccess.c 101 */;
}
