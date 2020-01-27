cocci_test_suite() {
	union {
		unsigned int uint;
		compat_uptr_t uptr;
	} cocci_id/* drivers/staging/comedi/comedi_compat32.c 96 */;
	struct comedi32_chaninfo_struct __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 94 */;
	struct comedi_chaninfo __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 93 */;
	struct comedi32_insnlist_struct {
		unsigned int n_insns;
		compat_uptr_t insns;
	} cocci_id/* drivers/staging/comedi/comedi_compat32.c 75 */;
	struct comedi32_insn_struct {
		unsigned int insn;
		unsigned int n;
		compat_uptr_t data;
		unsigned int subdev;
		unsigned int chanspec;
		unsigned int unused[3];
	} cocci_id/* drivers/staging/comedi/comedi_compat32.c 66 */;
	struct comedi32_cmd_struct {
		unsigned int subdev;
		unsigned int flags;
		unsigned int start_src;
		unsigned int start_arg;
		unsigned int scan_begin_src;
		unsigned int scan_begin_arg;
		unsigned int convert_src;
		unsigned int convert_arg;
		unsigned int scan_end_src;
		unsigned int scan_end_arg;
		unsigned int stop_src;
		unsigned int stop_arg;
		compat_uptr_t chanlist;
		unsigned int chanlist_len;
		compat_uptr_t data;
		unsigned int data_len;
	} cocci_id/* drivers/staging/comedi/comedi_compat32.c 47 */;
	struct comedi32_rangeinfo_struct {
		unsigned int range_type;
		compat_uptr_t range_ptr;
	} cocci_id/* drivers/staging/comedi/comedi_compat32.c 42 */;
	int cocci_id/* drivers/staging/comedi/comedi_compat32.c 411 */;
	struct file *cocci_id/* drivers/staging/comedi/comedi_compat32.c 409 */;
	unsigned long cocci_id/* drivers/staging/comedi/comedi_compat32.c 409 */;
	unsigned int cocci_id/* drivers/staging/comedi/comedi_compat32.c 409 */;
	long cocci_id/* drivers/staging/comedi/comedi_compat32.c 409 */;
	struct comedi32_insn_struct __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 391 */;
	struct comedi_insn __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 390 */;
	struct combined_insnlist cocci_id/* drivers/staging/comedi/comedi_compat32.c 364 */;
	compat_uptr_t cocci_id/* drivers/staging/comedi/comedi_compat32.c 346 */;
	struct comedi32_insnlist_struct __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 344 */;
	struct combined_insnlist {
		struct comedi_insnlist insnlist;
		struct comedi_insn insn[1];
	}__user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 340 */;
	struct comedi32_chaninfo_struct {
		unsigned int subdev;
		compat_uptr_t maxdata_list;
		compat_uptr_t flaglist;
		compat_uptr_t rangelist;
		unsigned int unused[4];
	} cocci_id/* drivers/staging/comedi/comedi_compat32.c 34 */;
	struct comedi32_insn_struct cocci_id/* drivers/staging/comedi/comedi_compat32.c 32 */;
	struct comedi32_insnlist_struct cocci_id/* drivers/staging/comedi/comedi_compat32.c 31 */;
	struct comedi32_cmd_struct __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 262 */;
	struct comedi_cmd __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 261 */;
	struct comedi32_cmd_struct cocci_id/* drivers/staging/comedi/comedi_compat32.c 25 */;
	struct comedi32_rangeinfo_struct cocci_id/* drivers/staging/comedi/comedi_compat32.c 20 */;
	unsigned int __force *cocci_id/* drivers/staging/comedi/comedi_compat32.c 196 */;
	struct comedi32_chaninfo_struct cocci_id/* drivers/staging/comedi/comedi_compat32.c 19 */;
	struct comedi32_rangeinfo_struct __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 128 */;
	struct comedi_rangeinfo __user *cocci_id/* drivers/staging/comedi/comedi_compat32.c 127 */;
}
