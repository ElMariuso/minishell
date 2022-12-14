/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuzdin <abuzdin@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:38:18 by abuzdin           #+#    #+#             */
/*   Updated: 2022/08/04 10:25:09 by abuzdin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

#define R "\x1B[31m"
#define W "\x1B[37m"
#define Y "\x1B[1;33m"
#define G "\x1B[32m"
#define N "\x1B[0m"
#define M "\x1B[35m"
#define C "\x1B[36m"
#define O_C "\033[46m"
#define O_R "\033[41m"

void	invalid_argv(void)
{
	printf("⠀⠀⠀⠀%s⢰⣾⠾⠶⠷⠶⣶⣄⠀⠀⢰⣾⠶⠷⠶⠾⠶⣶⡄⠀⠀⣶⣶⠀⠀⠀⠀⠀⣶⡇⠀⠀⣶⡆⠀⠀⠀⠀⢐⣶⡇\n", R);
	printf("⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⢘⣿⠅⠀⢸⣿⠀⠀⠀⠀⠀⢸⣿⠀⠀⣿⣿⠀⠀⠀⠀⠀⣾⡇⠀⠀⣿⡇⠀⠀⠀⠀⢈⣿⡇\n");
	printf("⠀⠀⠀⠀⢸⣿⣆⣰⣀⣶⣾⠏⠀⠀⢸⣿⣀⣀⣀⣀⣀⣾⠏⠀⠀⣿⣿⠀⠀⠀⠀⠀⣾⡇⠀⠀⣿⣇⣶⣶⣶⣶⣾⣿⡇\n");
	printf("⠀⠀⠀⠀⢸⣿⠉⠉⠉⠉⠙⣿⡆⠀⢸⣿⠛⠛⠛⠛⠛⣿⣆⠀⠀⣿⣿⠀⠀⠀⠀⠀⣾⡇⠀⠀⣿⡏⠉⠉⠉⠉⠩⣿⡇\n");
	printf("⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⢀⣾⡇⠀⢸⣿⠀⠀⠀⠀⠀⢸⣿⠀⠀⠸⣿⡀⠀⠀⠀⢠⣿⠇⠀⠀⣿⡇⠀⠀⠀⠀⠰⣿⡇\n");
	printf("⠀⠀⠀⠀⠸⠿⠿⠿⠿⠿⠟⠋⠀⠀⠸⠿⠀⠀⠀⠀⠀⠸⠿⠄⠀⠀⠙⠿⠶⠶⠾⠟⠋⠀⠀⠀⠿⠇⠀⠀⠀⠀⠈⠿⠇%s\n\n", N);
	printf("%s⠀⠀⠀⠀⢀⣀⣀⣀⡀⠀⢀⣀⣀⡀⡀⠀⡀⠀⣀⣀⣀⣀⣀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⡀\n", Y);
	printf("⠀⠀⠀⠀⠿⠿⠿⠿⣿⣿⡿⠿⠿⠿⠇⠀⣿⣿⠿⠿⠿⠿⠿⢿⣿⣦⡀⠀⢻⣿⣦⠀⠀⠀⠀⠀⣼⣿⡟⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⢹⣿⡇⠀⠀⠹⣿⣧⡀⠀⢀⣼⣿⠏⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⢀⣀⣀⣀⣀⣀⣾⣿⠃⠀⠀⠀⠘⣿⣷⣐⣾⣿⠃⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⠿⠿⠿⠿⠿⢿⣿⣧⠀⠀⠀⠀⠀⠈⢿⣿⡿⠁⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⢻⣿⡆⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⠛⠛⠃⠀⠀⠀⠀⠀⠛⠛⠀⠀⠀⠀⠀⠀⠘⠛⠛⠀⠀⠀⠀⠀⠘⠛⠃⠀⠀\n\n");
	printf("⠀⠀⠀⠀⣠⣤⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⢀⣤⣄⠀⠀⠀⠀⠀⣠⡄⠀⠀⣤⣤⠀⠀⠀⠀⠀⣤⣄\n");
	printf("⠀⠀⠀⣰⣿⣿⣇⠀⠀⠀⠀⢠⣾⡿⠋⠉⠉⠛⢿⣧⡀⠀⠀⠀⠀⣼⡿⣿⡄⠀⠀⠀⠀⣿⡇⠀⠀⣿⣿⣧⡀⠀⠀⠀⣿⣿\n");
	printf("⠀⠀⢠⣿⠏⢹⣿⡄⠀⠀⢠⣿⡏⠀⠀⠀⠀⠀⠈⠛⠃⠀⠀⠀⣰⣿⠃⢿⣿⡀⠀⠀⠀⣿⡇⠀⠀⣿⡟⢻⣷⡄⠀⠀⣿⣿\n");
	printf("⠀⠀⣾⡟⠀⠀⣿⣿⠀⠀⢸⣿⡇⠀⠀⢰⣶⣶⣶⣶⣶⠀⠀⢠⣿⠏⠀⠈⣿⣧⠀⠀⠀⣿⡇⠀⠀⣿⡇⠀⠻⣿⣄⠀⣿⣿\n");
	printf("⠀⣼⣿⠿⠿⠿⠿⣿⣧⠀⠸⣿⣇⠀⠀⠀⠀⠀⢀⣿⣿⠀⠀⣾⡿⠿⠿⠿⠿⣿⡆⠀⠀⣿⡇⠀⠀⣿⡇⠀⠀⠹⣿⣆⣿⣿\n");
	printf("⢰⣿⠇⠀⠀⠀⠀⢹⣿⡆⠀⠹⣿⣦⣄⣀⣀⣠⣾⢿⣿⠀⣼⣿⠁⠀⠀⠀⠀⢿⣿⡄⠀⣿⡇⠀⠀⣿⡇⠀⠀⠀⠘⣿⣿⣿\n");
	printf("⠛⠋⠀⠀⠀⠀⠀⠀⠛⠛⠀⠀⠈⠙⠛⠛⠛⠋⠁⠘⠋⠀⠛⠋⠀⠀⠀⠀⠀⠈⠛⠃⠀⠙⠋⠀⠀⠛⠃⠀⠀⠀⠀⠈⠛⠋%s\n\n", N);
}

void	welcome(void)
{
	printf("%s⢀⣀⣀⣀⣀⣀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠀⠀⠀⣄⠀⠀⠀⠀⠀ ⣀⣀⣀⣀⡀⠀⠀⠀⠀⢀⣀⣀⣀⣀ ", C);
	printf("⠀⢀⣀⣤⣄⣀⢀⡄⠀ ⣀⣀⣀⣀⣀⣀⣀⡀\n");
	printf("⠀⠈⢿⣿⣿⣅⠀⠀⠀⢨⡿⠉⠀⠀⠀⠀⠀⣼⣿⡄⠀⠀⠀⠀⠀⢸⣿⣿⣿⣧⠀⠀⠀⢀⣾⣿⣿⣿⠁");
	printf("⠀⢰⣿⡏⠁⠈⠙⢿⡇⠀⠀⢹⣿⣿⡏⠙⣿⣿⣷⠀\n");
	printf("⠀⠀⠈⢿⣿⣿⣆⠀⣰⡟⠁⠀⠀⠀⠀⠀⣰⣿⣿⣿⡄⠀⠀⠀⠀⢸⡇⢹⣿⣿⣧⠀⠀⣼⠋⣿⣿⣿⠀");
	printf("⠀⢻⣿⣿⣦⣄⡀⠈⠃⠀⠀⢸⣿⣿⡇⠀⣿⣿⣿⠃\n");
	printf("⠀⠀⠀⠈⢿⣿⣿⣶⡟⠀⠀⠀⠀⠀⠀⣰⡟⠘⣿⣿⣿⡀⠀⠀⠀⢸⡇⠀⢻⣿⣿⣆⣰⠇⠀⣿⣿⣿⠀");
	printf("⠀⠈⠻⢿⣿⣿⣿⣷⣄⠀⠀⢸⣿⣿⡷⠶⠿⠟⠋⠀\n");
	printf("⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⢠⡿⠷⠶⠾⣿⣿⣷⡀⠀⠀⢸⡇⠀⠀⢿⣿⣿⡟⠀⠀⣿⣿⣿⠀");
	printf("⠀⣶⡀⠀⠈⠙⢿⣿⣿⠀⠀⢸⣿⣿⡇⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⢀⣿⣿⣿⡀⠀⠀⠀⠀⣠⣿⡁⠀⠀⠀⢸⣿⣿⣷⡀⠀⢠⣧⡀⠀⠈⢿⡿⠁⠀⢀⣿⣿⣿⡀");
	printf("⠀⣿⣷⣄⡀⠀⣠⣿⡟⠀⠀⣸⣿⣿⡇⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠀⠀⠈⠉⠉⠉⠁⠀⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⠀⠈⠁⠀⠈⠉⠉⠉⠉⠉⠁");
	printf("⠙⠁⠉⠙⠛⠉⠁⠀⠀⠉⠉⠉⠉⠉⠉⠀⠀⠀%s\n", N);
	printf("%sWelcome to Yet Another MiniShell Project v. 1.6", O_C);
	printf(" (YAMSP)!%s\n", N);
	printf("%sIt is as beautiful as a shell 🐚 and has two", O_C);
	printf(" extra modes.%s\n", N);
	printf("%sFeel free to explore our code and find how to", O_C);
	printf(" activate them!%s\n\n", N);
}

void	secret_mode(void)
{
	printf("%s⠠⢲⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢟⢿⠀\n", Y);
	printf("%s⠳⠊⠜⢆⡀⠀⠻⣷⣶⣄⣀⠔⢋⣡⣤⡤⣟⡄⠀⠀⠀⠀⠀⢰⣁⣀⢚⠟\n", Y);
	printf("%s⠈⢀⠰⡁⢳⣆⠀⠀⠉⠙⢏⠖⣻⠟⠛⢯⢻⢿⡀⠀⠀⠀⣴⣷⣶⣮⠃⠀\n", Y);
	printf("%s⠀⠈⠲⣅⡼⣹⣶⣀⠀⠀⢸⡔⠉⠀⠀⠘⡼⡘⡇⠀⠀⣴⣿⣿⣿⡟⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠈⢿⣿⣿⣿⣷⣤⣴⣧⣄⡠⣔⣚⣩⠿⣾⣴⠻⢿⣿⣿⡟⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣷⣆⠚⣿⢃⠼⠀⠰⠃⠍⣯⣹⣿⡿⠁⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⢑⡒⠒⣶⣟⢩⠞⣿⡟⠁⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⡿⣿⣿⣿⢀⣉⣽⡓⡈⡷⠤⢿⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⣇⠉⠘⡆⠀⢈⠟⣾⠣⠀⡟⠀⣰⡦⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢾⣄⠀⢱⠀⣀⣀⣈⣀⣀⣇⢠⣿⠃⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣞⣦⣾⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡟⢻⠛⠛⠛⠛⠻⠿⢿⣿⣿⡆⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠁⢸⠀⠀⠀⡠⠀⠀⠸⡏⠉⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡸⢸⠀⢸⠀⠀⠈⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠓⢼⣶⣿⣶⣷⣶⣶⣦⣶⠔⠁⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡿⠟⢿⣿⠟⢻⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠏⠀⠀⢸⣇⣠⡏⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡏⠉⠙⠋⢹⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⡿⢠⠇⠀⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⠀⠀⢰⠇⡸⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡧⠤⢼⡶⠳⡄⠀⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣇⣀⣀⢹⡖⠛⠀⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", Y);
	printf("%s\nPraise the Sun, dear friend!\n\n", Y);
}

void	uwu_mode(void)
{
	printf("%sUwU\n", M);
	printf("⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕\n");
	printf("⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅⡄⢕⢕⢕⢕⢕⢕⢕⢕⢕\n");
	printf("⢕⢕⢕⢕⢕⠅⢗⢕⠕⣠⠄⣗⢕⢕⠕⢕⢕⢕⠕⢠⣿⠐⢕⢕⢕⠑⢕⢕⠵⢕\n");
	printf("⢕⢕⢕⢕⠁⢜⠕⢁⣴⣿⡇⢓⢕⢵⢐⢕⢕⠕⢁⣾⢿⣧⠑⢕⢕⠄⢑⢕⠅⢕\n");
	printf("⢕⢕⠵⢁⠔⢁⣤⣤⣶⣶⣶⡐⣕⢽⠐⢕⠕⣡⣾⣶⣶⣶⣤⡁⢓⢕⠄⢑⢅⢑\n");
	printf("⠍⣧⠄⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔⢕⢄⢡⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱⢐\n");
	printf("⢠⢕⠅⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈⣿⣿⣿⣿⠏⢹⣷⣷⡅⢐\n");
	printf("⣔⢕⢥⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇⢔\n");
	printf("⢕⢕⢽⢸⢟⢟⢖⢖⢤⣶⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦⢤⢤⢔⢞⢿⢿⣿⠁⢕\n");
	printf("⢕⢕⠅⣐⢕⢕⢕⢕⢕⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿⢗⢕⢕⢕⢕⢕⢕⡏⣘⢕\n");
	printf("⢕⢕⠅⢓⣕⣕⣕⣕⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣕⢕⢕⢕⢕⡵⢀⢕⢕\n");
	printf("⢑⢕⠃⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⢕⢕⢕\n");
	printf("⣆⢕⠄⢱⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁⢕⢕⠕⢁\n");
	printf("⣿⣦⡀⣿⣿⣷⣶⣬⣍⣛⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭⣤⣂⢜⠕⢑⣡⣴⣿\n");
	printf("⠀⠀⠀⣿⣿⡆⠀⠀⢸⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⣾⣿⡆⠀\n");
	printf("⠀⠀⠀⣿⣿⡇⠀⠀⢸⣿⢰⣿⡆⠀⣾⣿⡆⠀⣾⣷ ⣿⣿⡇⠀⠀⣿⣿⡇⠀\n");
	printf("⠀⠀⠀⣿⣿⡇⠀⠀⢸⣿⠘⣿⣿⣤⣿⣿⣿⣤⣿⡇⢻⣿⡇⠀⠀⣿⣿⡇⠀\n");
	printf("⠀⠀⠀⣿⣿⡇⠀⠀⢸⡿⠀⢹⣿⣿⣿⣿⣿⣿⣿⠁⢸⣿⣇⠀⢀⣿⣿⠇⠀\n");
	printf("⠀⠀⠀⠙⢿⣷⣶⣶⡿⠁⠀⠈⣿⣿⠟⠀⣿⣿⠇⠀⠈⠻⣿⣶⣾⡿⠋⠀\n");
}

void	normal_mode(void)
{
	printf("%s⢀⣀⡀⠀⠀⠀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣀⡀\n", N);
	printf("⢸⣿⣿⣆⠀⠀⣿⣿⠀⠀⠀⣀⣀⣀⡀⠀⠀⠀⣀⡀⢀⣀⠀⢀⣀⠀⣀⣀⡀⢀⣀⣀⡀⠀⠀⠀⢀⣀⣀⡀⣀⣀⠀⢸⣿⡇\n");
	printf("⢸⣿⣿⣿⣧⡀⣿⣿⠀⢠⣾⣿⠟⠻⣿⣷⡀⠀⣿⣷⠿⠿⠀⣻⣿⡿⠻⣿⣿⡿⠟⢿⣿⡆⠀⣼⣿⠿⠛⢿⣿⣿⠀⢸⣿⡇\n");
	printf("⢸⣿⡇⠙⣿⣿⣿⣿⠀⢸⣿⡇⠀⠀⢸⣿⡇⠀⣿⣿⠀⠀⠀⣹⣿⠁⠀⢸⣿⡇⠀⢸⣿⡇⢸⣿⣏⠀⠀⠀⣿⣿⠀⢸⣿⡇\n");
	printf("⢸⣿⡇⠀⠈⢻⣿⣿⠀⠈⢿⣿⣦⣶⣿⡿⠃⠀⣿⣿⠀⠀⠀⣼⣿⠀⠀⢸⣿⡇⠀⢸⣿⡇⠀⢻⣿⣶⣦⣾⣿⣿⠀⢸⣿⡇\n");
	printf("⠈⠉⠁⠀⠀⠀⠉⠉⠀⠀⠀⠉⠉⠉⠉⠀⠀⠀⠉⠉⠀⠀⠀⠈⠉⠀⠀⠈⠉⠁⠀⠈⠉⠁⠀⠀⠈⠉⠉⠁⠉⠉⠀⠈⠉⠁\n");
	printf("%sBack to normal!\n", N);
}
