cocci_test_suite() {
	struct parse_events_term cocci_id/* tools/perf/tests/parse-events.c 599 */;
	struct parse_events_term *cocci_id/* tools/perf/tests/parse-events.c 596 */;
	struct list_head *cocci_id/* tools/perf/tests/parse-events.c 594 */;
	bool cocci_id/* tools/perf/tests/parse-events.c 26 */;
	struct test *cocci_id/* tools/perf/tests/parse-events.c 1918 */;
	char cocci_id/* tools/perf/tests/parse-events.c 1894 */[2 * NAME_MAX + 1 + 12 + 3];
	struct evlist_test cocci_id/* tools/perf/tests/parse-events.c 1893 */;
	char cocci_id/* tools/perf/tests/parse-events.c 1857 */[PATH_MAX];
	struct stat cocci_id/* tools/perf/tests/parse-events.c 1856 */;
	struct list_head cocci_id/* tools/perf/tests/parse-events.c 1819 */;
	struct terms_test *cocci_id/* tools/perf/tests/parse-events.c 1817 */;
	unsigned cocci_id/* tools/perf/tests/parse-events.c 1799 */;
	struct parse_events_error cocci_id/* tools/perf/tests/parse-events.c 1771 */;
	struct evlist_test *cocci_id/* tools/perf/tests/parse-events.c 1769 */;
	struct terms_test cocci_id/* tools/perf/tests/parse-events.c 1762 */[];
	struct terms_test {
		const char *str;
		__u32 type;
		int (*check)(struct list_head *terms);
	} cocci_id/* tools/perf/tests/parse-events.c 1756 */;
	long cocci_id/* tools/perf/tests/parse-events.c 174 */;
	struct evsel *cocci_id/* tools/perf/tests/parse-events.c 153 */;
	struct evlist_test cocci_id/* tools/perf/tests/parse-events.c 1441 */[];
	struct evlist_test {
		const char *name;
		__u32 type;
		const int id;
		bool (*valid)(void);
		int (*check)(struct evlist *evlist);
	} cocci_id/* tools/perf/tests/parse-events.c 1433 */;
	struct evlist *cocci_id/* tools/perf/tests/parse-events.c 1425 */;
	char *cocci_id/* tools/perf/tests/parse-events.c 1390 */;
	DIR *cocci_id/* tools/perf/tests/parse-events.c 1382 */;
	struct dirent *cocci_id/* tools/perf/tests/parse-events.c 1381 */;
	int cocci_id/* tools/perf/tests/parse-events.c 1379 */;
	void cocci_id/* tools/perf/tests/parse-events.c 1379 */;
}
