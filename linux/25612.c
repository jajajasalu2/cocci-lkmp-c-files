cocci_test_suite() {
	Dwarf_Die cocci_id/* tools/perf/util/dwarf-aux.c 990 */;
	const char *cocci_id/* tools/perf/util/dwarf-aux.c 984 */;
	struct __find_variable_param cocci_id/* tools/perf/util/dwarf-aux.c 976 */;
	Dwarf_Attribute cocci_id/* tools/perf/util/dwarf-aux.c 947 */;
	struct __find_variable_param *cocci_id/* tools/perf/util/dwarf-aux.c 946 */;
	struct __find_variable_param {
		const char *name;
		Dwarf_Addr addr;
	} cocci_id/* tools/perf/util/dwarf-aux.c 939 */;
	struct __line_walk_param *cocci_id/* tools/perf/util/dwarf-aux.c 811 */;
	struct __line_walk_param cocci_id/* tools/perf/util/dwarf-aux.c 785 */;
	line_walk_callback_t cocci_id/* tools/perf/util/dwarf-aux.c 783 */;
	bool cocci_id/* tools/perf/util/dwarf-aux.c 782 */;
	struct __line_walk_param {
		bool recursive;
		line_walk_callback_t callback;
		void *data;
		int retval;
	} cocci_id/* tools/perf/util/dwarf-aux.c 742 */;
	struct __instance_walk_param cocci_id/* tools/perf/util/dwarf-aux.c 726 */;
	Dwarf_Attribute *cocci_id/* tools/perf/util/dwarf-aux.c 681 */;
	struct __instance_walk_param *cocci_id/* tools/perf/util/dwarf-aux.c 678 */;
	struct __instance_walk_param {
		void *addr;
		int (*callback)(Dwarf_Die *, void *);
		void *data;
		int retval;
	} cocci_id/* tools/perf/util/dwarf-aux.c 669 */;
	Dwarf_Lines *cocci_id/* tools/perf/util/dwarf-aux.c 66 */;
	Dwarf_Addr *cocci_id/* tools/perf/util/dwarf-aux.c 613 */;
	Dwarf_Die *cocci_id/* tools/perf/util/dwarf-aux.c 611 */;
	void *cocci_id/* tools/perf/util/dwarf-aux.c 611 */;
	int cocci_id/* tools/perf/util/dwarf-aux.c 611 */;
	struct __addr_die_search_param cocci_id/* tools/perf/util/dwarf-aux.c 600 */;
	struct __addr_die_search_param *cocci_id/* tools/perf/util/dwarf-aux.c 574 */;
	Dwarf_Addr cocci_id/* tools/perf/util/dwarf-aux.c 537 */;
	struct __addr_die_search_param {
		Dwarf_Addr addr;
		Dwarf_Die *die_mem;
	} cocci_id/* tools/perf/util/dwarf-aux.c 529 */;
	Dwarf_Sword cocci_id/* tools/perf/util/dwarf-aux.c 446 */;
	Dwarf_Op *cocci_id/* tools/perf/util/dwarf-aux.c 420 */;
	Dwarf_Sword *cocci_id/* tools/perf/util/dwarf-aux.c 320 */;
	unsigned int cocci_id/* tools/perf/util/dwarf-aux.c 319 */;
	Dwarf_Word *cocci_id/* tools/perf/util/dwarf-aux.c 307 */;
	size_t cocci_id/* tools/perf/util/dwarf-aux.c 25 */;
	Dwarf_Word cocci_id/* tools/perf/util/dwarf-aux.c 240 */;
	Dwarf_Files *cocci_id/* tools/perf/util/dwarf-aux.c 24 */;
	int (*cocci_id/* tools/perf/util/dwarf-aux.c 156 */)(Dwarf_Die *,
							     void *);
	int cocci_id/* tools/perf/util/dwarf-aux.c 143 */(Dwarf_Die *die_mem,
							  void *data);
	void cocci_id/* tools/perf/util/dwarf-aux.c 1363 */;
	unsigned long *cocci_id/* tools/perf/util/dwarf-aux.c 1266 */;
	Dwarf_Line *cocci_id/* tools/perf/util/dwarf-aux.c 119 */;
	const char **cocci_id/* tools/perf/util/dwarf-aux.c 117 */;
	int *cocci_id/* tools/perf/util/dwarf-aux.c 117 */;
	unsigned long cocci_id/* tools/perf/util/dwarf-aux.c 116 */;
	struct strbuf *cocci_id/* tools/perf/util/dwarf-aux.c 1024 */;
}
