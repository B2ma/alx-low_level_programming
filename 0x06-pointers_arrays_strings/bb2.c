#include "main.h"

/**
   * infinite_add - add 2 numbers together
    * @n1: text representation of 1st number to add
     * @n2: text representation of 2nd number to add
      * @r: pointer to buffer
       * @size_r: buffer size
        * Return: pointer to calling function
	 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	    int overflow = 0, i = 0, j = 0, digits = 0;
	        int val1, val2, temp_sum;
		int start = 0;
		int end = digits - 1;

		    while (n1[i])
			            i++;
		        while (n2[j])
				        j++;
			    i--;
			        j--;
				    if (j >= size_r || i >= size_r)
					            return (0);
				        while (i >= 0 || j >= 0 || overflow == 1)
						    {
							            val1 = (i >= 0) ? (n1[i--] - '0') : 0;
								            val2 = (j >= 0) ? (n2[j--] - '0') : 0;
									            temp_sum = val1 + val2 + overflow;
										            overflow = temp_sum / 10;
											            if (digits >= (size_r - 1))
													                return (0);
												            r[digits++] = (temp_sum % 10) + '0';
													        }
					    if (overflow != 0 && digits < (size_r - 1))
						            r[digits++] = overflow + '0';
					        if (digits == size_r)
							        return (0);
						    r[digits] = '\0';
							        while (start < end)
									    {
										            char temp = r[start];
											            r[start] = r[end];
												            r[end] = temp;
													            start++;
														            end--;
															        }

								    return r;
}

