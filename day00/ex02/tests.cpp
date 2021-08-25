// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	// equivalent a ecrire typedef struct s_account {} t_account;
	// on cree un tableau de type class Account avec pour alias accounts_t
	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	// revient a declarer une struct pair acc_int_s 
	//{ Account first = accounts_t::iterator;
	//	ints_t	second = ints_t::iterator;
	//}	acc_int_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	// on utilise un const ici pour optimiser la compilation et rendre le code plus clair
	// les valeurs ici declarees n'ont pas vocation a etre modifiees
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );
	// les 3 lignes avant consistent a init un vector a partir d'un array classique
	// amounts_size permet d'obtenir la taille du tableau en prenant sa taille totale divisée par la taille d'un de ces éléments
	// on declare ensuite un vector de type accounts_t et nomme accounts 
	// on passe en param le ptr sur le premier element et sur le dernier du tableau
	// en c++11 et autre une ecriture plus compact est possible

	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	// declare un ptr nommé ints_t -> il pourra prendre les valeurs retour de begin et end
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	// je declare une paire it de type acc_int_it comme un simple int i
	// j'accede au valeur de depart des tableau ints_t et accounts_t
	// et tant que je ne suis pas à la fin de chaque tableau, j'incrémente 
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	/* la fonction for each = std::for_each(debut, fin, fonction)
	les 2 premiers param = debut et fin structure (string par ex), l'ensemble
	des elements entre ces 2 ptr seront passe dans dans la fonction en 3e param
	NB: si la fonction appelée construit des objets (class) => construction et destruction
	a chaque iteration du for_each => 2 solutions -> boucle classique ou utiliser 
	un foncteur
	foncteur = class /objet qui surcharge l'opérateur ()
	la bibliotheque standard en definit un certain nbres par defaut
	le foncteur () est necesssaire pour adapter une fonction classique en foncteur
	la bibilotheque standard fourni des adapteurs qui transforment un ptr sur
	la fonction classique en foncteur
	NB -> en pratique il est possible d'appeler une fonction directement,
	le compilateur pourra le gérer même si l'écriture est incorrecte
	les nombreux adaptateurs disponibles prennent soit un ptr soit la ref
	de la fonction passée en param
	Pour faciliter la gestion de ces differents adaptateurs on utilise
	les fonctions mem_fun ou mem_fun_ref
	les foncteurs ne prennent que 1 ou 2 param (unary / binary functor)

	*/

	// mem_fun_ref = fonction wrapper // encapsuleur // functor qui renvoie
	// difference function template vs class template
	// qu'est qu'un functor / foncteur ?
	// fonction objet = objet qui se comporte comme une fonction
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
