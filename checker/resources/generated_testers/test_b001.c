#include "../tools/test_headers.h"
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	printf_ = fopen("../testing_results/test_b001_printf_print", "w");
	printf_ret = fopen("../testing_results/test_b001_printf_ret", "w");
	ft_printf_ret = fopen("../testing_results/test_b001_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

	
//@
	ft_printf("\n#0000");
	fprintf(printf_, "\n#0000");
	ret1 = fprintf(printf_, "|%.d|", 0);
	ret2 = ft_printf("|%.d|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0001");
	fprintf(printf_, "\n#0001");
	ret1 = fprintf(printf_, "|%.D|", 0);
	ret2 = ft_printf("|%.D|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0002");
	fprintf(printf_, "\n#0002");
	ret1 = fprintf(printf_, "|%.i|", 0);
	ret2 = ft_printf("|%.i|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0003");
	fprintf(printf_, "\n#0003");
	ret1 = fprintf(printf_, "|%.o|", 0);
	ret2 = ft_printf("|%.o|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0004");
	fprintf(printf_, "\n#0004");
	ret1 = fprintf(printf_, "|%.O|", 0);
	ret2 = ft_printf("|%.O|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0005");
	fprintf(printf_, "\n#0005");
	ret1 = fprintf(printf_, "|%.u|", 0);
	ret2 = ft_printf("|%.u|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0006");
	fprintf(printf_, "\n#0006");
	ret1 = fprintf(printf_, "|%.U|", 0);
	ret2 = ft_printf("|%.U|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0007");
	fprintf(printf_, "\n#0007");
	ret1 = fprintf(printf_, "|%.x|", 0);
	ret2 = ft_printf("|%.x|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0008");
	fprintf(printf_, "\n#0008");
	ret1 = fprintf(printf_, "|%.X|", 0);
	ret2 = ft_printf("|%.X|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0009");
	fprintf(printf_, "\n#0009");
	ret1 = fprintf(printf_, "|%.c|", 0);
	ret2 = ft_printf("|%.c|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0010");
	fprintf(printf_, "\n#0010");
	ret1 = fprintf(printf_, "|%.C|", 0);
	ret2 = ft_printf("|%.C|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0011");
	fprintf(printf_, "\n#0011");
	ret1 = fprintf(printf_, "|%.p|", 0);
	ret2 = ft_printf("|%.p|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0012");
	fprintf(printf_, "\n#0012");
	ret1 = fprintf(printf_, "|%'.d|", 0);
	ret2 = ft_printf("|%'.d|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0013");
	fprintf(printf_, "\n#0013");
	ret1 = fprintf(printf_, "|%'.D|", 0);
	ret2 = ft_printf("|%'.D|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0014");
	fprintf(printf_, "\n#0014");
	ret1 = fprintf(printf_, "|%'.i|", 0);
	ret2 = ft_printf("|%'.i|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0015");
	fprintf(printf_, "\n#0015");
	ret1 = fprintf(printf_, "|%'.u|", 0);
	ret2 = ft_printf("|%'.u|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0016");
	fprintf(printf_, "\n#0016");
	ret1 = fprintf(printf_, "|%'.U|", 0);
	ret2 = ft_printf("|%'.U|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b001_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

