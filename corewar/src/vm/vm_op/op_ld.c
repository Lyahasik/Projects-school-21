/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_ld.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 00:11:25 by vcaterpi          #+#    #+#             */
/*   Updated: 2021/01/06 00:11:27 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../header/corewar.h"

void		op_ld(t_vm *vm, t_process *proc)
{
	int		value;
	int		reg_id;

	PROC_STEP += ARGS_CODE_LEN;
	value = get_op_args(vm, proc, 1, 1);
	proc->carry = (value == 0 ? 1 : 0);
	reg_id = get_byte_int(vm, PROC_POS + PROC_STEP, REG_LEN);
	PROC_STEP += REG_LEN;
	proc->reg[reg_id - 1] = value;
}