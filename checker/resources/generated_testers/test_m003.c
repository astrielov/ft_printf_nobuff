#include "../tools/test_headers.h"
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	printf_ = fopen("../testing_results/test_m003_printf_print", "w");
	printf_ret = fopen("../testing_results/test_m003_printf_ret", "w");
	ft_printf_ret = fopen("../testing_results/test_m003_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

	
//@
	ft_printf("\n#0000");
	fprintf(printf_, "\n#0000");
	ret1 = fprintf(printf_, "|%6.5%|");
	ret2 = ft_printf("|%6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0001");
	fprintf(printf_, "\n#0001");
	ret1 = fprintf(printf_, "|% 6.5%|");
	ret2 = ft_printf("|% 6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0002");
	fprintf(printf_, "\n#0002");
	ret1 = fprintf(printf_, "|%06.5%|");
	ret2 = ft_printf("|%06.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0003");
	fprintf(printf_, "\n#0003");
	ret1 = fprintf(printf_, "|% 06.5%|");
	ret2 = ft_printf("|% 06.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0004");
	fprintf(printf_, "\n#0004");
	ret1 = fprintf(printf_, "|%+6.5%|");
	ret2 = ft_printf("|%+6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0005");
	fprintf(printf_, "\n#0005");
	ret1 = fprintf(printf_, "|% +6.5%|");
	ret2 = ft_printf("|% +6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0006");
	fprintf(printf_, "\n#0006");
	ret1 = fprintf(printf_, "|%0+6.5%|");
	ret2 = ft_printf("|%0+6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0007");
	fprintf(printf_, "\n#0007");
	ret1 = fprintf(printf_, "|% 0+6.5%|");
	ret2 = ft_printf("|% 0+6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0008");
	fprintf(printf_, "\n#0008");
	ret1 = fprintf(printf_, "|%-6.5%|");
	ret2 = ft_printf("|%-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0009");
	fprintf(printf_, "\n#0009");
	ret1 = fprintf(printf_, "|% -6.5%|");
	ret2 = ft_printf("|% -6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0010");
	fprintf(printf_, "\n#0010");
	ret1 = fprintf(printf_, "|%0-6.5%|");
	ret2 = ft_printf("|%0-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0011");
	fprintf(printf_, "\n#0011");
	ret1 = fprintf(printf_, "|% 0-6.5%|");
	ret2 = ft_printf("|% 0-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0012");
	fprintf(printf_, "\n#0012");
	ret1 = fprintf(printf_, "|%+-6.5%|");
	ret2 = ft_printf("|%+-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0013");
	fprintf(printf_, "\n#0013");
	ret1 = fprintf(printf_, "|% +-6.5%|");
	ret2 = ft_printf("|% +-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0014");
	fprintf(printf_, "\n#0014");
	ret1 = fprintf(printf_, "|%0+-6.5%|");
	ret2 = ft_printf("|%0+-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0015");
	fprintf(printf_, "\n#0015");
	ret1 = fprintf(printf_, "|% 0+-6.5%|");
	ret2 = ft_printf("|% 0+-6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0016");
	fprintf(printf_, "\n#0016");
	ret1 = fprintf(printf_, "|%#6.5%|");
	ret2 = ft_printf("|%#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0017");
	fprintf(printf_, "\n#0017");
	ret1 = fprintf(printf_, "|% #6.5%|");
	ret2 = ft_printf("|% #6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0018");
	fprintf(printf_, "\n#0018");
	ret1 = fprintf(printf_, "|%0#6.5%|");
	ret2 = ft_printf("|%0#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0019");
	fprintf(printf_, "\n#0019");
	ret1 = fprintf(printf_, "|% 0#6.5%|");
	ret2 = ft_printf("|% 0#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0020");
	fprintf(printf_, "\n#0020");
	ret1 = fprintf(printf_, "|%+#6.5%|");
	ret2 = ft_printf("|%+#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0021");
	fprintf(printf_, "\n#0021");
	ret1 = fprintf(printf_, "|% +#6.5%|");
	ret2 = ft_printf("|% +#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0022");
	fprintf(printf_, "\n#0022");
	ret1 = fprintf(printf_, "|%0+#6.5%|");
	ret2 = ft_printf("|%0+#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0023");
	fprintf(printf_, "\n#0023");
	ret1 = fprintf(printf_, "|% 0+#6.5%|");
	ret2 = ft_printf("|% 0+#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0024");
	fprintf(printf_, "\n#0024");
	ret1 = fprintf(printf_, "|%-#6.5%|");
	ret2 = ft_printf("|%-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0025");
	fprintf(printf_, "\n#0025");
	ret1 = fprintf(printf_, "|% -#6.5%|");
	ret2 = ft_printf("|% -#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0026");
	fprintf(printf_, "\n#0026");
	ret1 = fprintf(printf_, "|%0-#6.5%|");
	ret2 = ft_printf("|%0-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0027");
	fprintf(printf_, "\n#0027");
	ret1 = fprintf(printf_, "|% 0-#6.5%|");
	ret2 = ft_printf("|% 0-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0028");
	fprintf(printf_, "\n#0028");
	ret1 = fprintf(printf_, "|%+-#6.5%|");
	ret2 = ft_printf("|%+-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0029");
	fprintf(printf_, "\n#0029");
	ret1 = fprintf(printf_, "|% +-#6.5%|");
	ret2 = ft_printf("|% +-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0030");
	fprintf(printf_, "\n#0030");
	ret1 = fprintf(printf_, "|%0+-#6.5%|");
	ret2 = ft_printf("|%0+-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0031");
	fprintf(printf_, "\n#0031");
	ret1 = fprintf(printf_, "|% 0+-#6.5%|");
	ret2 = ft_printf("|% 0+-#6.5%|");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m003_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

